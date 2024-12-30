/*
 * Lab2 app2.c
 *
 * Created: 25-Dec-24 1:02:06 PM
 * Author : Fayed
 */ 

#define F_CPU 8000000UL

#include <util/delay.h>

#include "BIT_MATH.h"
#include "MDIO.h"



int main(void)
{
	MDIO_enuSetPortConfigration(MDIO_enuPORTA,MDIO_enuPORT_OUTPUT);
	MDIO_enuSetPinConfigration(MDIO_enuPORTB, MDIO_enuPIN0, MDIO_enuPIN_INPUT_PULLUP);
	
	u8 old_val = 1 ;
	u8 new_val = 1 ;
	int counter = 0 ;
    /* Replace with your application code */
    while (1) 
    {
		
		
		
		 
		MDIO_enuGetPinValue(MDIO_enuPORTB,MDIO_enuPIN0,&new_val);
		
		if(new_val == 0)
		{
			
			
			if (new_val == old_val)
			{}
			else
			{
				counter++ ;
			}
		}
		
		while(counter)
		{
			_delay_ms(100);
			
		if(counter > 255)
		{
			counter = 0 ;
			
		}
		
		if(GET_BIT(counter,0))
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN0,MDIO_enuPIN_HIGH);

		}
		else
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN0,MDIO_enuPIN_LOW);
		}
		
		if(GET_BIT(counter,1))
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN1,MDIO_enuPIN_HIGH);

		}
		else
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN1,MDIO_enuPIN_LOW);
		}

		if(GET_BIT(counter,2))
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN2,MDIO_enuPIN_HIGH);

		}
		else
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN2,MDIO_enuPIN_LOW);
		}
		if(GET_BIT(counter,3))
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN3,MDIO_enuPIN_HIGH);

		}
		else
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN3,MDIO_enuPIN_LOW);
		}
		if(GET_BIT(counter,4))
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN4,MDIO_enuPIN_HIGH);

		}
		else
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN4,MDIO_enuPIN_LOW);
		}
		if(GET_BIT(counter,5))
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN5,MDIO_enuPIN_HIGH);

		}
		else
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN5,MDIO_enuPIN_LOW);
		}
		if(GET_BIT(counter,6))
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN6,MDIO_enuPIN_HIGH);

		}
		else
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN6,MDIO_enuPIN_LOW);
		}
		if(GET_BIT(counter,7))
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN7,MDIO_enuPIN_HIGH);

		}
		else
		{
			MDIO_enuSetPinValue( MDIO_enuPORTA, MDIO_enuPIN7,MDIO_enuPIN_LOW);
		}
		if(counter == 0)
		{
			break ;
		}
		
		counter++ ;
		
		}
    }
}
