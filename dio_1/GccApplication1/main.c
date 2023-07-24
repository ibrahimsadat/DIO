/*
 * GccApplication1.c
 *
 * Created: 7/24/2023 1:36:53 PM
 * Author : ibrah
 */ 

//#include <avr/io.h>

#include "ATmega_register.h"
#include "BIT_MATH.h"
#define  F_CPU 16000000
#include "util/delay.h"




int main(void)
{

    	uint8 button0_getvalue=0;
    	led0_init();
    	button0_init();
    	led0_on();
	 while (1) 
    {
		button0_getvalue=button0_getvalue();
		if (button0_getvalue==1)
		{
			led0_toggle();
		}
		
	
    }
}

