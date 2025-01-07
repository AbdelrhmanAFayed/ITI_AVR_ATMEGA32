

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "HLED.h"
#include "HSW.h"

#define F_CPU 8000000UL

#include <util/delay.h>


int main(void)
{
    //HLED_init();
    //HSW_Init();

        u8 Local_u8SwitchState_Start = 0;
        u8 Local_u8SwitchState_Stop = 0;
        u8 Local_u8SwitchState_Hold = 0;
    while(1)
    {
        

        HSW_enuGetSwitchState(HSW_START, &Local_u8SwitchState_Start);
        HSW_enuGetSwitchState(HSW_STOP, &Local_u8SwitchState_Stop);
        HSW_enuGetSwitchState(HSW_HOLD, &Local_u8SwitchState_Hold);
        
       if(Local_u8SwitchState_Start == HSW_PRESSED)
        {
            HLED_enuSetLedState(HLED_GREEN, HLED_ON);
            HLED_enuSetLedState(HLED_RED,   HLED_ON);
        }
        else if ( Local_u8SwitchState_Stop == HSW_PRESSED)
        {
            HLED_enuSetLedState(HLED_GREEN, HLED_OFF);
            HLED_enuSetLedState(HLED_RED,   HLED_OFF);
        }
        else
        {}
       
        if( Local_u8SwitchState_Hold == HSW_PRESSED)
        {
            HLED_enuSetLedState(HLED_BLUE,  HLED_ON);
        }
        else
        {
            HLED_enuSetLedState(HLED_BLUE,  HLED_OFF);
        }
        _delay_ms(1000);
    
       
    }
    return 0;
}