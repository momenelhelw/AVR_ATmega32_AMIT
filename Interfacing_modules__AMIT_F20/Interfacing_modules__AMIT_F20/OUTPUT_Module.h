/*
 * OUTPUT_Module.h
 *  Author: Cherry Hani
 */ 


#ifndef OUTPUT_MODULE_H_
#define OUTPUT_MODULE_H_

#include "OUTPUT_Module_Configuration.h"

//Function prototype
void LED0_Initialize(void);
void LED0_ON(void);
void LED0_OFF(void);
void LED0_Toggle(void);

void LED1_Initialize(void);
void LED1_ON(void);
void LED1_OFF(void);
void LED1_Toggle(void);

void LED2_Initialize(void);
void LED2_ON(void);
void LED2_OFF(void);
void LED2_Toggle(void);

void BUZZER_Initialize(void);
void BUZZER_ON(void);
void BUZZER_OFF(void);
void BUZZER_Toggle(void);

void RELAY_Initialize(void);
void RELAY_ON(void);
void RELAY_OFF(void);
void RELAY_Toggle(void);


#endif /* OUTPUT_MODULE_H_ */