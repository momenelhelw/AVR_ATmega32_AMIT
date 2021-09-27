/*
 * SPI.c

 *  Author: Cherry Hani
 */ 
#include "SPI.h"

void Master_Init(void)
{
	SET_BIT(DDRB,4);
	SET_BIT(DDRB,5);
	CLR_BIT(DDRB,6);
	SET_BIT(DDRB,7);
	SPCR = 0x53;
	/*CLR_BIT(SPCR,SPIE);
	SET_BIT(SPCR,SPE);
	SET_BIT(SPCR,DORD);
	SET_BIT(SPCR,MSTR);
	SET_BIT(SPCR,SPR1);
	SET_BIT(SPCR,SPR0);
	*/
}
void Master_Trans(uint8_t data)
{
	CLR_BIT(PORTB,4);
	SPDR = data;
	while (GET_BIT(SPSR,SPIF) != 1);
}
void Slave_Init(void)
{
	CLR_BIT(DDRB,4);
	CLR_BIT(DDRB,5);
	SET_BIT(DDRB,6);
	CLR_BIT(DDRB,7);
	SPCR = 0x43;
	/*CLR_BIT(SPCR,SPIE);
	SET_BIT(SPCR,SPE);
	CLR_BIT(SPCR,DORD);
	CLR_BIT(SPCR,MSTR);
	SET_BIT(SPCR,SPR1);
	SET_BIT(SPCR,SPR0);
	*/
}
char Slave_Recv(void)
{
	while (GET_BIT(SPSR,SPIF) != 1);
	return SPDR;
}

