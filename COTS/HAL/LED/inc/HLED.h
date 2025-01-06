#ifndef HLED_H
#define HLED_H

#include "STD_TYPES.h"


typedef enum 
{
	HLED_OK ,
	HLED_NOK,
	HLED_INVALID_PARAM
} HLED_enuErrorStatus_t ;

typedef enum 
{
	HLED_src ,
	HLED_sink
} HLED_enuConnect_t ;


typedef enum 
{
	HLED_OFF ,
	HLED_ON
} HLED_enuLEDState_t ;

typedef enum
{
    HLED_GREEN,
    HLED_RED,
	HLED_BLUE
} HLED_enuLEDName_t;

typedef struct 
{
    u8 PortNum;
    u8 PinNum;
    HLED_enuConnect_t Connect;
    HLED_enuLEDState_t Initial_State;
    
} HLED_strucLEDcfg_t;


HLED_enuErrorStatus_t HLED_enuSetLedState(u8 Copy_u8LedName, u8 Copy_u8State);

void HLED_init(void);


















#endif