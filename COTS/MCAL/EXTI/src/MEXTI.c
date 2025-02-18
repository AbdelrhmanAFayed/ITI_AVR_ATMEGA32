#include "MEXTI.h"

static void (*MEXTI_aptrCallbacks[3])(void) = {NULL}; 

void MEXTI_voidEnable(MEXTI_enuSource enuIntSource) {
    SET_BIT(MGICR_u8, (MINT0 + enuIntSource)); 
    SET_BIT(MSREG_u8, 7); 
}

void MEXTI_voidDisable(MEXTI_enuSource enuIntSource) {
    CLR_BIT(MGICR_u8, (MINT0 + enuIntSource)); 
}

void MEXTI_vidSetSenseControl(MEXTI_enuSource enuIntSource, MEXTI_enuTrigger enuTrigger) {
    switch (enuIntSource) {
        case MEXTI_enuINT0:
            
            MMCUCR_u8 = (MMCUCR_u8 & ~(0x03)) | (enuTrigger & 0x03);
            break;

        case MEXTI_enuINT1:
           
            MMCUCR_u8 = (MMCUCR_u8 & ~(0x0C)) | ((enuTrigger & 0x03) << 2);
            break;

        case MEXTI_enuINT2:
            if (enuTrigger == MEXTI_enuFALLING_EDGE)
                CLR_BIT(MMCUCSR_u8, MISC2);
            else if (enuTrigger == MEXTI_enuRISING_EDGE)
                SET_BIT(MMCUCSR_u8, MISC2);
            break;
    }
}


void MEXTI_vidSetCallback(MEXTI_enuSource enuIntSource, void (*ptrFunc)(void)) {
    if (enuIntSource <= MEXTI_enuINT2) {
        MEXTI_aptrCallbacks[enuIntSource] = ptrFunc;
    }
}

/* Interrupt Service Routines */
void __vector_1(void) __attribute__((signal));
void __vector_1(void) {
    if (MEXTI_aptrCallbacks[MEXTI_enuINT0]) MEXTI_aptrCallbacks[MEXTI_enuINT0]();
}

void __vector_2(void) __attribute__((signal));
void __vector_2(void) {
    if (MEXTI_aptrCallbacks[MEXTI_enuINT1]) MEXTI_aptrCallbacks[MEXTI_enuINT1]();
}

void __vector_3(void) __attribute__((signal));
void __vector_3(void) {
    if (MEXTI_aptrCallbacks[MEXTI_enuINT2]) MEXTI_aptrCallbacks[MEXTI_enuINT2]();
}

