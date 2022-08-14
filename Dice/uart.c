#include "uart.h"
#define u1_IsReceiveData()		((UCSR1A & 0x80))
#define u1_RxData()		 					(UDR1)
#define u1_WaitForReceive()		while(!(UCSR1A & 0x80))

ISR(USART1_RX_vect) {
	//수신 데이터를 UDR0레지스터에서 RxBuffer 변수에 저장 
	RxBuffer = UDR1;
	//수신 상태를 나타내는 플래그 변수를 1로 설정 
	RxFlag = 1;
}

//UART1 초기화 함수
void UART1_Init(){
//	unsigned long temp;

	UCSR1B = (1<<TXEN) | (1<<RXEN);
	UCSR1B |= (1<<RXCIE); //수신완료 인터럽트 활성화 
	UBRR1H = 0x00;
	UBRR1L = 8;
}
//1바이트의 데이터를 송신하는 함수 
void UART1_PutChar(unsigned int byData){
	while(!(UCSR1A & (1<<UDRE))); //송신 버퍼가 빌 때까지 대기
	UDR1 = byData; //송신 버퍼에 데이터 저장 
}

void UART1_PutString(char *Str) {
	while(*Str)
		UART1_PutChar(*Str++); //1바이트의 데이터를 송신 
}


unsigned char U1_IsGetByte(void)
{
	return u1_IsReceiveData();
}

unsigned char U1_GetByte(void)
{
	u1_WaitForReceive();
	
	return u1_RxData();
}
