#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <avr/interrupt.h>
#include "uart.h"

#define LED_1 OCR3C
#define LED_2 OCR1A
#define LED_3 OCR1B
#define LED_4 OCR1C
#define LED_5 OCR3A
#define LED_6 OCR3B

char Number = 0;
int test[] = {0, 2, 6, 5, 4, 1, 7 };
int adc_value[] = {0, };

void receive_data()
{
		switch(RxBuffer){

		case 'f':
			break;
		}

 		
}

int GET_ADC(int muxx)
{
	ADMUX = muxx;
	ADCSRA = (1<<ADEN)|(1<<ADSC)|(6<<ADPS0); //분주비 128
	_delay_ms(5);
 	while(!(ADCSRA&(1<<ADIF)));
	
	return ADC;
}

int find_index(int arr[]){
	int max_value = arr[1];

	for(int index=1; index <7; index++)
	{
		if(arr[index] >= max_value){
				max_value = arr[index];
			}		
	}
	for(int index2 = 1; index2 <7; index2++){
		if(arr[index2] == max_value) return index2;
	
	}

}


int main()
{

int light_strong=0;
int Dice_num =0;

DDRB = 0xff;
DDRE = 0xff;

////////////////////////////////////////////////////////////////////////
UART1_Init();
UART1_PutString("Dice Connected");

//////////////////////////PWM제어///////////////////////////////////////

//TCCR0 |= (0<<WGM01) | (1<<WGM00); //위상 변경 pwm 모드 
//TCCR0 |= (1<<COM01) | (0<<COM00); // invert mode
//TCCR0 |= (0<<CS02) | (0<<CS01) | (1<<CS00); // prescale 128

TCCR1B |= (0<<WGM13) | (0<<WGM12);
TCCR1A |= (0<<WGM11) | (1<<WGM10); //위상 변경 pwm 모드
TCCR1B |= (0<<CS12) | (0<<CS11) | (1<<CS10);
TCCR1A |= (1<<COM1A1) | (0<<COM1A0); // invert mode
TCCR1A |= (1<<COM1B1) | (0<<COM1B0);
TCCR1A |= (1<<COM1C1) | (0<<COM1C0);

TCCR3B |= (0<<WGM33) | (0<<WGM32);
TCCR3A |= (0<<WGM31) | (1<<WGM30); //위상 변경 pwm 모드
TCCR3B |= (0<<CS32) | (0<<CS31) | (1<<CS30); //prescale 8
TCCR3A |= (1<<COM3A1) | (0<<COM3A0); // invert mode
TCCR3A |= (1<<COM3B1) | (0<<COM3B0); // invert mode
TCCR3A |= (1<<COM3C1) | (0<<COM3C0);

TCNT0 = 0; 
TCNT1 = 0;
TCNT3 = 0;

/////////////////////////////////////////////////////////////////


	while(1)
	{
	
	light_strong+= 2;
	if( light_strong > 0x50 )
	{
		light_strong = 0x00;
	}

	for(int i= 1; i< 7; i++){
	adc_value[i] = GET_ADC(i);
	}
	if(RxBuffer == 'N')
	{
		switch(find_index(adc_value))	
		{
		case 1:
		LED_1 = 0x00;
		LED_2 = 0x00;
		LED_3 = 0x00;
		LED_4 = 0x00;
		LED_5 = 0x00;
		LED_6 = light_strong;
		UART1_PutString("1");
		break;

		case 2:
		LED_1 = 0x00;
		LED_2 = 0x00;
		LED_3 = 0x00;
		LED_4 = light_strong;
		LED_5 = 0x00;
		LED_6 = 0x00;
		UART1_PutString("2");
		break;
	
		case 3:
		LED_1 = 0x00;
		LED_2 = 0x00;
		LED_3 = 0x00;
		LED_4 = 0x00;
		LED_5 = light_strong;
		LED_6 = 0x00;
		UART1_PutString("3");
		break;

		case 4:
		LED_1 = 0x00;
		LED_2 = light_strong;
		LED_3 = 0x00;
		LED_4 = 0x00;
		LED_5 = 0x00;
		LED_6 = 0x00;
		UART1_PutString("4");
		break;

		case 5:
		LED_1 = 0x00;
		LED_2 = 0x00;
		LED_3 = light_strong;
		LED_4 = 0x00;
		LED_5 = 0x00;
		LED_6 = 0x00;
		UART1_PutString("5");
		break;
	
		case 6:
		LED_1 = light_strong;
		LED_2 = 0x00;
		LED_3 = 0x00;
		LED_4 = 0x00;
		LED_5 = 0x00;
		LED_6 = 0x00;
		UART1_PutString("6");
		break;
		}
	}
	RxBuffer = 'A'
}
	//	_delay_ms(10);
	/*
	Dice_num++;
	if( Dice_num > 6 )
	{
		Dice_num = 1;
	}

	light_strong++; //light_strong+1;
	if( light_strong == 0xB0 )
	{
		light_strong = 0x00;
	}
		switch(Dice_num)
		{

		case 1:
		LED_1 = light_strong;
		LED_2 = 0x00;
		LED_3 = 0x00;
		LED_4 = 0x00;
		LED_5 = 0x00;
		LED_6 = 0x00;
			break;

		case 2:
		LED_2 = light_strong;
		LED_1 = 0x00;
		LED_3 = 0x00;
		LED_4 = 0x00;
		LED_5 = 0x00;
		LED_6 = 0x00;
			break;

		case 3:
		LED_3 = light_strong;
		LED_1 = 0x00;
		LED_2 = 0x00;
		LED_4 = 0x00;
		LED_5 = 0x00;
		LED_6 = 0x00;
			break;

		case 4:
		LED_4 = light_strong;
		LED_1 = 0x00;
		LED_2 = 0x00;
		LED_3 = 0x00;
		LED_5 = 0x00;
		LED_6 = 0x00;
			break;

		case 5:
		LED_5 = light_strong;
		LED_1 = 0x00;
		LED_2 = 0x00;
		LED_3 = 0x00;
		LED_4 = 0x00;
		LED_6 = 0x00;
			break;

		case 6:
		LED_6 = light_strong;
		LED_1 = 0x00;
		LED_2 = 0x00;
		LED_3 = 0x00;
		LED_4 = 0x00;
		LED_5 = 0x00;
			break;
		}

	_delay_ms(100);
	*/
//	UART1_PutString("GateBall Robot Connected");
//	receive_data();	

	
}