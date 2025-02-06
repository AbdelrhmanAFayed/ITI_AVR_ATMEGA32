#ifndef HLCD_LCFG_H
#define HLCD_LCFG_H


#ifndef HLCD_CONFIG_H
#define HLCD_CONFIG_H

#include "MDIO.h" // Include DIO driver

#define HLCD_MAX_NUM  1  // Support for multiple LCDs

#define HLCD_CMD_CLEAR_DISPLAY        ((u8)0x01)  // Clear display
#define HLCD_CMD_RETURN_HOME          ((u8)0x02)  // Return cursor to home position
#define HLCD_CMD_ENTRY_MODE_DEC       ((u8)0x04)  // Decrement cursor, no shift
#define HLCD_CMD_ENTRY_MODE_DEC_SHIFT ((u8)0x05)  // Decrement cursor, display shift
#define HLCD_CMD_ENTRY_MODE_INC       ((u8)0x06)  // Increment cursor, no shift (default)
#define HLCD_CMD_ENTRY_MODE_INC_SHIFT ((u8)0x07)  // Increment cursor, display shift
#define HLCD_CMD_DISPLAY_OFF          ((u8)0x08)  // Display OFF, cursor OFF
#define HLCD_CMD_DISPLAY_ON           ((u8)0x0C)  // Display ON, cursor OFF (default)
#define HLCD_CMD_DISPLAY_CURSOR_ON    ((u8)0x0E)  // Display ON, cursor ON
#define HLCD_CMD_DISPLAY_CURSOR_BLINK ((u8)0x0F)  // Display ON, cursor blinking
#define HLCD_CMD_SHIFT_CURSOR_LEFT    ((u8)0x10)  // Shift cursor left
#define HLCD_CMD_SHIFT_CURSOR_RIGHT   ((u8)0x14)  // Shift cursor right
#define HLCD_CMD_SHIFT_DISPLAY_LEFT   ((u8)0x18)  // Shift entire display left
#define HLCD_CMD_SHIFT_DISPLAY_RIGHT  ((u8)0x1C)  // Shift entire display right
#define HLCD_CMD_FUNCTION_SET_8BIT_1LINE  ((u8)0x30) // 8-bit, 1-line, 5x8 dots
#define HLCD_CMD_FUNCTION_SET_8BIT_2LINE  ((u8)0x38) // 8-bit, 2-line, 5x8 dots (default)
#define HLCD_CMD_SET_CGRAM_ADDRESS    ((u8)0x40)  // Set CGRAM address
#define HLCD_CMD_SET_DDRAM_ADDRESS    ((u8)0x80)  // Set DDRAM address (OR with address)



// LCD Configuration Structure
typedef struct {
    MDIO_enuPortNum_t DataPorts[8];   // Ports for data lines
    MDIO_enuPinNum_t DataPins[8];     // Pins for data lines
    MDIO_enuPortNum_t ControlPort;    // Port for control lines
    MDIO_enuPinNum_t RS;  // Register Select pin
    MDIO_enuPinNum_t RW;  // Read/Write pin
    MDIO_enuPinNum_t E;   // Enable pin
} HLCD_Config_t;


#endif // HLCD_CONFIG_H




#endif
