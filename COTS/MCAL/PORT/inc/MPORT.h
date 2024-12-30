#ifndef  MPORT_H
#define  MPORT_H


#include "STD_TYPES.h"

typedef enum 
{
	MPORT_OK ,
	MPORT_NOK,
	MPORT_INVALID_PARAM
} MPORT_enuErrorStatus_t ;

typedef enum 
{
	MPORT_enuPORTA ,
	MPORT_enuPORTB,
	MPORT_enuPORTC,
	MPORT_enuPORTD
} MPORT_enuPortNum_t ;
typedef enum 
{
	MPORT_enuPIN0 ,
	MPORT_enuPIN1,
	MPORT_enuPIN2,
	MPORT_enuPIN3 ,
	MPORT_enuPIN4,
	MPORT_enuPIN5,
	MPORT_enuPIN6,
	MPORT_enuPIN7
} MPORT_enuPinNum_t ;

typedef enum 
{
	MPORT_enuPIN_OUTPUT ,
	MPORT_enuPIN_INPUT_PULLUP,
	MPORT_enuPIN_INPUT_PULLDOWN
} MPORT_enuPinMode_t ;


MPORT_enuErrorStatus_t MPORT_enuSetPinDirection( u8 Copy_enuPinNum  ,  u8  Copy_enuPinDirection  );

MPORT_enuErrorStatus_t MPORT_enuSetPinMode( u8 Copy_enuPinNum  ,  MPORT_enuPinMode_t Copy_enuPinMode );










#endif