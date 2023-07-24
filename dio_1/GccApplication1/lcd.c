/*
 * lcd.c
 *
 * Created: 7/24/2023 6:14:26 PM
 *  Author: ibrah
 */ 
#include "lcd.h"
void led0_init(void){
	DDRC=0x04;
	
}
void led0_on(void){
	PORTC=0x04;
}
void led0_off(void){
	PORTC=0x0;
}
void led0_toggle(void){
	Toggle_BIT(PORTC,2);
	
}