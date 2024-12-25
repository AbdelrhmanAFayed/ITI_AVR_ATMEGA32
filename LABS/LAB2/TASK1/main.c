/*
 * firstconvdriver.c
 *
 * Created: 17-Dec-24 1:26:20 PM
 * Author : Fayed
 */ 
#define F_CPU 8000000

#include <avr/io.h>
#include <util/delay.h>

#include "MDIO.h"

int main(void)
{
	MDIO_enuSetPortConfigration(MDIO_enuPORTA,MDIO_enuPORT_OUTPUT);
	MDIO_enuSetPortConfigration(MDIO_enuPORTC,MDIO_enuPORT_INPUT_PULLUP);
	
	u8 B1 ;
	u8 B2 ;
	u8 B3 ;
	u8 B4 ; 
	
    /* Replace with your application code */
    while (1) 
    {
		MDIO_enuGetPinValue(MDIO_enuPORTC,MDIO_enuPIN0,&B1);
		MDIO_enuGetPinValue(MDIO_enuPORTC,MDIO_enuPIN1,&B2);
		MDIO_enuGetPinValue(MDIO_enuPORTC,MDIO_enuPIN2,&B3);
		MDIO_enuGetPinValue(MDIO_enuPORTC,MDIO_enuPIN3,&B4);
		
		if(B1 == MDIO_enuPIN_LOW)
		{
			
		MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN0,MDIO_enuPIN_HIGH);
		}
		else
		{
		MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN0,MDIO_enuPIN_LOW);	
		}
		if(B2 == MDIO_enuPIN_LOW)
		{
			
		MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN1,MDIO_enuPIN_HIGH);
		}
		else
		{
			MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN1,MDIO_enuPIN_LOW);
		}
		if(B3 == MDIO_enuPIN_LOW)
		{
			
			MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN2,MDIO_enuPIN_HIGH);
		}
		else
		{
			MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN2,MDIO_enuPIN_LOW);
		}
		if(B4 == MDIO_enuPIN_LOW)
		{
			
			MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN3,MDIO_enuPIN_HIGH);
		}
		else
		{
			MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN3,MDIO_enuPIN_LOW);
		}
		
		_delay_ms(50);
		
    }
}

