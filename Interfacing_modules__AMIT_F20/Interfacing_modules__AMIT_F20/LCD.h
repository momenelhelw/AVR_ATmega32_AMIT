/*
 * LCD.h
 *
 * Created: 1/22/2021 7:00:44 PM
 *  Author: 
 */ 


#ifndef LCD_H_
#define LCD_H_

/*
What should i write here!
1- Macros
2- User defined data types (Structure - Union - Enumeration)
3- Global variables (if Exist)
4- Functions prototypes
*/

#include "LCD_CONFIG.h"

void LCD_Init(void);               /*Initialize LCD*/
void LCD_WRITE_CMD(uint8_t cmd);   /*Write command inside control register*/
void LCD_WRITE_DTA(uint8_t dta);   /*write data inside data register*/
void LCD_WRITE_STR(uint8_t *str);  /*write string on screen*/
void LCD_WRITE_CHR(uint32_t numbr);/*write number on screen*/
void LCD_CLEAR(void);              /*Clear data display on screen*/

#endif /* LCD_H_ */