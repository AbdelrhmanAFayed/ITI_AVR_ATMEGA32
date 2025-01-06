
#include "MPORT.h"

const MPORT_enuPinMode_t PinsStatusArray[MAX_NUM_PIN * MAX_NUM_PORT]=
{
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTA PIN0 */      
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTA PIN1 */  
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTA PIN2 */
    MPORT_enuPIN_OUTPUT ,            /* PORTA PIN3 */
    MPORT_enuPIN_OUTPUT ,            /* PORTA PIN4 */
    MPORT_enuPIN_OUTPUT ,            /* PORTA PIN5 */
    MPORT_enuPIN_OUTPUT ,            /* PORTA PIN6 */
    MPORT_enuPIN_OUTPUT ,            /* PORTA PIN7 */
 
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTB PIN0 */
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTB PIN1 */
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTB PIN2 */
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTB PIN3 */
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTB PIN4 */
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTB PIN5 */
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTB PIN6 */
    MPORT_enuPIN_INPUT_PULLUP,       /* PORTB PIN7 */
     
    MPORT_enuPIN_OUTPUT ,            /* PORTC PIN0 */
    MPORT_enuPIN_OUTPUT ,            /* PORTC PIN1 */
    MPORT_enuPIN_OUTPUT ,            /* PORTC PIN2 */
    MPORT_enuPIN_OUTPUT ,            /* PORTC PIN3 */
    MPORT_enuPIN_OUTPUT ,            /* PORTC PIN4 */
    MPORT_enuPIN_OUTPUT ,            /* PORTC PIN5 */
    MPORT_enuPIN_OUTPUT ,            /* PORTC PIN6 */
    MPORT_enuPIN_OUTPUT ,            /* PORTC PIN7 */
     
    MPORT_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN0 */
    MPORT_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN1 */
    MPORT_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN2 */
    MPORT_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN3 */
    MPORT_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN4 */
    MPORT_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN5 */
    MPORT_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN6 */
    MPORT_enuPIN_INPUT_PULLDOWN      /* PORTD PIN7 */
};