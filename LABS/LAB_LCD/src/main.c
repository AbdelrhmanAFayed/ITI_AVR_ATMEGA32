

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MDIO.h"
#include "HLCD.h"



#define F_CPU 8000000UL

#include <util/delay.h>



int main(void)
{
    HLCD_enuInit();
    HLCD_enuWriteData(0b01000000,0);

    //MDIO_enuSetPinConfigration(MDIO_enuPORTD,MDIO_enuPIN7,MDIO_enuPIN_OUTPUT);
    //MDIO_enuSetPinValue(MDIO_enuPORTD,MDIO_enuPIN7,MDIO_enuPIN_HIGH);
        

    while(1)
    {
        

       
    }
    return 0;
}