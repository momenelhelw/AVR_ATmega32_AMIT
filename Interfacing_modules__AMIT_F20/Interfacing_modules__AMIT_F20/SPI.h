/*
 * SPI.h

 *  Author: Cherry Hani
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "SPI_Config.h"

void Master_Init(void);
void Master_Trans(uint8_t data);
void Slave_Init(void);
char Slave_Recv(void);

#endif /* SPI_H_ */