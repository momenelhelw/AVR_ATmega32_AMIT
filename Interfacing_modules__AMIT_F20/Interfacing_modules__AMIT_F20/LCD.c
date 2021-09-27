/*
* LCD.c
*  Author: Cherry Hani
*/

/*
1- Macros
2- Implementation of functions
*/

#include "LCD.h"
void LCD_Init(void)/*Initialize LCD*/
{
	/*Define direction for command pins*/
	DIO_SetPin_Direction(LCD_CMD_PORT, LCD_RS, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_CMD_PORT, LCD_RW, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_CMD_PORT, LCD_EN, LCD_OUTPUT);
	/*Define direction for data pins*/
	DIO_SetPin_Direction(LCD_DTA_PORT, LCD_D4, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_DTA_PORT, LCD_D5, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_DTA_PORT, LCD_D6, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_DTA_PORT, LCD_D7, LCD_OUTPUT);
	/*LCD controller is slower than MC speed*/
	_delay_ms(1000);
	LCD_WRITE_CMD(0x02);
	LCD_WRITE_CMD(0x33);
	LCD_WRITE_CMD(0x32);
	LCD_WRITE_CMD(0x28);
	LCD_WRITE_CMD(0x0C);
	LCD_WRITE_CMD(0x01);
	LCD_WRITE_CMD(0x06);
}
void LCD_WRITE_CMD(uint8_t cmd)/*Write command inside control register*/
{
	/*RS is logic(0) to write inside control register*/
	DIO_SetPin_State(LCD_CMD_PORT, LCD_RS, LCD_LOW);
	/*RW is logic(0) to write on LCD*/
	DIO_SetPin_State(LCD_CMD_PORT, LCD_RW, LCD_LOW);
	/*To be sure of enable state before start operation*/
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	/*Send high nibble of command*/
	PORTA = (cmd & 0xF0) | (PORTA & 0x0F);
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	/*send low nibble of command*/
	PORTA = (cmd << 4) | (PORTA & 0x0F);
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	/*Delay for 2 millisecond*/
	_delay_ms(2);
}
void LCD_WRITE_DTA(uint8_t dta)/*write data inside data register*/
{
	/*RS is logic(0) to write inside data register*/
	DIO_SetPin_State(LCD_CMD_PORT, LCD_RS, LCD_HIGH);
	/*RW is logic(0) to write on LCD*/
	DIO_SetPin_State(LCD_CMD_PORT, LCD_RW, LCD_LOW);
	/*To be sure of enable state before start operation*/
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	/*Send high nibble of command*/
	PORTA = (dta & 0xF0) | (PORTA & 0x0F);
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	/*send low nibble of command*/
	PORTA = (dta << 4) | (PORTA & 0x0F);
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_State(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	/*Delay for 2 millisecond*/
	_delay_ms(2);
}
void LCD_WRITE_STR(uint8_t* str)/*write string on screen*/
{
	while(*str != '\0')
	{
		LCD_WRITE_DTA(*str);
		str++;
	}
}
void LCD_WRITE_CHR(uint32_t numbr)
{
	//uint8_t num[10];
	LCD_WRITE_DTA(numbr);
	//ltoa(numbr, (uint8_t*)num, 10);//Long to Ascii
	//LCD_WRITE_STR(num);
}
void LCD_CLEAR(void)/*Clear data display on screen*/
{
	LCD_WRITE_CMD(0x01);
}