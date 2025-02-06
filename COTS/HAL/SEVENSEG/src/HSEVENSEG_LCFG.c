

#include "BIT_MATH.h"

#include "HSEVENSEG.h"
#include "HSEVENSEG_LCFG.h"
#include "MPORT.h"



HSEVENSEG_strucDISPcfg_t HSEVENSEG_strucDISPcfg[NUM_OF_DISP] = 
{
    {
        {   
            {PORT_A, PIN_0},
            {PORT_A, PIN_1},
            {PORT_A, PIN_2},
            {PORT_A, PIN_3},
            {PORT_A, PIN_4},
            {PORT_A, PIN_5},
            {PORT_A, PIN_6},
            {PORT_A, PIN_7}
        },
        HSEVENSEG_COM_ANODE  
    },
    {
        {   
            {PORT_B, PIN_0},
            {PORT_B, PIN_1},
            {PORT_B, PIN_2},
            {PORT_B, PIN_3},
            {PORT_B, PIN_4},
            {PORT_B, PIN_5},
            {PORT_B, PIN_6},
            {PORT_B, PIN_7}
        },
        HSEVENSEG_COM_CATHODE  
    }
};

