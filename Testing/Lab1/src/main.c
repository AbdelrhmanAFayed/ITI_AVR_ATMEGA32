

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MDIO.h"
#include "MPORT.h"
#include "util/delay.h"




int main(void)
{
    MPORT_vInit();
    MPORT_enuSetPinDirection(PIN_B0,MPORT_OUTPUT);
    MPORT_enuSetPinDirection(PIN_B1,MPORT_OUTPUT);
    MPORT_enuSetPinDirection(PIN_B2,MPORT_OUTPUT);
    MPORT_enuSetPinDirection(PIN_C3,MPORT_INPUT);
    MPORT_enuSetPinDirection(PIN_C4,MPORT_INPUT);
    MPORT_enuSetPinDirection(PIN_C5,MPORT_INPUT);
    MPORT_enuSetPinMode( PIN_B0  , MPORT_enuPIN_OUTPUT );
    MPORT_enuSetPinMode( PIN_B1  , MPORT_enuPIN_OUTPUT );
    MPORT_enuSetPinMode( PIN_B2  , MPORT_enuPIN_OUTPUT );
    
    MPORT_enuSetPinMode( PIN_C3  , MPORT_enuPIN_INPUT_PULLUP );
    MPORT_enuSetPinMode( PIN_C4  , MPORT_enuPIN_INPUT_PULLUP );
    MPORT_enuSetPinMode( PIN_C5  , MPORT_enuPIN_INPUT_PULLUP );   
   
    

    

    u8 Local_u8PinValue = 0 ;
    while(1)
    {
        
       
        MDIO_enuGetPinValue(MDIO_enuPORTC,MDIO_enuPIN3,&Local_u8PinValue);

        if(Local_u8PinValue)
        {
            MDIO_enuSetPinValue(MDIO_enuPORTB,MDIO_enuPIN0,MDIO_enuPIN_LOW);
        }
        else
        {
            MDIO_enuSetPinValue(MDIO_enuPORTB,MDIO_enuPIN0,MDIO_enuPIN_HIGH);
        }

        MDIO_enuGetPinValue(MDIO_enuPORTC,MDIO_enuPIN4,&Local_u8PinValue);
        if(Local_u8PinValue)
        {
            MDIO_enuSetPinValue(MDIO_enuPORTB,MDIO_enuPIN1,MDIO_enuPIN_LOW);
        }
        else
        {
            MDIO_enuSetPinValue(MDIO_enuPORTB,MDIO_enuPIN1,MDIO_enuPIN_HIGH);
        }
        
        MDIO_enuGetPinValue(MDIO_enuPORTC,MDIO_enuPIN5,&Local_u8PinValue);
        if(Local_u8PinValue)
        {
            MDIO_enuSetPinValue(MDIO_enuPORTB,MDIO_enuPIN2,MDIO_enuPIN_LOW);
        }
        else
        {
            MDIO_enuSetPinValue(MDIO_enuPORTB,MDIO_enuPIN2,MDIO_enuPIN_HIGH);
        }
            
    }
}