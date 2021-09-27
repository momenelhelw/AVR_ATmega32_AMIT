/*
* S7SEG.h

*  Author: Cherry Hani
*/


#ifndef S7SEG_H_
#define S7SEG_H_

#include "S7SEG_Configuration.h"

void S7SEG_Initialization(void);
void S7SEG_Enable1(void);
void S7SEG_Disable1(void);
void S7SEG_Enable2(void);
void S7SEG_Disable2(void);
void S7SEG_DIP_Enable(void);
void S7SEG_DIP_Disable(void);
void S7SEG_Write_Number(uint8_t number);


#endif /* S7SEG_H_ */