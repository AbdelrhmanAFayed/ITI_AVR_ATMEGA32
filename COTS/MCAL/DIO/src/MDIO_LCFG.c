
#include "MDIO.h"

const MDIO_enuPIN_Configration_t PinsStatusArray[MAX_NUM_PIN * MAX_NUM_PORT]=
{
    MDIO_enuPIN_OUTPUT ,            /* PORTA PIN0 */      
    MDIO_enuPIN_OUTPUT ,            /* PORTA PIN1 */  
    MDIO_enuPIN_OUTPUT ,            /* PORTA PIN2 */
    MDIO_enuPIN_OUTPUT ,            /* PORTA PIN3 */
    MDIO_enuPIN_OUTPUT ,            /* PORTA PIN4 */
    MDIO_enuPIN_OUTPUT ,            /* PORTA PIN5 */
    MDIO_enuPIN_OUTPUT ,            /* PORTA PIN6 */
    MDIO_enuPIN_OUTPUT ,            /* PORTA PIN7 */
 
    MDIO_enuPIN_INPUT_PULLUP,       /* PORTB PIN0 */
    MDIO_enuPIN_INPUT_PULLUP,       /* PORTB PIN1 */
    MDIO_enuPIN_INPUT_PULLUP,       /* PORTB PIN2 */
    MDIO_enuPIN_INPUT_PULLUP,       /* PORTB PIN3 */
    MDIO_enuPIN_INPUT_PULLUP,       /* PORTB PIN4 */
    MDIO_enuPIN_INPUT_PULLUP,       /* PORTB PIN5 */
    MDIO_enuPIN_INPUT_PULLUP,       /* PORTB PIN6 */
    MDIO_enuPIN_INPUT_PULLUP,       /* PORTB PIN7 */
     
    MDIO_enuPIN_OUTPUT ,            /* PORTC PIN0 */
    MDIO_enuPIN_OUTPUT ,            /* PORTC PIN1 */
    MDIO_enuPIN_OUTPUT ,            /* PORTC PIN2 */
    MDIO_enuPIN_OUTPUT ,            /* PORTC PIN3 */
    MDIO_enuPIN_OUTPUT ,            /* PORTC PIN4 */
    MDIO_enuPIN_OUTPUT ,            /* PORTC PIN5 */
    MDIO_enuPIN_OUTPUT ,            /* PORTC PIN6 */
    MDIO_enuPIN_OUTPUT ,            /* PORTC PIN7 */
     
    MDIO_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN0 */
    MDIO_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN1 */
    MDIO_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN2 */
    MDIO_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN3 */
    MDIO_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN4 */
    MDIO_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN5 */
    MDIO_enuPIN_INPUT_PULLDOWN,     /* PORTD PIN6 */
    MDIO_enuPIN_INPUT_PULLDOWN      /* PORTD PIN7 */
};