

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "HLED.h"


#define F_CPU 8000000UL

#include <util/delay.h>


void main(void)
{
    HLED_init();
    
   
    while(1)
    {
        HLED_enuSetLedState(HLED_GREEN, HLED_ON);
        HLED_enuSetLedState(HLED_RED,   HLED_ON);
        HLED_enuSetLedState(HLED_BLUE,  HLED_ON);
        _delay_ms(1000);
        
        HLED_enuSetLedState(HLED_GREEN, HLED_OFF);
        HLED_enuSetLedState(HLED_RED,   HLED_OFF);
        HLED_enuSetLedState(HLED_BLUE,  HLED_OFF);

        _delay_ms(1000);
        
    }
}