/*
 * MDIO.c
 *
 * Created: 17-Dec-24 1:26:57 PM
 *  Author: Fayed
 */ 

#include "MDIO.h"
#include "BIT_MATH.h"

#define PORTA   *(volatile u8 *)0x3B
#define DDRA	*(volatile u8 *)0x3A
#define PINA	*(volatile u8 *)0x39

#define PORTB   *(volatile u8 *)0x38
#define DDRB	*(volatile u8 *)0x37
#define PINB	*(volatile u8 *)0x36
 
#define PORTC	*(volatile u8 *)0x35
#define DDRC	*(volatile u8 *)0x34
#define PINC	*(volatile u8 *)0x33

#define PORTD	*(volatile u8 *)0x32   
#define DDRD	*(volatile u8 *)0x31
#define PIND	*(volatile u8 *)0x30

#define NULL 0 


MDIO_enuErrorStatus_t MDIO_enuSetPinConfigration(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPinNum_t Copy_enuPinNum,MDIO_enuPIN_Configration_t Copy_enuConfigration)
{
	if (Copy_enuPinNum > MDIO_enuPIN7) {
		return MDIO_INVALID_PARAM;
	}

	switch (Copy_enuPortNum) {
		case MDIO_enuPORTA:
		if (Copy_enuConfigration == MDIO_enuPIN_OUTPUT) {
			SET_BIT(DDRA, Copy_enuPinNum);
			CLR_BIT(PORTA, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MDIO_enuPIN_INPUT_PULLUP) {
			CLR_BIT(DDRA, Copy_enuPinNum);
			SET_BIT(PORTA, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MDIO_enuPIN_INPUT_PULLDOWN) {
			CLR_BIT(DDRA, Copy_enuPinNum);
			CLR_BIT(PORTA, Copy_enuPinNum);
			} else {
			return MDIO_INVALID_PARAM;
		}
		break;

		case MDIO_enuPORTB:
		if (Copy_enuConfigration == MDIO_enuPIN_OUTPUT) {
			SET_BIT(DDRB, Copy_enuPinNum);
			CLR_BIT(PORTB, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MDIO_enuPIN_INPUT_PULLUP) {
			CLR_BIT(DDRB, Copy_enuPinNum);
			SET_BIT(PORTB, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MDIO_enuPIN_INPUT_PULLDOWN) {
			CLR_BIT(DDRB, Copy_enuPinNum);
			CLR_BIT(PORTB, Copy_enuPinNum);
			} else {
			return MDIO_INVALID_PARAM;
		}
		break;

		case MDIO_enuPORTC:
		if (Copy_enuConfigration == MDIO_enuPIN_OUTPUT) {
			SET_BIT(DDRC, Copy_enuPinNum);
			CLR_BIT(PORTC, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MDIO_enuPIN_INPUT_PULLUP) {
			CLR_BIT(DDRC, Copy_enuPinNum);
			SET_BIT(PORTC, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MDIO_enuPIN_INPUT_PULLDOWN) {
			CLR_BIT(DDRC, Copy_enuPinNum);
			CLR_BIT(PORTC, Copy_enuPinNum);
			} else {
			return MDIO_INVALID_PARAM;
		}
		break;

		case MDIO_enuPORTD:
		if (Copy_enuConfigration == MDIO_enuPIN_OUTPUT) {
			SET_BIT(DDRD, Copy_enuPinNum);
			CLR_BIT(PORTD, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MDIO_enuPIN_INPUT_PULLUP) {
			CLR_BIT(DDRD, Copy_enuPinNum);
			SET_BIT(PORTD, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MDIO_enuPIN_INPUT_PULLDOWN) {
			CLR_BIT(DDRD, Copy_enuPinNum);
			CLR_BIT(PORTD, Copy_enuPinNum);
			} else {
			

			return MDIO_INVALID_PARAM;
		}
		break;

		default:
		return MDIO_INVALID_PARAM;
	}

	return MDIO_OK;

}


MDIO_enuErrorStatus_t MDIO_enuSetPortConfigration( MDIO_enuPortNum_t Copy_enuPortNum, MDIO_enuPORT_Configration_t Copy_enuConfigration)
 {
	switch (Copy_enuPortNum) {
		case MDIO_enuPORTA:
		if (Copy_enuConfigration == MDIO_enuPORT_OUTPUT) {
			DDRA = 0xFF;
			PORTA = 0x00;
			} else if (Copy_enuConfigration == MDIO_enuPORT_INPUT_PULLUP) {
			DDRA = 0x00;
			PORTA = 0xFF;
			} else if (Copy_enuConfigration == MDIO_enuPORT_INPUT_PULLDOWN) {
			DDRA = 0x00;
			PORTA = 0x00;
			} else {
			return MDIO_INVALID_PARAM;
		}
		break;

		case MDIO_enuPORTB:
		if (Copy_enuConfigration == MDIO_enuPORT_OUTPUT) {
			DDRB = 0xFF;
			PORTB = 0x00;
			} else if (Copy_enuConfigration == MDIO_enuPORT_INPUT_PULLUP) {
			DDRB = 0x00;
			PORTB = 0xFF;
			} else if (Copy_enuConfigration == MDIO_enuPORT_INPUT_PULLDOWN) {
			DDRB = 0x00;
			PORTB = 0x00;
			} else {
			return MDIO_INVALID_PARAM;
		}
		break;

		case MDIO_enuPORTC:
		if (Copy_enuConfigration == MDIO_enuPORT_OUTPUT) {
			DDRC = 0xFF;
			PORTC = 0x00;
			} else if (Copy_enuConfigration == MDIO_enuPORT_INPUT_PULLUP) {
			DDRC = 0x00;
			PORTC = 0xFF;
			} else if (Copy_enuConfigration == MDIO_enuPORT_INPUT_PULLDOWN) {
			DDRC = 0x00;
			PORTC = 0x00;
			} else {
			return MDIO_INVALID_PARAM;
		}
		break;

		case MDIO_enuPORTD:
		if (Copy_enuConfigration == MDIO_enuPORT_OUTPUT) {
			DDRD = 0xFF;
			PORTD = 0x00;
			} else if (Copy_enuConfigration == MDIO_enuPORT_INPUT_PULLUP) {
			DDRD = 0x00;
			PORTD = 0xFF;
			} else if (Copy_enuConfigration == MDIO_enuPORT_INPUT_PULLDOWN) {
			DDRD = 0x00;
			PORTD = 0x00;
			} else {
			return MDIO_INVALID_PARAM;
		}
		break;

		default:
		return MDIO_INVALID_PARAM;
	}

	return MDIO_OK;
}


MDIO_enuErrorStatus_t MDIO_enuSetPinValue( MDIO_enuPortNum_t Copy_enuPortNum, MDIO_enuPinNum_t Copy_enuPinNum,MDIO_enuPIN_State_t Copy_enuState)
{
		if (Copy_enuPinNum > MDIO_enuPIN7) {
			return MDIO_INVALID_PARAM;
		}

		switch (Copy_enuPortNum) {
			case MDIO_enuPORTA:
			if (Copy_enuState == MDIO_enuPIN_HIGH) {
				SET_BIT(PORTA, Copy_enuPinNum);
				} else {
				CLR_BIT(PORTA, Copy_enuPinNum);
			}
			break;

			case MDIO_enuPORTB:
			if (Copy_enuState == MDIO_enuPIN_HIGH) {
				SET_BIT(PORTB, Copy_enuPinNum);
				} else {
				CLR_BIT(PORTB, Copy_enuPinNum);
			}
			break;

			case MDIO_enuPORTC:
			if (Copy_enuState == MDIO_enuPIN_HIGH) {
				SET_BIT(PORTC, Copy_enuPinNum);
				} else {
				CLR_BIT(PORTC, Copy_enuPinNum);
			}
			break;

			case MDIO_enuPORTD:
			if (Copy_enuState == MDIO_enuPIN_HIGH) {
				SET_BIT(PORTD, Copy_enuPinNum);
				} else {
				CLR_BIT(PORTD, Copy_enuPinNum);
			}
			break;

			default:
			return MDIO_INVALID_PARAM;
		}

		return MDIO_OK;
}

MDIO_enuErrorStatus_t MDIO_enuSetPortValue(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPORT_State_t Copy_enuPortState)
{
	switch (Copy_enuPortNum) {
		case MDIO_enuPORTA:
		PORTA = Copy_enuPortState;
		break;

		case MDIO_enuPORTB:
		PORTB = Copy_enuPortState;
		break;

		case MDIO_enuPORTC:
		PORTC = Copy_enuPortState;
		break;

		case MDIO_enuPORTD:
		PORTD = Copy_enuPortState;
		break;

		default:
		return MDIO_INVALID_PARAM;
	}

	return MDIO_OK;
}

MDIO_enuErrorStatus_t MDIO_enuGetPinValue(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPinNum_t Copy_enuPinNum,u8* Add_pu8PinValue)
{
	if (Add_pu8PinValue == NULL || Copy_enuPinNum > MDIO_enuPIN7) {
		return MDIO_INVALID_PARAM;
	}

	switch (Copy_enuPortNum) {
		case MDIO_enuPORTA:
		*Add_pu8PinValue = GET_BIT(PINA, Copy_enuPinNum);
		break;

		case MDIO_enuPORTB:
		*Add_pu8PinValue = GET_BIT(PINB, Copy_enuPinNum);
		break;

		case MDIO_enuPORTC:
		*Add_pu8PinValue = GET_BIT(PINC, Copy_enuPinNum);
		break;

		case MDIO_enuPORTD:
		*Add_pu8PinValue = GET_BIT(PIND, Copy_enuPinNum);
		break;

		default:
		return MDIO_INVALID_PARAM;
	}

	return MDIO_OK;
}

