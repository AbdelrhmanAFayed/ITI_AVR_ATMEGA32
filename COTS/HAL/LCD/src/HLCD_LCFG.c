#include "BIT_MATH.h"

#include "HLCD.h"
#include "HLCD_LCFG.h"
#include "MDIO.h"


// Define LCD configurations (User should modify this based on connections)
const HLCD_Config_t HLCD_Configurations[HLCD_MAX_NUM] = {
    {
        {MDIO_enuPORTA, MDIO_enuPORTA, MDIO_enuPORTA, MDIO_enuPORTA, MDIO_enuPORTA, MDIO_enuPORTA, MDIO_enuPORTA, MDIO_enuPORTA}, 
     {MDIO_enuPIN0, MDIO_enuPIN1, MDIO_enuPIN2, MDIO_enuPIN3, MDIO_enuPIN4, MDIO_enuPIN5, MDIO_enuPIN6, MDIO_enuPIN7}, 
     MDIO_enuPORTC, MDIO_enuPIN0, MDIO_enuPIN1, MDIO_enuPIN2}
};
