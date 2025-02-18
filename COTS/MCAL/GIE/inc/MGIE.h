#ifndef MGIE_H_
#define MGIE_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* Status Register (SREG) */
#define MSREG_u8  (*(volatile u8*)0x5F)

/* Bit Position */
#define MGIE_BIT  7

void MGIE_vidEnable(void);
void MGIE_vidDisable(void);

#endif /* MGIE_H_ */
