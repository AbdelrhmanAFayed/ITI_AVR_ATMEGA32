#include "MGIE.h"

void MGIE_vidEnable(void) {
    SET_BIT(MSREG_u8, MGIE_BIT);
}

void MGIE_vidDisable(void) {
    CLR_BIT(MSREG_u8, MGIE_BIT);
}
