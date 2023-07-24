/*
 * DIO.h
 *
 * Created: 7/24/2023 4:54:07 PM
 *  Author: ibrah
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "ATmega_register.h"
#include "BIT_MATH.h"

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0  0
#define DIO_PIN1  1
#define DIO_PIN2  2
#define DIO_PIN3  3
#define DIO_PIN4  4
#define DIO_PIN5  5
#define DIO_PIN6  6
#define DIO_PIN7  7

#define  DIO_PIN_HIGH 1
#define  DIO_PIN_LOW   0

#define  DIO_PORT_HIGH 0xff
#define  DIO_PORT_LOW 0x00

#define DIO_PIN_OUTPUT 1
#define  DIO_PIN_INPUT   0

#define DIO_PORT_OUTPUT 0xff
#define  DIO_PORT_INPUT 0x00


void dio_setportdri(uint8 port,uint8 dir);
void dio_setpindir(uint8 port,uint8 pin,uint8 dir);

void dio_setportvalue(uint8 port,uint8 val);
void dio_setpinvalue(uint8 port,uint8 pin,uint8 val);

void dio_readport(uint8 port,uint8* val);
void dio_readpin(uint8 port,uint8 pin,uint8* val);

void dio_togglepin(uint8 port,uint8 pin);




#endif /* DIO_H_ */