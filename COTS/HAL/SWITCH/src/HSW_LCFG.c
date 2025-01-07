#include "BIT_MATH.h"

#include "HSW.h"
#include "HSW_LCFG.h"
#include "MPORT.h"

HSW_strucSWcfg_t HSW_strucSWcfg[NUM_OF_SWITCHES] = 
{
    {PORT_B, PIN_2, HSW_INTERNAL_PULLUP   }
    ,
    {PORT_C, PIN_5, HSW_EXTERNAL_PULLUP   }
    ,
    {PORT_D, PIN_3, HSW_EXTERNAL_PULLDOWN }
};
