/*
* S7SEG.c

*  Author: Cherry Hani
*/

#include "S7SEG.h"

void S7SEG_Initialization(void)
{
	//Define direction for pins
	DIO_SetPin_Direction(S7SEG_CNTRL_PORT, S7SEG_EN1, S7SEG_OUTPUT);
	DIO_SetPin_Direction(S7SEG_CNTRL_PORT, S7SEG_EN2, S7SEG_OUTPUT);
	DIO_SetPin_Direction(S7SEG_CNTRL_PORT, S7SEG_DIP, S7SEG_OUTPUT);
	DIO_SetPin_Direction(S7SEG_DATA_PORT, S7SEG_DTA_A, S7SEG_OUTPUT);
	DIO_SetPin_Direction(S7SEG_DATA_PORT, S7SEG_DTA_B, S7SEG_OUTPUT);
	DIO_SetPin_Direction(S7SEG_DATA_PORT, S7SEG_DTA_C, S7SEG_OUTPUT);
	DIO_SetPin_Direction(S7SEG_DATA_PORT, S7SEG_DTA_D, S7SEG_OUTPUT);
	//Initialize all pins for module
	DIO_SetPin_State(S7SEG_CNTRL_PORT, S7SEG_EN1, S7SEG_LOW);
	DIO_SetPin_State(S7SEG_CNTRL_PORT, S7SEG_EN2, S7SEG_LOW);
	DIO_SetPin_State(S7SEG_CNTRL_PORT, S7SEG_DIP, S7SEG_LOW);
	DIO_SetPin_State(S7SEG_DATA_PORT, S7SEG_DTA_A, S7SEG_LOW);
	DIO_SetPin_State(S7SEG_DATA_PORT, S7SEG_DTA_B, S7SEG_LOW);
	DIO_SetPin_State(S7SEG_DATA_PORT, S7SEG_DTA_C, S7SEG_LOW);
	DIO_SetPin_State(S7SEG_DATA_PORT, S7SEG_DTA_D, S7SEG_LOW);
}
void S7SEG_Enable1(void)
{
	DIO_SetPin_State(S7SEG_CNTRL_PORT, S7SEG_EN1, S7SEG_HIGH);
}
void S7SEG_Disable1(void)
{
	DIO_SetPin_State(S7SEG_CNTRL_PORT, S7SEG_EN1, S7SEG_LOW);
}
void S7SEG_Enable2(void)
{
	DIO_SetPin_State(S7SEG_CNTRL_PORT, S7SEG_EN2, S7SEG_HIGH);
}
void S7SEG_Disable2(void)
{
	DIO_SetPin_State(S7SEG_CNTRL_PORT, S7SEG_EN2, S7SEG_LOW);
}
void S7SEG_DIP_Enable(void)
{
	DIO_SetPin_State(S7SEG_CNTRL_PORT, S7SEG_DIP, S7SEG_HIGH);
}
void S7SEG_DIP_Disable(void)
{
	DIO_SetPin_State(S7SEG_CNTRL_PORT, S7SEG_DIP, S7SEG_LOW);
}
void S7SEG_Write_Number(uint8_t number)
{
	uint8_t data0 = number % 10;//Get number in units
	uint8_t data1 = number / 10;//Get number in tens
	
	S7SEG_Enable1();
	S7SEG_Disable2();
	PORTA = (data0<<4) | (PORTA & 0x0F);//0b00001111
	_delay_ms(10);
	S7SEG_Disable1();
	S7SEG_Enable2();
	PORTA = (data1<<4) | (PORTA & 0x0F);//0b00001111
	_delay_ms(10);
}