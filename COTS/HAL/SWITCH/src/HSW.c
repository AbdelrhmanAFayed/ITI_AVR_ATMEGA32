
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MPORT.h"
#include "MDIO.h"

#include "HSW.h"
#include "HSW_LCFG.h"

extern HSW_strucSWcfg_t HSW_strucSWcfg[NUM_OF_SWITCHES] ;



HSW_enuErrorStatus_t HSW_enuGetSwitchState(u8 Copy_u8SwitchName, u8* Add_pu8State)
{
    HSW_enuErrorStatus_t   Loc_enu_error = HSW_OK ;
    if (Copy_u8SwitchName >= NUM_OF_SWITCHES)
    {
        Loc_enu_error = HSW_INVALID_PARAM;
        
    }else if(Add_pu8State == NULL)
    {
        Loc_enu_error = HSW_INVALID_PARAM;
    }
    else
    {
    
    MDIO_enuGetPinValue(HSW_strucSWcfg[Copy_u8SwitchName].PortNum, HSW_strucSWcfg[Copy_u8SwitchName].PinNum, Add_pu8State);
    if (HSW_strucSWcfg[Copy_u8SwitchName].Connect == HSW_INTERNAL_PULLUP || HSW_strucSWcfg[Copy_u8SwitchName].Connect == HSW_EXTERNAL_PULLUP)
    {
        if (*Add_pu8State == 0)
        {
            *Add_pu8State = HSW_PRESSED;
        }
        else
        {
            *Add_pu8State = HSW_RELEASED;
        }
    }
    else if (HSW_strucSWcfg[Copy_u8SwitchName].Connect == HSW_EXTERNAL_PULLDOWN)
    {
        if (*Add_pu8State == 1)
        {
            *Add_pu8State = HSW_PRESSED;
        }
        else
        {
            *Add_pu8State = HSW_RELEASED;
        }
    }
    return Loc_enu_error;
    }
}

void HSW_Init(void)
{
    u8 Local_u8LoopIndex;
    u8 Local_u8PortPinNum = 0 ;

    for(Local_u8LoopIndex = 0; Local_u8LoopIndex < NUM_OF_SWITCHES; Local_u8LoopIndex++)
    {
        Local_u8PortPinNum = ((HSW_strucSWcfg[Local_u8LoopIndex].PortNum * 0x10) + HSW_strucSWcfg[Local_u8LoopIndex].PinNum);

        MPORT_enuSetPinDirection(Local_u8PortPinNum, MPORT_enuPIN_INPUT);
        
        if (HSW_strucSWcfg[Local_u8LoopIndex].Connect == HSW_INTERNAL_PULLUP)
        {
            MPORT_enuSetPinMode(Local_u8PortPinNum, MPORT_enuPIN_INPUT_PULLUP);
        }
        else if (HSW_strucSWcfg[Local_u8LoopIndex].Connect == HSW_EXTERNAL_PULLUP)
        {
            MPORT_enuSetPinMode(Local_u8PortPinNum, MPORT_enuPIN_INPUT);
        }
        else if (HSW_strucSWcfg[Local_u8LoopIndex].Connect == HSW_EXTERNAL_PULLDOWN)
        {
            MPORT_enuSetPinMode(Local_u8PortPinNum, MPORT_enuPIN_INPUT);
        }

    }
}
