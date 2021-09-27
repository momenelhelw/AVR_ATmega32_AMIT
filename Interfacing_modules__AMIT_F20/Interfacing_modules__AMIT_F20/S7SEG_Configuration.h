/*
 * S7SEG_Configuration.h

 *  Author: Cherry Hani
 */ 


#ifndef S7SEG_CONFIGURATION_H_
#define S7SEG_CONFIGURATION_H_

#include "CPU_Configurations.h"

#define S7SEG_EN1 DIO_PIN1
#define S7SEG_EN2 DIO_PIN2
#define S7SEG_DIP DIO_PIN3

#define S7SEG_DTA_A DIO_PIN4
#define S7SEG_DTA_B DIO_PIN5
#define S7SEG_DTA_C DIO_PIN6
#define S7SEG_DTA_D DIO_PIN7

#define S7SEG_CNTRL_PORT DIO_PORTB 
#define S7SEG_DATA_PORT  DIO_PORTA

#define S7SEG_OUTPUT DIO_OUTPUT

#define S7SEG_LOW    DIO_LOW
#define S7SEG_HIGH   DIO_HIGH


#endif /* S7SEG_CONFIGURATION_H_ */