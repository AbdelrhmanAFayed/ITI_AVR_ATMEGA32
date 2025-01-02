

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MDIO.h"
#include "MPORT.h"




int main(void)
{
    MPORT_vInit();
   /* MDIO_enuSetPinConfigration(MDIO_enuPORTA,MDIO_enuPIN0,MDIO_enuPIN_OUTPUT);
    MDIO_enuSetPinConfigration(MDIO_enuPORTA,MDIO_enuPIN1,MDIO_enuPIN_OUTPUT);
    MDIO_enuSetPinConfigration(MDIO_enuPORTA,MDIO_enuPIN2,MDIO_enuPIN_OUTPUT);
    MDIO_enuSetPinConfigration(MDIO_enuPORTA,MDIO_enuPIN3,MDIO_enuPIN_INPUT_PULLUP);
    MDIO_enuSetPinConfigration(MDIO_enuPORTA,MDIO_enuPIN4,MDIO_enuPIN_INPUT_PULLUP);
    MDIO_enuSetPinConfigration(MDIO_enuPORTA,MDIO_enuPIN5,MDIO_enuPIN_INPUT_PULLUP);
    */
    u8 Local_u8PinValue = 0 ;
    while(1)
    {
       MDIO_enuGetPinValue(MDIO_enuPORTA,MDIO_enuPIN3,&Local_u8PinValue);
        if(Local_u8PinValue)
        {
            MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN0,MDIO_enuPIN_LOW);
        }
        else
        {
            MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN0,MDIO_enuPIN_HIGH);
        }
        MDIO_enuGetPinValue(MDIO_enuPORTA,MDIO_enuPIN4,&Local_u8PinValue);
        if(Local_u8PinValue)
        {
            MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN1,MDIO_enuPIN_LOW);
        }
        else
        {
            MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN1,MDIO_enuPIN_HIGH);
        }
        MDIO_enuGetPinValue(MDIO_enuPORTA,MDIO_enuPIN5,&Local_u8PinValue);
        if(Local_u8PinValue)
        {
            MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN2,MDIO_enuPIN_LOW);
        }
        else
        {
            MDIO_enuSetPinValue(MDIO_enuPORTA,MDIO_enuPIN2,MDIO_enuPIN_HIGH);
        }
            
    }
}