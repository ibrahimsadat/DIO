/*
 * buton.c
 *
 * Created: 7/24/2023 6:10:03 PM
 *  Author: ibrah
 */ 
#include "Button.h"
void button0_init(void){
	dio_setpinvalue(DIO_PORTB,DIO_PIN0,DIO_PIN_INPUT);
	
	
}
uint8 button0_getvalue(void){
	
	uint8 value=0;
	value=GET_BIT(PINB,0);
	while(GET_BIT(PINB,0));
	_delay_ms(20);
	return value;
	
}