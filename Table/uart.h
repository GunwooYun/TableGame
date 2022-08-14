#include <avr/io.h>
#include <avr/interrupt.h>

volatile unsigned char RxBuffer;
volatile unsigned char RxFlag;

void UART1_Init();
void UART1_PutChar(unsigned int byData);
void UART1_PutString(char *Str);
