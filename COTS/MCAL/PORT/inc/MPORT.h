#ifndef  MPORT_H
#define  MPORT_H


#include "STD_TYPES.h"


/*PINS*/

#define PIN_A0 0x00
#define PIN_A1 0x01
#define PIN_A2 0x02
#define PIN_A3 0x03
#define PIN_A4 0x04
#define PIN_A5 0x05
#define PIN_A6 0x06
#define PIN_A7 0x07

#define PIN_B0 0x10
#define PIN_B1 0x11
#define PIN_B2 0x12
#define PIN_B3 0x13
#define PIN_B4 0x14
#define PIN_B5 0x15
#define PIN_B6 0x16
#define PIN_B7 0x17

#define PIN_C0 0x20
#define PIN_C1 0x21
#define PIN_C2 0x22
#define PIN_C3 0x23
#define PIN_C4 0x24
#define PIN_C5 0x25
#define PIN_C6 0x26
#define PIN_C7 0x27

#define PIN_D0 0x30
#define PIN_D1 0x31
#define PIN_D2 0x32
#define PIN_D3 0x33
#define PIN_D4 0x34
#define PIN_D5 0x35
#define PIN_D6 0x36
#define PIN_D7 0x37

#define PIN_0 0x00
#define PIN_1 0x01
#define PIN_2 0x02
#define PIN_3 0x03
#define PIN_4 0x04
#define PIN_5 0x05
#define PIN_6 0x06
#define PIN_7 0x07

#define PORT_A 0x00
#define PORT_B 0x01
#define PORT_C 0x02
#define PORT_D 0x03



#define MPORT_OUTPUT 0x00
#define MPORT_INPUT  0x01
#define MPORT_INPUT_PULLUP 0x02
#define MPORT_INPUT_PULLDOWN 0x03

#define MAX_NUM_PIN 8
#define MAX_NUM_PORT 4 

typedef enum 
{
	MPORT_OK ,
	MPORT_NOK,
	MPORT_INVALID_PARAM
} MPORT_enuErrorStatus_t ;


typedef enum 
{
	MPORT_enuPIN_OUTPUT ,
	MPORT_enuPIN_INPUT,
	MPORT_enuPIN_INPUT_PULLUP,
	MPORT_enuPIN_INPUT_PULLDOWN
} MPORT_enuPinMode_t ;


typedef enum 
{
	MPORT_enuPORTA ,
	MPORT_enuPORTB,
	MPORT_enuPORTC,
	MPORT_enuPORTD
} MPORT_enuPortNum_t ;

/*enum to define available pins */
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


const MPORT_enuPinMode_t PinsStatusArray[MAX_NUM_PIN * MAX_NUM_PORT];



void MPORT_vInit(void);

MPORT_enuErrorStatus_t MPORT_enuSetPinDirection( u8 Copy_enuPinNum  ,  u8  Copy_enuPinDirection  );

MPORT_enuErrorStatus_t MPORT_enuSetPinMode( u8 Copy_enuPinNum  ,  MPORT_enuPinMode_t Copy_enuPinMode );





#endif