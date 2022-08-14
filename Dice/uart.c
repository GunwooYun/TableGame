#include "uart.h"
#define u1_IsReceiveData()		((UCSR1A & 0x80))
#define u1_RxData()		 					(UDR1)
#define u1_WaitForReceive()		while(!(UCSR1A & 0x80))

ISR(USART1_RX_vect) {
	//���� �����͸� UDR0�������Ϳ��� RxBuffer ������ ���� 
	RxBuffer = UDR1;
	//���� ���¸� ��Ÿ���� �÷��� ������ 1�� ���� 
	RxFlag = 1;
}

//UART1 �ʱ�ȭ �Լ�
void UART1_Init(){
//	unsigned long temp;

	UCSR1B = (1<<TXEN) | (1<<RXEN);
	UCSR1B |= (1<<RXCIE); //���ſϷ� ���ͷ�Ʈ Ȱ��ȭ 
	UBRR1H = 0x00;
	UBRR1L = 8;
}
//1����Ʈ�� �����͸� �۽��ϴ� �Լ� 
void UART1_PutChar(unsigned int byData){
	while(!(UCSR1A & (1<<UDRE))); //�۽� ���۰� �� ������ ���
	UDR1 = byData; //�۽� ���ۿ� ������ ���� 
}

void UART1_PutString(char *Str) {
	while(*Str)
		UART1_PutChar(*Str++); //1����Ʈ�� �����͸� �۽� 
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
