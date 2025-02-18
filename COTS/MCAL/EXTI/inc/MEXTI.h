#ifndef MEXTI_H_
#define MEXTI_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#define MSREG_u8      (*(volatile u8*)0x5F)  // Status Register
#define MGICR_u8      (*(volatile u8*)0x5B)  // General Interrupt Control Register
#define MMCUCR_u8     (*(volatile u8*)0x55)  // MCU Control Register
#define MMCUCSR_u8    (*(volatile u8*)0x54)  // MCU Control and Status Register
#define MGIFR_u8      (*(volatile u8*)0x5A)  // General Interrupt Flag Register


#define MINT0         6
#define MINT1         7
#define MINT2         5
#define MISC00        0
#define MISC01        1
#define MISC10        2
#define MISC11        3
#define MISC2         6

typedef enum {
    MEXTI_enuINT0 = 0,
    MEXTI_enuINT1,
    MEXTI_enuINT2
} MEXTI_enuSource;

typedef enum {
    MEXTI_enuLOW_LEVEL = 0,
    MEXTI_enuANY_CHANGE,
    MEXTI_enuFALLING_EDGE,
    MEXTI_enuRISING_EDGE
} MEXTI_enuTrigger;

void MEXTI_voidEnable(MEXTI_enuSource enuIntSource);
void MEXTI_voidDisable(MEXTI_enuSource enuIntSource);
void MEXTI_vidSetSenseControl(MEXTI_enuSource enuIntSource, MEXTI_enuTrigger enuTrigger);
void MEXTI_vidSetCallback(MEXTI_enuSource enuIntSource, void (*ptrFunc)(void));

#endif 
