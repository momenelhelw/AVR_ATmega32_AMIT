/*
 * OUTPUT_Module_Configuration.h

 *  Author: Cherry Hani
 */ 


#ifndef OUTPUT_MODULE_CONFIGURATION_H_
#define OUTPUT_MODULE_CONFIGURATION_H_

#include "CPU_Configurations.h"

//Define pins for modules
#define LED0_DDR DIO_PORTC
#define LED0_PRT DIO_PORTC
#define LED0     DIO_PIN2

#define LED1_DDR DIO_PORTC
#define LED1_PRT DIO_PORTC
#define LED1     DIO_PIN7

#define LED2_DDR DIO_PORTD
#define LED2_PRT DIO_PORTD
#define LED2     DIO_PIN3

#define RELAY_DDR DIO_PORTA
#define RELAY_PRT DIO_PORTA
#define RELAY     DIO_PIN2

#define BUZZER_DDR DIO_PORTA
#define BUZZER_PRT DIO_PORTA
#define BUZZER     DIO_PIN3

#define LED_OUTPUT DIO_OUTPUT
#define LED_HIGH   DIO_HIGH
#define LED_LOW    DIO_LOW

#define RELAY_OUTPUT 1
#define RELAY_HIGH  1
#define RELAY_LOW   0

#define BUZZER_OUTPUT 1
#define BUZZER_HIGH  1
#define BUZZER_LOW   0




#endif /* OUTPUT_MODULE_CONFIGURATION_H_ */