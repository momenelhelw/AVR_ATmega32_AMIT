/*
 * DIO_Address.h
 *  Author: Cherry Hani 
 */ 


#ifndef DIO_ADDRESS_H_
#define DIO_ADDRESS_H_

/*Define registers for peripheral used*/

#define PORTA (*(volatile uint8_t*)(0x3B))     //Output Register
#define DDRA  (*(volatile uint8_t*)(0x3A))     //Data Direction Register
#define PINA  (*(volatile uint8_t*)(0x39))    //Input Register

#define PORTB (*(volatile uint8_t*)(0x38))    //Output Register
#define DDRB  (*(volatile uint8_t*)(0x37))    //Data Direction Register
#define PINB  (*(volatile uint8_t*)(0x36))    //Input Register

#define PORTC (*(volatile uint8_t*)(0x35))    //Output Register
#define DDRC  (*(volatile uint8_t*)(0x34))    //Data Direction Register
#define PINC  (*(volatile uint8_t*)(0x33))    //Input Register

#define PORTD (*(volatile uint8_t*)(0x32))   //Output Register
#define DDRD  (*(volatile uint8_t*)(0x31))   //Data Direction Register
#define PIND  (*(volatile uint8_t*)(0x30))    //Input Register


#endif /* DIO_ADDRESS_H_ */