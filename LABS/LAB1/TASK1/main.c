/*
 * GccApplication1.c
 *
 * Created: 11-Dec-24 1:46:37 PM
 * Author : Fayed
 */ 
#define F-CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

#define SET_BIT(REG, BIT) ((REG) |= (1 << (BIT)))
#define CLEAR_BIT(REG, BIT) ((REG) &= ~(1 << (BIT)))
#define TOGGLE_BIT(REG, BIT) ((REG) ^= (1 << (BIT)))
#define GET_BIT(REG, BIT) (((REG) >> (BIT)) & 1)

int main(void)
{
	DDRA = 0b11111101 ;
	
	
    /* Replace with your application code */
    while (1) 
    {
		SET_BIT(PORTA,0) ;
		_delay_ms(1000);
		CLEAR_BIT(PORTA,0) ;
		_delay_ms(1000);
		
    }
}

