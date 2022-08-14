/************************************
*		 	2014 종합설계			*
*									*
*	 Team : FUNTECH					*
*	 Member : 김경훈,김상호,김창호  *
*	 		  박서희,윤건우,허 담   *
*	 Project : 팡팡마블 	 		*
*	 Tool : AVRStudio 4.0  			*
*	 Language : C 		 			*
************************************/


#define F_CPU 16000000UL //Atemga128 16Mhz clock speed

#include<stdio.h>
#include<avr/io.h>
#include<util/delay.h> // use "delay function"
#include <stdlib.h>
#include <string.h>
#include <avr/interrupt.h>
#include "uart.h"

#define SW1ON 0x01
#define SW2ON 0x02
#define SW3ON 0x04
#define SW4ON 0x08

#define WAIT_GAME 0
#define WAIT_DICE 1
#define DICE_POP 2

unsigned char U1_GetByte(void);



int red_array[] = {0x00, 0x10, 0x20, 0x40, 0x80, 0x04, 0x08, 0x10, 0x01, 0x20, 0x40, 0x80, 
				//	      1	    2     3     4     5	    6      7    8     9     10    11
				   0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x08, 0x01, 0x02, 0x04};
				//  12    13    14    15    16    17    18    19    20    21    22
					   
int blue_array[] = {0x00, 0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x00, 0x40, 0x80, 0x01,
				//    0     1     2     3     4     5     6     7     8     9    10    11
				    0x00, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x00, 0x80, 0x01, 0x02};
				//   12	   13    14    15    16    17    18    19    20    21    22 

char *red_port[] = {&PORTD, &PORTD, &PORTD, &PORTD, &PORTD, &PORTE, &PORTE, &PORTE, &PORTF, &PORTE, 
//                    0       1       2       3       4		  5		  6		  7		  8		  9
			   &PORTE, &PORTE, &PORTF, &PORTF, &PORTF, &PORTF, &PORTF, &PORTF, &PORTF, &PORTG,
//				  10	  11 	 12		 13		 14		 15		 16		 17		 18		 19
			   &PORTG, &PORTG, &PORTG};
//				  20	  21	 22			  

int *blue_port[] = {&PORTA, &PORTA, &PORTA, &PORTA, &PORTA, &PORTA, &PORTA, &PORTA, &PORTA, &PORTA,
//						0		1		2		3		4		5		6		7		8		9
					 &PORTA, &PORTC, &PORTC, &PORTC, &PORTC, &PORTC, &PORTC, &PORTC, &PORTC, &PORTC,
//						10		11		12		13		14		15		16		17		18		19
					 &PORTC, &PORTD, &PORTD};
//						20		21		22

int horse_point = 0;
int start_flag = 0;

volatile unsigned int cnt=0; // TIMER Counter
volatile unsigned int cnt1=0; 
volatile unsigned int index=1; 
volatile unsigned int game_flag = WAIT_GAME; 
volatile unsigned int standby_flag=1; 
volatile unsigned int redORblue=0; 

void InitPort(void)
{
	DDRA = 0xFF; // blue led
	DDRB = 0xF0; // pinb 0~3 switch
	DDRC = 0xFF; // blue led
	DDRD = 0xF3; // 2,3 blutooth, 0,1,4~7 led
	DDRE = 0xFF; // led
	DDRF = 0xFF; // led
	DDRG = 0xFF; // led
}

void InitTIMER(void)
{
	TCNT0 = 0x06; // TIMER register for 1ms
 	TCCR0 = 0x04; // freescale 64
	TIMSK = 0x01;
 	SREG = 0x80; //Interrupt enable register
}

void InitPWM(void)
{
	//Initialize PWM Register
	TCCR1B |= (0<<WGM13) | (0<<WGM12);
	TCCR1A |= (0<<WGM11) | (1<<WGM10); //위상 변경 pwm 모드
	TCCR1B |= (0<<CS12) | (0<<CS11) | (1<<CS10);
	TCCR1A |= (1<<COM1A1) | (0<<COM1A0); // invert mode

	TCNT1 = 0;
}

void LED_ON(void)
{
 //All LED ON
	PORTA = 0xFF;
	PORTC = 0xFF;
	PORTD |= 0xF3;
	PORTE |= 0xFC;
	PORTF = 0xFF;
	PORTG |= 0x0F;
}

void LED_OFF(void)
{
 //ALL LED OFF
	PORTA &= 0x00;
	PORTC &= 0x00;
	PORTD &= 0x0C;
	PORTE &= 0x03;
	PORTF &= 0x00;
	PORTG &= 0x10;
}


