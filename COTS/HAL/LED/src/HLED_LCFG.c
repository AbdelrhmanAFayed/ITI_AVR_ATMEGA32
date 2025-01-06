

#include "BIT_MATH.h"

#include "HLED.h"
#include "HLED_LCFG.h"
#include "MPORT.h"

HLED_strucLEDcfg_t HLED_strucLEDcfg[NUM_OF_LEDS] = 
{
    {PORT_B, PIN_3, HLED_src, HLED_OFF},
    {PORT_C, PIN_6, HLED_sink, HLED_OFF},
    {PORT_D, PIN_4, HLED_src, HLED_OFF}
};

