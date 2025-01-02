/*
 * MDIO.h
 *
 * Created: 17-Dec-24 1:27:12 PM
 *  Author: Fayed
 */ 


#ifndef MDIO_H_
#define MDIO_H_

#include "STD_TYPES.h"

/*Configuration*/

#define MAX_NUM_PIN 8
#define MAX_NUM_PORT 4 



/*User defined Types*/

/*enum to define the possible error status*/
typedef enum 
{
	MDIO_OK ,
	MDIO_NOK,
	MDIO_INVALID_PARAM
} MDIO_enuErrorStatus_t ;


/*enum to define available ports */
typedef enum 
{
	MDIO_enuPORTA ,
	MDIO_enuPORTB,
	MDIO_enuPORTC,
	MDIO_enuPORTD
} MDIO_enuPortNum_t ;

/*enum to define available pins */
typedef enum 
{
	MDIO_enuPIN0 ,
	MDIO_enuPIN1,
	MDIO_enuPIN2,
	MDIO_enuPIN3 ,
	MDIO_enuPIN4,
	MDIO_enuPIN5,
	MDIO_enuPIN6,
	MDIO_enuPIN7
} MDIO_enuPinNum_t ;

/*enum to define possible pin configs */
typedef enum 
{
	MDIO_enuPIN_OUTPUT ,
	MDIO_enuPIN_INPUT_PULLUP,
	MDIO_enuPIN_INPUT_PULLDOWN
} MDIO_enuPIN_Configration_t ;

/*enum to define available ports */
typedef enum 
{
	MDIO_enuPORT_OUTPUT ,
	MDIO_enuPORT_INPUT_PULLUP,
	MDIO_enuPORT_INPUT_PULLDOWN
} MDIO_enuPORT_Configration_t ;

/*enum to define possible pin states */
typedef enum 
{
	MDIO_enuPIN_LOW ,
	MDIO_enuPIN_HIGH
} MDIO_enuPIN_State_t ;

/*enum to define possible port states */
typedef enum 
{
	MDIO_enuPORT_LOW ,
	MDIO_enuPORT_HIGH = 0xFFU
} MDIO_enuPORT_State_t ;

/*const MDIO_enuPIN_Configration_t PinsStatusArray[MAX_NUM_PIN * MAX_NUM_PORT] ;*/

/*Function Prototypes*/

/*void MDIO_vInit(void);*/

MDIO_enuErrorStatus_t MDIO_enuSetPinConfigration(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPinNum_t Copy_enuPinNum,MDIO_enuPIN_Configration_t Copy_enuConfigration);


MDIO_enuErrorStatus_t MDIO_enuSetPortConfigration(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPORT_Configration_t Copy_enuConfigration);


MDIO_enuErrorStatus_t MDIO_enuSetPinValue( MDIO_enuPortNum_t Copy_enuPortNum, MDIO_enuPinNum_t Copy_enuPinNum,MDIO_enuPIN_State_t Copy_enuState);


MDIO_enuErrorStatus_t MDIO_enuSetPortValue(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPORT_State_t Copy_enuPortState);


MDIO_enuErrorStatus_t MDIO_enuGetPinValue(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPinNum_t Copy_enuPinNum,u8* Add_pu8PinValue);



#endif /* MDIO_H_ */