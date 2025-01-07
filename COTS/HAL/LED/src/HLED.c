


#include "MPORT.h"
#include "MDIO.h"
#include "HLED.h"
#include "HLED_LCFG.h"

extern HLED_strucLEDcfg_t HLED_strucLEDcfg[NUM_OF_LEDS];

HLED_enuErrorStatus_t HLED_enuSetLedState(u8 Copy_u8LedName, u8 Copy_u8State)
{
    
    HLED_enuErrorStatus_t   Loc_enu_error = HLED_OK ;

    if(Copy_u8LedName >= NUM_OF_LEDS)
    {
        Loc_enu_error =  HLED_INVALID_PARAM;
    }
    else if(Copy_u8State >= 2)
    {
        Loc_enu_error =  HLED_INVALID_PARAM;
    }
    else if(Copy_u8State == HLED_ON)
    {
        if(HLED_strucLEDcfg[Copy_u8LedName].Connect == HLED_src)
        {
    
        MDIO_enuSetPinValue( HLED_strucLEDcfg[Copy_u8LedName].PortNum , HLED_strucLEDcfg[Copy_u8LedName].PinNum, MDIO_enuPIN_HIGH);
        }
        else if(HLED_strucLEDcfg[Copy_u8LedName].Connect == HLED_sink)
        {

        MDIO_enuSetPinValue( HLED_strucLEDcfg[Copy_u8LedName].PortNum , HLED_strucLEDcfg[Copy_u8LedName].PinNum, MDIO_enuPIN_LOW);
        }
        else
        {
            Loc_enu_error=  HLED_INVALID_PARAM;
        }
    }
    else if(Copy_u8State == HLED_OFF)
    {
        if(HLED_strucLEDcfg[Copy_u8LedName].Connect == HLED_src)
        {
        MDIO_enuSetPinValue( HLED_strucLEDcfg[Copy_u8LedName].PortNum , HLED_strucLEDcfg[Copy_u8LedName].PinNum, MDIO_enuPIN_LOW);
    
        }
        else if(HLED_strucLEDcfg[Copy_u8LedName].Connect == HLED_sink)
        {

        MDIO_enuSetPinValue( HLED_strucLEDcfg[Copy_u8LedName].PortNum , HLED_strucLEDcfg[Copy_u8LedName].PinNum, MDIO_enuPIN_HIGH);
        }
        else
        {
            Loc_enu_error=  HLED_INVALID_PARAM;
        }
    }
    else
    {
        Loc_enu_error =  HLED_INVALID_PARAM;
    }
   
    return Loc_enu_error; 

}


void HLED_init(void)
{
    u8 Local_u8Counter;
    u8 Local_u8PortPinNum;

    for(Local_u8Counter = 0; Local_u8Counter < NUM_OF_LEDS; Local_u8Counter++)
    {
        Local_u8PortPinNum = ((HLED_strucLEDcfg[Local_u8Counter].PortNum * 0x10) + HLED_strucLEDcfg[Local_u8Counter].PinNum);

        MPORT_enuSetPinDirection(Local_u8PortPinNum, MPORT_OUTPUT);
    
        HLED_enuSetLedState(Local_u8Counter, HLED_strucLEDcfg[Local_u8Counter].Initial_State);

    }

}


