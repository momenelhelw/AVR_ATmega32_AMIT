/*
* UART.c

*  Author: Cherry Hani
*/


#include "UART.h"


void UART_Init(void)
{
	/*Baud rate value variable*/
	uint16_t UBRR_Val = 0;
	/*Enable Transmitter and Receiver bits*/
	UCSRB = (1 << RXEN) | (1 << TXEN);
	/*Full configuration for UART*/
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);
	/*Baud Rate Calculations*/
	UBRR_Val = (((FRQ) / (16 * BAUDRATE)) - 1);//11110101 00111001
	UBRRL = UBRR_Val;     //00000000 00111001
	UBRRH = UBRR_Val >> 8;//00000000 11110101
}
void UART_Transmit(uint8_t data)
{
	while (!(UCSRA & (1<<UDRE)));
	UDR = data;
}
uint8_t UART_Receive(void)
{
	while(!(UCSRA & (1<<RXC))); 
	return UDR;
	
}