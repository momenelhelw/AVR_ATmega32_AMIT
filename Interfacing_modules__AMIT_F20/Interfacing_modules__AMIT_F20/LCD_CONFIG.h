/*
 * LCD_CONFIG.h
 *
 * Created: 1/22/2021 7:00:34 PM
 *  Author: 
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

/*
What should i do here !
1- Macros needed
2- Renaming of ports needed
3- Renaming of pins needed
4- States
*/
#include "CPU_Configurations.h"
/*LCD Mode will be used*/
#define LCD_MODE      4
/*Command Port*/
#define LCD_CMD_PORT  DIO_PORTB
/*Data Port*/
#define LCD_DTA_PORT  DIO_PORTA
/*Control Pins*/
#define LCD_RS        DIO_PIN1
#define LCD_RW        DIO_PIN2
#define LCD_EN        DIO_PIN3
/*Data Pins*/
#define LCD_D4        DIO_PIN4
#define LCD_D5        DIO_PIN5
#define LCD_D6        DIO_PIN6
#define LCD_D7        DIO_PIN7
/*State*/
#define LCD_OUTPUT    DIO_OUTPUT
#define LCD_LOW       DIO_LOW
#define LCD_HIGH      DIO_HIGH

#endif /* LCD_CONFIG_H_ */