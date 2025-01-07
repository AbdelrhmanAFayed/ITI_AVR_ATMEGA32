
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MPORT.h"


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

static MPORT_enuErrorStatus_t MPORT_enuSetPinConfigration(MPORT_enuPortNum_t Copy_enuPortNum,MPORT_enuPinNum_t Copy_enuPinNum,MPORT_enuPinMode_t Copy_enuConfigration)
{
    /*Checking if input pin is not valid*/
	if (Copy_enuPinNum > MPORT_enuPIN7) {
		return MPORT_INVALID_PARAM;
	}

	/*switching to the relevant port depending on the input to detrmine which reg to use*/
	switch (Copy_enuPortNum) {
		case MPORT_enuPORTA:
		if (Copy_enuConfigration == MPORT_enuPIN_OUTPUT) {
			/*If the pin is config as output we set the relevant bit in DDR and clear the relevant bit in PORT*/
			SET_BIT(DDRA, Copy_enuPinNum);
			CLR_BIT(PORTA, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MPORT_enuPIN_INPUT_PULLUP) {
			/*If the pin is config as Input_Pullup we clear the relevant bit in DDR and set the relevant bit in PORT*/
			CLR_BIT(DDRA, Copy_enuPinNum);
			SET_BIT(PORTA, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MPORT_enuPIN_INPUT_PULLDOWN) {
			/*If the pin is config as Input we clear the relevant bit in DDR and clear the relevant bit in PORT*/
			CLR_BIT(DDRA, Copy_enuPinNum);
			CLR_BIT(PORTA, Copy_enuPinNum);
			} else {
			/*If the pin is config in a not defined we return error status*/
			return MPORT_INVALID_PARAM;
		}
		break;

		case MPORT_enuPORTB:
		if (Copy_enuConfigration == MPORT_enuPIN_OUTPUT) {
			/*If the pin is config as output we set the relevant bit in DDR and clear the relevant bit in PORT*/
			SET_BIT(DDRB, Copy_enuPinNum);
			CLR_BIT(PORTB, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MPORT_enuPIN_INPUT_PULLUP) {
			/*If the pin is config as Input_Pullup we clear the relevant bit in DDR and set the relevant bit in PORT*/
			CLR_BIT(DDRB, Copy_enuPinNum);
			SET_BIT(PORTB, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MPORT_enuPIN_INPUT_PULLDOWN) {
			/*If the pin is config as Input we clear the relevant bit in DDR and clear the relevant bit in PORT*/
			CLR_BIT(DDRB, Copy_enuPinNum);
			CLR_BIT(PORTB, Copy_enuPinNum);
			} else {
			/*If the pin is config in a not defined we return error status*/
			return MPORT_INVALID_PARAM;
		}
		break;

		case MPORT_enuPORTC:
		if (Copy_enuConfigration == MPORT_enuPIN_OUTPUT) {
			/*If the pin is config as output we set the relevant bit in DDR and clear the relevant bit in PORT*/
			SET_BIT(DDRC, Copy_enuPinNum);
			CLR_BIT(PORTC, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MPORT_enuPIN_INPUT_PULLUP) {
			/*If the pin is config as Input_Pullup we clear the relevant bit in DDR and set the relevant bit in PORT*/
			CLR_BIT(DDRC, Copy_enuPinNum);
			SET_BIT(PORTC, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MPORT_enuPIN_INPUT_PULLDOWN) {
			/*If the pin is config as Input we clear the relevant bit in DDR and clear the relevant bit in PORT*/
			CLR_BIT(DDRC, Copy_enuPinNum);
			CLR_BIT(PORTC, Copy_enuPinNum);
			} else {
			/*If the pin is config in a not defined we return error status*/
			return MPORT_INVALID_PARAM;
		}
		break;

		case MPORT_enuPORTD:
		if (Copy_enuConfigration == MPORT_enuPIN_OUTPUT) {
			/*If the pin is config as output we set the relevant bit in DDR and clear the relevant bit in PORT*/
			SET_BIT(DDRD, Copy_enuPinNum);
			CLR_BIT(PORTD, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MPORT_enuPIN_INPUT_PULLUP) {
			/*If the pin is config as Input_Pullup we clear the relevant bit in DDR and set the relevant bit in PORT*/
			CLR_BIT(DDRD, Copy_enuPinNum);
			SET_BIT(PORTD, Copy_enuPinNum);
			} else if (Copy_enuConfigration == MPORT_enuPIN_INPUT_PULLDOWN) {
			/*If the pin is config as Input we clear the relevant bit in DDR and clear the relevant bit in PORT*/
			CLR_BIT(DDRD, Copy_enuPinNum);
			CLR_BIT(PORTD, Copy_enuPinNum);
			} else {
			/*If the pin is config in a not defined we return error status*/
			return MPORT_INVALID_PARAM;
		}
		break;

		default:
		/*If the port is config in a not defined we return error status*/
		return MPORT_INVALID_PARAM;
	}

	/* return OK status if no error is given and the function ran*/
	return MPORT_OK;
}

void MPORT_vInit(void)
{
    MPORT_enuErrorStatus_t   Loc_enu_error ;
	MPORT_enuPinNum_t  		Loc_enu_pin_inc ;
	MPORT_enuPinNum_t 	    Loc_enu_pin_current ;
	MPORT_enuPortNum_t 		Loc_enu_port_current ;
	for(Loc_enu_pin_inc = MPORT_enuPIN0; Loc_enu_pin_inc < (MAX_NUM_PIN * MAX_NUM_PORT); Loc_enu_pin_inc++ )
	{
		Loc_enu_pin_current = Loc_enu_pin_inc % MAX_NUM_PIN ;
		Loc_enu_port_current = Loc_enu_pin_inc / MAX_NUM_PIN ;
        
		Loc_enu_error = MPORT_enuSetPinConfigration(Loc_enu_port_current,Loc_enu_pin_current,PinsStatusArray[Loc_enu_pin_inc]);

		if(Loc_enu_error ==  MPORT_INVALID_PARAM)
		{
			break ;
		}
	}	
    
}



MPORT_enuErrorStatus_t MPORT_enuSetPinDirection( u8 Copy_enuPinNum  ,  u8  Copy_enuPinDirection  )
{
	
    MPORT_enuErrorStatus_t   Loc_enu_error = MPORT_OK ;

    if (Copy_enuPinNum > PIN_D7) {
		Loc_enu_error =  MPORT_INVALID_PARAM;
	}
    else
    {
		switch (GET_HIGH_NIB(Copy_enuPinNum)) 
		{
		case PORT_A:
		if (Copy_enuPinDirection == MPORT_OUTPUT) 
			{
			/*If the pin is config as output we set the relevant bit in DDR and clear the relevant bit in PORT*/
			SET_BIT(DDRA, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTA, GET_LOW_NIB(Copy_enuPinNum));
			} else if (Copy_enuPinDirection == MPORT_INPUT) 
			{
			/*If the pin is config as Input we clear the relevant bit in DDR and clear the relevant bit in PORT*/
			CLR_BIT(DDRA, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTA, GET_LOW_NIB(Copy_enuPinNum));
			} else {
			/*If the pin is config in a not defined we return error status*/
			Loc_enu_error =  MPORT_INVALID_PARAM;
			}
		break;
	
		case PORT_B:
		if (Copy_enuPinDirection == MPORT_OUTPUT) {
			/*If the pin is config as output we set the relevant bit in DDR and clear the relevant bit in PORT*/
			SET_BIT(DDRB, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTB, GET_LOW_NIB(Copy_enuPinNum));
			} else if (GET_LOW_NIB(Copy_enuPinNum) == MPORT_INPUT) {
			/*If the pin is config as Input we clear the relevant bit in DDR and clear the relevant bit in PORT*/
			CLR_BIT(DDRB, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTB, GET_LOW_NIB(Copy_enuPinNum));
			} else {
			/*If the pin is config in a not defined we return error status*/
			Loc_enu_error =  MPORT_INVALID_PARAM;
			}
		break;
	
		case PORT_C:
		if (Copy_enuPinDirection == MPORT_OUTPUT) {
			/*If the pin is config as output we set the relevant bit in DDR and clear the relevant bit in PORT*/
			SET_BIT(DDRC, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTC, GET_LOW_NIB(Copy_enuPinNum));
			} else if (GET_LOW_NIB(Copy_enuPinNum) == MPORT_INPUT) {
			/*If the pin is config as Input we clear the relevant bit in DDR and clear the relevant bit in PORT*/
			CLR_BIT(DDRC, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTC, GET_LOW_NIB(Copy_enuPinNum));
			} else {
			/*If the pin is config in a not defined we return error status*/
			Loc_enu_error =  MPORT_INVALID_PARAM;
			}
		break;
	
		case PORT_D:
		if (Copy_enuPinDirection == MPORT_OUTPUT) {
			/*If the pin is config as output we set the relevant bit in DDR and clear the relevant bit in PORT*/
			SET_BIT(DDRD, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTD, GET_LOW_NIB(Copy_enuPinNum));
			} else if (GET_LOW_NIB(Copy_enuPinNum) == MPORT_INPUT) {
			/*If the pin is config as Input we clear the relevant bit in DDR and clear the relevant bit in PORT*/
			CLR_BIT(DDRD, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTD, GET_LOW_NIB(Copy_enuPinNum));
			} else {
			/*If the pin is config in a not defined we return error status*/
			Loc_enu_error =  MPORT_INVALID_PARAM;
			}
		break;
	
		default:
		/*If the port is config in a not defined we return error status*/
		Loc_enu_error =  MPORT_INVALID_PARAM;
	 }
        
    }

	return Loc_enu_error;

}

MPORT_enuErrorStatus_t MPORT_enuSetPinMode( u8 Copy_enuPinNum  ,  MPORT_enuPinMode_t Copy_enuPinMode )
{
	MPORT_enuErrorStatus_t   Loc_enu_error = MPORT_OK ;

	if (Copy_enuPinNum > PIN_D7) {
		Loc_enu_error =  MPORT_INVALID_PARAM;
	}
    else
    {
		switch (Copy_enuPinMode) 
		{
		case MPORT_enuPIN_OUTPUT:
		switch (GET_HIGH_NIB(Copy_enuPinNum)) 
		{	
		case PORT_A:
		SET_BIT(DDRA, GET_LOW_NIB(Copy_enuPinNum));
		CLR_BIT(PORTA, GET_LOW_NIB(Copy_enuPinNum));
			
		break;

		case PORT_B:
		SET_BIT(DDRB, GET_LOW_NIB(Copy_enuPinNum));
		CLR_BIT(PORTB, GET_LOW_NIB(Copy_enuPinNum));
		
		break;

		case PORT_C:
		SET_BIT(DDRC, GET_LOW_NIB(Copy_enuPinNum));
		CLR_BIT(PORTC, GET_LOW_NIB(Copy_enuPinNum));
		
		break;

		case PORT_D:
		SET_BIT(DDRD, GET_LOW_NIB(Copy_enuPinNum));
		CLR_BIT(PORTD, GET_LOW_NIB(Copy_enuPinNum));
		
		break;

		default:
		/*If the port is config in a not defined we return error status*/
		Loc_enu_error =  MPORT_INVALID_PARAM;
		}
		break;

		case MPORT_enuPIN_INPUT_PULLDOWN:
			switch (GET_HIGH_NIB(Copy_enuPinNum)) 
			{
			case PORT_A:
			CLR_BIT(DDRA, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTA, GET_LOW_NIB(Copy_enuPinNum));
			
			break;

		case PORT_B:
			CLR_BIT(DDRB, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTB, GET_LOW_NIB(Copy_enuPinNum));
			
			break;

		case PORT_C:
			CLR_BIT(DDRC, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTC, GET_LOW_NIB(Copy_enuPinNum));
			
			break;

		case PORT_D:
			CLR_BIT(DDRD, GET_LOW_NIB(Copy_enuPinNum));
			CLR_BIT(PORTD, GET_LOW_NIB(Copy_enuPinNum));
			
			break;

		default:
		/*If the port is config in a not defined we return error status*/
		Loc_enu_error =  MPORT_INVALID_PARAM;
		}
		break;

		case MPORT_enuPIN_INPUT_PULLUP:
		switch (GET_HIGH_NIB(Copy_enuPinNum)) 
		{
		case PORT_A:

			CLR_BIT(DDRA, GET_LOW_NIB(Copy_enuPinNum));
			SET_BIT(PORTA, GET_LOW_NIB(Copy_enuPinNum));
			
			break;

		case PORT_B:
			CLR_BIT(DDRB, GET_LOW_NIB(Copy_enuPinNum));
			SET_BIT(PORTB, GET_LOW_NIB(Copy_enuPinNum));
		break;

		case PORT_C:
			CLR_BIT(DDRC, GET_LOW_NIB(Copy_enuPinNum));
			SET_BIT(PORTC, GET_LOW_NIB(Copy_enuPinNum));
		break;

		case PORT_D:
			CLR_BIT(DDRD, GET_LOW_NIB(Copy_enuPinNum));
			SET_BIT(PORTD, GET_LOW_NIB(Copy_enuPinNum));
		break;

		default:
		/*If the port is config in a not defined we return error status*/
		Loc_enu_error =  MPORT_INVALID_PARAM;
		}
		break;

		}



	}
   
	return Loc_enu_error;

}

