

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MDIO.h"
#include "MPORT.h"




int main(void)
{
    MPORT_vInit();
   MPORT_enuSetPinDirection(PIN_A0,MPORT_OUTPUT);
   MPORT_enuSetPinDirection(PIN_A1,MPORT_OUTPUT);
   MPORT_enuSetPinDirection(PIN_A2,MPORT_OUTPUT);
   MPORT_enuSetPinDirection(PIN_A3,MPORT_INPUT);
   MPORT_enuSetPinDirection(PIN_A4,MPORT_INPUT);
   MPORT_enuSetPinDirection(PIN_A5,MPORT_INPUT);
   
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