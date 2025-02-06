
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MDIO.h"
#include "HLCD.h"
#include "HLCD_LCFG.h"

#include <util/delay.h>


extern const HLCD_Config_t HLCD_Configurations[HLCD_MAX_NUM];



HLCD_enuErrorStatus_t HLCD_enuInit(void) {
    //MDIO_enuSetPinConfigration(MDIO_enuPORTD,MDIO_enuPIN7,MDIO_enuPIN_OUTPUT);
    //MDIO_enuSetPinValue(MDIO_enuPORTD,MDIO_enuPIN7,MDIO_enuPIN_HIGH);
    for (u8 i = 0; i < HLCD_MAX_NUM; i++) {
        // Set Control Pins as Output
        MDIO_enuSetPinConfigration(HLCD_Configurations[i].ControlPort, HLCD_Configurations[i].RS, MDIO_enuPIN_OUTPUT);
        MDIO_enuSetPinConfigration(HLCD_Configurations[i].ControlPort, HLCD_Configurations[i].RW, MDIO_enuPIN_OUTPUT);
        MDIO_enuSetPinConfigration(HLCD_Configurations[i].ControlPort, HLCD_Configurations[i].E, MDIO_enuPIN_OUTPUT);

        // Set Data Pins as Output
        for (u8 j = 0; j < 8; j++) {
            MDIO_enuSetPinConfigration(HLCD_Configurations[i].DataPorts[j], HLCD_Configurations[i].DataPins[j], MDIO_enuPIN_OUTPUT);
        }

        _delay_ms(40); // Wait for LCD to power up
        HLCD_enuWriteCommand(0x20 | 0x10 | 0x08 | 0x00, i);
        _delay_ms(2);
        HLCD_enuWriteCommand(0x04 | 0x08 | 0x02 | 0x01 ,i); 
        _delay_ms(2);
        HLCD_enuWriteCommand(0x01, i); // Clear Display
        _delay_ms(2);  // Clear command needs a delay

    }
    MDIO_enuSetPinConfigration(MDIO_enuPORTD,MDIO_enuPIN7,MDIO_enuPIN_OUTPUT);
    MDIO_enuSetPinValue(MDIO_enuPORTD,MDIO_enuPIN7,MDIO_enuPIN_HIGH);
    return HLCD_OK;
}



// Send Command to LCD
HLCD_enuErrorStatus_t HLCD_enuWriteCommand(u8 Copyu8Command, u8 Copy_u8LcdNum) {
    MDIO_enuSetPinConfigration(MDIO_enuPORTD,MDIO_enuPIN7,MDIO_enuPIN_OUTPUT);
    MDIO_enuSetPinValue(MDIO_enuPORTD,MDIO_enuPIN7,MDIO_enuPIN_HIGH);
    
    MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].ControlPort, HLCD_Configurations[Copy_u8LcdNum].RS, MDIO_enuPIN_LOW);

    MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].ControlPort, HLCD_Configurations[Copy_u8LcdNum].RW, MDIO_enuPIN_LOW);
    
    for (u8 i = 0; i < 8; i++) {
        MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].DataPorts[i], HLCD_Configurations[Copy_u8LcdNum].DataPins[i], (Copyu8Command >> i) & 1);
    }
    
    MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].ControlPort, HLCD_Configurations[Copy_u8LcdNum].E, MDIO_enuPIN_HIGH);
    _delay_ms(2);
    MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].ControlPort, HLCD_Configurations[Copy_u8LcdNum].E, MDIO_enuPIN_LOW);
    _delay_ms(2);
    
    return HLCD_OK;
}


HLCD_enuErrorStatus_t HLCD_enuWriteData(u8 Copyu8Data, u8 Copy_u8LcdNum) {
    MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].ControlPort, HLCD_Configurations[Copy_u8LcdNum].RS, MDIO_enuPIN_HIGH);
    MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].ControlPort, HLCD_Configurations[Copy_u8LcdNum].RW, MDIO_enuPIN_LOW);
    
    for (u8 i = 0; i < 8; i++) {
        MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].DataPorts[i], HLCD_Configurations[Copy_u8LcdNum].DataPins[i], (Copyu8Data >> i) & 1);
    }
    
    MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].ControlPort, HLCD_Configurations[Copy_u8LcdNum].E, MDIO_enuPIN_HIGH);
    _delay_ms(2);
    MDIO_enuSetPinValue(HLCD_Configurations[Copy_u8LcdNum].ControlPort, HLCD_Configurations[Copy_u8LcdNum].E, MDIO_enuPIN_LOW);
    _delay_ms(2);
    
    return HLCD_OK;
}


// Write String to LCD
HLCD_enuErrorStatus_t HLCD_enuWriteString(s8 *Addu8_string, u8 Copy_uint8LcdNum) {
    if (Addu8_string == NULL) {
        return HLCD_NULL_PTR;
    }
    while (*Addu8_string) {
        HLCD_enuWriteData((u8)*Addu8_string, Copy_uint8LcdNum);
        Addu8_string++;
    }
    return HLCD_OK;
}