ISR(TIMER0_OVF_vect) // TIMER0 Overflow Service routine
{
	//Execute TIMER Interrupt every 1ms
	TCNT0= 0x83; // Initial value is 131
	cnt++; 

	if(cnt1 < 2)
		standby_flag = 0;
	else
	{
		if(cnt1 == 4)
		{
			cnt1 = 0;
			standby_flag = 0;
		}
		standby_flag = 1;
	}

	if(standby_flag == 0)
	{
		if(cnt<500)
 			LED_ON();
		else if ((cnt>500)&&(cnt<1000))
 			LED_OFF();
		else if(cnt>1000)
		{
			cnt=0;
			cnt1++;
		}
			
	}

	if(standby_flag == 1)
	{
		if(cnt<125)
		{
			if(redORblue == 0)
				*red_port[index] = red_array[index];
			else
				*blue_port[index] = blue_array[index];
		}
			
		else if ((cnt>125)&&(cnt<250))
 			LED_OFF();
		else if(cnt>250)
		{
			if(index == 22)
			{
				if(redORblue == 0)
				{
					redORblue = 1;
					index = 0;
					cnt1++;
				}
				else
				{
					redORblue = 0;
					index = 0;
					cnt1++;
				}
			}
			cnt=0;
			index++;
		}
	}
	
}

void PopDice(void)
{
	if(game_flag == DICE_POP)
	{
		OCR1A = 0xC5; //Motor power
		_delay_ms(2000); //Wait for communication between dice and table
		OCR1A = 0x00; //Stop motor
		while(PINB & 15);
	}
	game_flag = WAIT_DICE;
}

void MsgPassing(void)
{
	UART1_PutString("N"); //send 'N' to dice after spinning
}

void move_blue(void)
{
	PORTA = 0xFF;
	PORTC = 0xFF;
	PORTD |= 0x03;
	if(horse_point == 1 || horse_point == 8 || horse_point == 12 || horse_point == 19);
	else
	{
		if(horse_point == 21)
			*blue_port[horse_point] &= ~blue_array[horse_point];
		else if(horse_point == 22)
			*blue_port[horse_point] &= ~blue_array[horse_point];
		else
			*blue_port[horse_point] = ~blue_array[horse_point];
	}
	
}

void shock(void)
{
	//Liar detector running
	int temp = 0;

		while(1)
		{
			if(temp == 2)
				break;
			PORTB = 0b11110000;	
			PORTG = 0b00010000;
			_delay_ms(500);
			PORTB = 0b00000000;
			PORTG = 0b11100000;
			_delay_ms(500);
			temp++;
}

void move_horse(int diceNum)
{
 //주사위에 나온 숫자만큼 적색 LED 점등
	for(int i=0; i<diceNum; i++)
	{
		if(horse_point == 22)
			horse_point = 0;
		horse_point++;
		LED_OFF();
		*red_port[horse_point] = red_array[horse_point];
		move_blue();
		_delay_ms(1000);
	}
	if(horse_point == 1 || horse_point == 8 || horse_point == 12 || horse_point == 19)
	{
		shock(); //shocking on the corner
	}

}

void receive_data()
{
		switch(U1_GetByte()) //receive data from dice
		{
			case '1':
				move_horse(1);
				RxBuffer = 'X';
				break;

			case '2':
				move_horse(2);
				RxBuffer = 'X';
				break;

			case '3':
				move_horse(3);
				RxBuffer = 'X';
				break;

			case '4':
				move_horse(4);
				RxBuffer = 'X';
				break;

			case '5':
				move_horse(5);
				RxBuffer = 'X';
				break;

			case '6':
				move_horse(6);
				RxBuffer = 'X';
				break;
		}
}

void CatchSw(void)
{
	while(!(PINB & 15)); //wait for switch
	if(PINB == 0x0F)
	{
		if(game_flag == WAIT_GAME)
		{ //start GAME MODE
			
			game_flag = WAIT_DICE;
			horse_point = 1;
			TIMSK = 0x00; //disable TIMER INTERRUPT
			SREG = 0x00; //disable INTERRUPT
			LED_OFF();
			*red_port[horse_point] = red_array[horse_point];
			move_blue();
			shock(); //reset liar detector
			while(PINB & 15);
		}
		else if(game_flag == WAIT_DICE)
		{
			
			game_flag = DICE_POP;
			PopDice();
			_delay_ms(1500); //wait for sensing the light
			MsgPassing();
			receive_data();

		}
	}
}

int main(void)
{

	InitPort();
	UART1_Init();
	InitTIMER();
	InitPWM();

	while(1)
	{
		CatchSw();

	}
	return 0;	
}
