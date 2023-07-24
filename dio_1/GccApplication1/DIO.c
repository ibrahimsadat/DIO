/*
 * DIO.c
 *
 * Created: 7/24/2023 4:52:43 PM
 *  Author: ibrahim EL-SADAT
 */ 
#include "DIO.h"

void dio_setportdri(uint8 port,uint8 dir){
	switch(port){
		case DIO_PORTA:
		
		DDRA=dir;
		
		break;
		
		case DIO_PORTB:
		DDRB=dir;
		break;
		
		case DIO_PORTC:
		DDRC=dir;
		break;
		
		case DIO_PORTD:
		DDRD=dir;
		break;
		
	}
	
	
}
void dio_setpindir(uint8 port,uint8 pin,uint8 dir){
	switch(dir){
		
		case DIO_PIN_OUTPUT:
		switch(port){
			case DIO_PORTA:
			
			SET_BIT(DDRA,pin);
			
			break;
			
			case DIO_PORTB:
			SET_BIT(DDRB,pin);
			break;
			
			case DIO_PORTC:
			SET_BIT(DDRC,pin);
			break;
			
			case DIO_PORTD:
			SET_BIT(DDRD,pin);
			break;
			default:
			break;
			
	}
	break;
	
	switch(dir){
		
		case DIO_PIN_INPUT:
		switch(port){
			case DIO_PORTA:
			
			CLR_BIT(DDRA,pin);
			
			break;
			
			case DIO_PORTB:
			CLR_BIT(DDRB,pin);
			break;
			
			case DIO_PORTC:
			CLR_BIT(DDRC,pin);
			break;
			
			case DIO_PORTD:
			CLR_BIT(DDRD,pin);
			break;
			default:
			break;
			
		}
		break;
		default:
		break;
	}
	
	}
}


void dio_setportvalue(uint8 port,uint8 val){
	
	switch(port){
		
		case DIO_PIN_INPUT:
		switch(port){
			case DIO_PORTA:
			
			PORTA=val;
			
			break;
			
			case DIO_PORTB:
			PORTB=val;
			
			break;
			
			case DIO_PORTC:
			PORTC=val;
			break;
			
			case DIO_PORTD:
			PORTD=val;
			break;
			default:
			break;
			
		}
		break;
		default:
		break;
	}

}



void dio_setpinvalue(uint8 port,uint8 pin,uint8 val){
	
	switch(val){
		
		case DIO_PIN_HIGH:
		switch(port){
			case DIO_PORTA:
			
			SET_BIT(PORTA,pin);
			
			break;
			
			case DIO_PORTB:
			SET_BIT(PORTB,pin);
			break;
			
			case DIO_PORTC:
			SET_BIT(PORTC,pin);
			break;
			
			case DIO_PORTD:
			SET_BIT(PORTD,pin);
			break;
			default:
			break;
			
		}
		break;
		
		switch(val){
			
			case DIO_PIN_HIGH:
			switch(port){
				case DIO_PORTA:
				
				CLR_BIT(PORTA,pin);
				
				break;
				
				case DIO_PORTB:
				CLR_BIT(PORTB,pin);
				break;
				
				case DIO_PORTC:
				CLR_BIT(PORTC,pin);
				break;
				
				case DIO_PORTD:
				CLR_BIT(PORTD,pin);
				break;
				default:
				break;
				
			}
			break;
			default:
			break;
		}
		
	}
}
	


void dio_readport(uint8 port,uint8* val){
	
	switch(port){
		case DIO_PORTA:
		*val=PINA;
		break;
	  case DIO_PORTB:
		*val=PINB;
		case DIO_PORTC:
		*val=PINC;
		break;
	case DIO_PORTD:
	*val=PINC;
	break;
				
	default:
	break;	
		
	}
	
}
void dio_readpin(uint8 port,uint8 pin,uint8* val){
		switch(port){
			case DIO_PORTA:
			*val=GET_BIT(PINA,pin);
			break;
			case DIO_PORTB:
			*val=GET_BIT(PINB,pin);
			break;
			case DIO_PORTC:
			*val=GET_BIT(PINC,pin);
			break;
			case DIO_PORTD:
			*val=GET_BIT(PIND,pin);
			break;
			
			default:
			break;
			
		}
	
}

void dio_togglepin(uint8 port,uint8 pin){
	
	switch(port){
		case DIO_PORTA:
		Toggle_BIT(PINA,pin);
		break;
		
		case DIO_PORTB:
		Toggle_BIT(PINB,pin);
		break;
		case DIO_PORTC:
		Toggle_BIT(PINC,pin);
		break;
		case DIO_PORTD:
		Toggle_BIT(PIND,pin);
		break;
		
		default:
		break;
		
	}
	
	
}