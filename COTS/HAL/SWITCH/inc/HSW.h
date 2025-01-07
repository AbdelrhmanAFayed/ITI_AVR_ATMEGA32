#ifndef HSW_H
#define HSW_H

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#define HSW_PRESSED  1
#define HSW_RELEASED 0



typedef enum 
{
	HSW_OK ,
	HSW_NOK,
	HSW_INVALID_PARAM
} HSW_enuErrorStatus_t ;

typedef enum 
{
	HSW_INTERNAL_PULLUP,
    HSW_EXTERNAL_PULLUP,
    HSW_EXTERNAL_PULLDOWN
} HSW_enuConnect_t ;

typedef enum
{
    HSW_START      ,
    HSW_STOP       ,
    HSW_HOLD      
} HSWITCH_enuSwitchName_t;


typedef struct 
{
    u8 PortNum;
    u8 PinNum;
    HSW_enuConnect_t Connect;
} HSW_strucSWcfg_t;

void HSW_Init(void);

HSW_enuErrorStatus_t HSW_enuGetSwitchState(u8 Copy_u8SwitchName, u8* Add_pu8State);


#endif