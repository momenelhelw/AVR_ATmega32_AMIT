/*
* UART.h

*  Author: Cherry Hani
*/


#ifndef UART_H_
#define UART_H_

#include "UART_CONFIG.h"

void UART_Init(void);
void UART_Transmit(uint8_t data);
uint8_t UART_Receive(void);

#endif /* UART_H_ */