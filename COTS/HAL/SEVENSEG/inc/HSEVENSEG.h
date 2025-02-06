#ifndef HSEVENSEG_H
#define HSEVENSEG_H

#include "STD_TYPES.h"
#include "HSEVENSEG_LCFG.h"



typedef enum 
{
	HSEVENSEG_OK ,
	HSEVENSEG_NOK,
	HSEVENSEG_INVALID_PARAM
} HSEVENSEG_enuErrorStatus_t ;

typedef enum
{
    HSEVENSEG_PIN_a,
    HSEVENSEG_PIN_b,
    HSEVENSEG_PIN_c,
    HSEVENSEG_PIN_d,
    HSEVENSEG_PIN_e,
    HSEVENSEG_PIN_f,
    HSEVENSEG_PIN_g,
    HSEVENSEG_PIN_dot 
} HSEVENSEG_enu7SegmentPinNames_t;

typedef enum 
{
	HSEVENSEG_COM_ANODE ,
	HSEVENSEG_COM_CATHODE
} HSEVENSEG_enuConnect_t ;




typedef enum
{
    HSEVENSEG_ZERO,
    HSEVENSEG_UNO
} HSEVENSEG_enuDISPName_t;

typedef struct 
{
    u8 PortNum;
    u8 PinNum;
} HSEVENSEG_strucPINScfg_t;

typedef struct 
{
    HSEVENSEG_strucPINScfg_t connectedpins[NUM_OF_PINS] ;
    HSEVENSEG_enuConnect_t Connect;
    
} HSEVENSEG_strucDISPcfg_t;

void HSEVENSEG_vInit();


void HSEVENSEG_vSetValue(u8 Copy_enuSevenSegNum , u8 Copy_u8Value);















#endif