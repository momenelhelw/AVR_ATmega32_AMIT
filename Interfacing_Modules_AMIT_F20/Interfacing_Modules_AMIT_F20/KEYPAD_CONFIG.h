/*
* KEYPAD_CONFIG.h

*  Author: Cherry Hani
*/


#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_
/*Macros*/
#include "CPU_Configurations.h"
/*Keypad port needed*/
#define KEYPAD_PORT          DIO_PORTC
/*Keypad output pins*/
#define KEYPAD_OUT_PIN0      DIO_PIN0
#define KEYPAD_OUT_PIN1      DIO_PIN1
#define KEYPAD_OUT_PIN2      DIO_PIN2
#define KEYPAD_OUT_PIN3      DIO_PIN3
/*Keypad input pins*/
#define KEYPAD_INP_PIN0      DIO_PIN4
#define KEYPAD_INP_PIN1      DIO_PIN5
#define KEYPAD_INP_PIN2      DIO_PIN6
#define KEYPAD_INP_PIN3      DIO_PIN7
/*Keypad state*/
#define KEYPAD_INPUT         DIO_INPUT
#define KEYPAD_OUTPUT        DIO_OUTPUT
/*High and low state*/
#define KEYPAD_HIGH          DIO_HIGH
#define KEYPAD_LOW           DIO_LOW
/*Start and end of columns pins*/
#define COL_INIT             0
#define COL_FINAL            3
/*Start and end of rows pins*/
#define ROW_INIT             4
#define ROW_FINAL            7
#endif /* KEYPAD_CONFIG_H_ */