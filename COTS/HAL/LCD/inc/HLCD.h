#ifndef HLCD_H
#define HLCD_H



#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* Basic LCD Commands (8-bit) */
#define CLEAR_DISPLAY              0x01   
#define RETURN_HOME                0x02    
#define ENTRY_MODE_SET             0x04    
#define DISPLAY_CONTROL            0x08    
#define CURSOR_DISPLAY_SHIFT       0x10    
#define FUNCTION_SET               0x20    
#define SET_CGRAM_ADDR             0x40    
#define SET_DDRAM_ADDR             0x80    


typedef enum
{
    HLCD_OK = 0x00,
    HLCD_NOK,
    HLCD_NULL_PTR

}
HLCD_enuErrorStatus_t ;


typedef enum
{
    HLCD_ROW0 = 0x00,
    HLCD_ROW1 = 0x01
}
HLCD_enuRow_t ;



HLCD_enuErrorStatus_t HLCD_enuInit(void);
HLCD_enuErrorStatus_t HLCD_enuWriteData(u8 Copyu8Data, u8 Copy_u8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuReadData(u8* Adduint8_Data, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuWriteCommand(u8 Copyu8Command, u8 Copy_u8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuReadCommand(u8* Adduint8_Data, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuWriteString(s8 *Addu8_string, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuWriteNumber(f64 Copyfloat64_number, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuGotoRowColumn(HLCD_enuRow_t Copyenu_Row, u8 Copyenu_Column,u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuStoreSpecialChar(u8 *Addu8_pattern, u8 Copyu8_BlockNumber, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuDisplaySpecialChar(u8 Copyu8_PatternNumber, HLCD_enuRow_t Copyenu_Row, u8 Copyenu_Column, u8 Copy_uint8LcdNum);




#endif