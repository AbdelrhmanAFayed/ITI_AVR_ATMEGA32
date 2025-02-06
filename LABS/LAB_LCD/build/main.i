# 1 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/src/main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/src/main.c"


# 1 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/../../COTS/common/stdlib/STD_TYPES.h" 1



typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short int u16;
typedef signed short int s16;
typedef unsigned long int u32;
typedef signed long int s32;
typedef float f32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef double f64;
typedef long double f128;
# 4 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/src/main.c" 2
# 1 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/../../COTS/common/stdlib/BIT_MATH.h" 1
# 5 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/src/main.c" 2
# 1 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/../../COTS/MCAL/DIO/inc/MDIO.h" 1
# 24 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/../../COTS/MCAL/DIO/inc/MDIO.h"
typedef enum
{
 MDIO_OK ,
 MDIO_NOK,
 MDIO_INVALID_PARAM
} MDIO_enuErrorStatus_t ;



typedef enum
{
 MDIO_enuPORTA ,
 MDIO_enuPORTB,
 MDIO_enuPORTC,
 MDIO_enuPORTD
} MDIO_enuPortNum_t ;


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


typedef enum
{
 MDIO_enuPIN_OUTPUT ,
 MDIO_enuPIN_INPUT_PULLUP,
 MDIO_enuPIN_INPUT_PULLDOWN
} MDIO_enuPIN_Configration_t ;


typedef enum
{
 MDIO_enuPORT_OUTPUT ,
 MDIO_enuPORT_INPUT_PULLUP,
 MDIO_enuPORT_INPUT_PULLDOWN
} MDIO_enuPORT_Configration_t ;


typedef enum
{
 MDIO_enuPIN_LOW ,
 MDIO_enuPIN_HIGH
} MDIO_enuPIN_State_t ;


typedef enum
{
 MDIO_enuPORT_LOW ,
 MDIO_enuPORT_HIGH = 0xFFU
} MDIO_enuPORT_State_t ;







MDIO_enuErrorStatus_t MDIO_enuSetPinConfigration(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPinNum_t Copy_enuPinNum,MDIO_enuPIN_Configration_t Copy_enuConfigration);


MDIO_enuErrorStatus_t MDIO_enuSetPortConfigration(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPORT_Configration_t Copy_enuConfigration);


MDIO_enuErrorStatus_t MDIO_enuSetPinValue( MDIO_enuPortNum_t Copy_enuPortNum, MDIO_enuPinNum_t Copy_enuPinNum,MDIO_enuPIN_State_t Copy_enuState);


MDIO_enuErrorStatus_t MDIO_enuSetPortValue(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPORT_State_t Copy_enuPortState);


MDIO_enuErrorStatus_t MDIO_enuGetPinValue(MDIO_enuPortNum_t Copy_enuPortNum,MDIO_enuPinNum_t Copy_enuPinNum,u8* Add_pu8PinValue);
# 6 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/src/main.c" 2
# 1 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/../../COTS/HAL/LCD/inc/HLCD.h" 1
# 20 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/../../COTS/HAL/LCD/inc/HLCD.h"
typedef enum
{
    HLCD_OK = 0x00,
    HLCD_NOK,
    HLCD_NULL_PTR

}
HLCD_enuErrorStatus_t ;


typedef enum
{
    HLCD_ROW0 = 0x00,
    HLCD_ROW1 = 0x01
}
HLCD_enuRow_t ;



HLCD_enuErrorStatus_t HLCD_enuInit(void);
HLCD_enuErrorStatus_t HLCD_enuWriteData(u8 Copyu8Data, u8 Copy_u8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuReadData(u8* Adduint8_Data, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuWriteCommand(u8 Copyu8Command, u8 Copy_u8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuReadCommand(u8* Adduint8_Data, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuWriteString(s8 *Addu8_string, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuWriteNumber(f64 Copyfloat64_number, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuGotoRowColumn(HLCD_enuRow_t Copyenu_Row, u8 Copyenu_Column,u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuStoreSpecialChar(u8 *Addu8_pattern, u8 Copyu8_BlockNumber, u8 Copy_uint8LcdNum);
HLCD_enuErrorStatus_t HLCD_enuDisplaySpecialChar(u8 Copyu8_PatternNumber, HLCD_enuRow_t Copyenu_Row, u8 Copyenu_Column, u8 Copy_uint8LcdNum);
# 7 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/src/main.c" 2





# 1 "/usr/lib/avr/include/util/delay.h" 1 3
# 44 "/usr/lib/avr/include/util/delay.h" 3
# 1 "/usr/lib/avr/include/inttypes.h" 1 3
# 37 "/usr/lib/avr/include/inttypes.h" 3
# 1 "/usr/lib/gcc/avr/5.4.0/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/avr/5.4.0/include/stdint.h" 3 4
# 1 "/usr/lib/avr/include/stdint.h" 1 3 4
# 125 "/usr/lib/avr/include/stdint.h" 3 4

# 125 "/usr/lib/avr/include/stdint.h" 3 4
typedef signed int int8_t __attribute__((__mode__(__QI__)));
typedef unsigned int uint8_t __attribute__((__mode__(__QI__)));
typedef signed int int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int uint16_t __attribute__ ((__mode__ (__HI__)));
typedef signed int int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int uint32_t __attribute__ ((__mode__ (__SI__)));

typedef signed int int64_t __attribute__((__mode__(__DI__)));
typedef unsigned int uint64_t __attribute__((__mode__(__DI__)));
# 146 "/usr/lib/avr/include/stdint.h" 3 4
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
# 163 "/usr/lib/avr/include/stdint.h" 3 4
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
# 217 "/usr/lib/avr/include/stdint.h" 3 4
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
# 277 "/usr/lib/avr/include/stdint.h" 3 4
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 10 "/usr/lib/gcc/avr/5.4.0/include/stdint.h" 2 3 4
# 38 "/usr/lib/avr/include/inttypes.h" 2 3
# 77 "/usr/lib/avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 45 "/usr/lib/avr/include/util/delay.h" 2 3
# 1 "/usr/lib/avr/include/util/delay_basic.h" 1 3
# 40 "/usr/lib/avr/include/util/delay_basic.h" 3
static __inline__ void _delay_loop_1(uint8_t __count) __attribute__((__always_inline__));
static __inline__ void _delay_loop_2(uint16_t __count) __attribute__((__always_inline__));
# 80 "/usr/lib/avr/include/util/delay_basic.h" 3
void
_delay_loop_1(uint8_t __count)
{
 __asm__ volatile (
  "1: dec %0" "\n\t"
  "brne 1b"
  : "=r" (__count)
  : "0" (__count)
 );
}
# 102 "/usr/lib/avr/include/util/delay_basic.h" 3
void
_delay_loop_2(uint16_t __count)
{
 __asm__ volatile (
  "1: sbiw %0,1" "\n\t"
  "brne 1b"
  : "=w" (__count)
  : "0" (__count)
 );
}
# 46 "/usr/lib/avr/include/util/delay.h" 2 3
# 1 "/usr/lib/avr/include/math.h" 1 3
# 127 "/usr/lib/avr/include/math.h" 3
extern double cos(double __x) __attribute__((__const__));





extern double sin(double __x) __attribute__((__const__));





extern double tan(double __x) __attribute__((__const__));






extern double fabs(double __x) __attribute__((__const__));






extern double fmod(double __x, double __y) __attribute__((__const__));
# 168 "/usr/lib/avr/include/math.h" 3
extern double modf(double __x, double *__iptr);


extern float modff (float __x, float *__iptr);




extern double sqrt(double __x) __attribute__((__const__));


extern float sqrtf (float) __attribute__((__const__));




extern double cbrt(double __x) __attribute__((__const__));
# 195 "/usr/lib/avr/include/math.h" 3
extern double hypot (double __x, double __y) __attribute__((__const__));







extern double square(double __x) __attribute__((__const__));






extern double floor(double __x) __attribute__((__const__));






extern double ceil(double __x) __attribute__((__const__));
# 235 "/usr/lib/avr/include/math.h" 3
extern double frexp(double __x, int *__pexp);







extern double ldexp(double __x, int __exp) __attribute__((__const__));





extern double exp(double __x) __attribute__((__const__));





extern double cosh(double __x) __attribute__((__const__));





extern double sinh(double __x) __attribute__((__const__));





extern double tanh(double __x) __attribute__((__const__));







extern double acos(double __x) __attribute__((__const__));







extern double asin(double __x) __attribute__((__const__));






extern double atan(double __x) __attribute__((__const__));
# 299 "/usr/lib/avr/include/math.h" 3
extern double atan2(double __y, double __x) __attribute__((__const__));





extern double log(double __x) __attribute__((__const__));





extern double log10(double __x) __attribute__((__const__));





extern double pow(double __x, double __y) __attribute__((__const__));






extern int isnan(double __x) __attribute__((__const__));
# 334 "/usr/lib/avr/include/math.h" 3
extern int isinf(double __x) __attribute__((__const__));






__attribute__((__const__)) static inline int isfinite (double __x)
{
    unsigned char __exp;
    __asm__ (
 "mov	%0, %C1		\n\t"
 "lsl	%0		\n\t"
 "mov	%0, %D1		\n\t"
 "rol	%0		"
 : "=r" (__exp)
 : "r" (__x) );
    return __exp != 0xff;
}






__attribute__((__const__)) static inline double copysign (double __x, double __y)
{
    __asm__ (
 "bst	%D2, 7	\n\t"
 "bld	%D0, 7	"
 : "=r" (__x)
 : "0" (__x), "r" (__y) );
    return __x;
}
# 377 "/usr/lib/avr/include/math.h" 3
extern int signbit (double __x) __attribute__((__const__));






extern double fdim (double __x, double __y) __attribute__((__const__));
# 393 "/usr/lib/avr/include/math.h" 3
extern double fma (double __x, double __y, double __z) __attribute__((__const__));







extern double fmax (double __x, double __y) __attribute__((__const__));







extern double fmin (double __x, double __y) __attribute__((__const__));






extern double trunc (double __x) __attribute__((__const__));
# 427 "/usr/lib/avr/include/math.h" 3
extern double round (double __x) __attribute__((__const__));
# 440 "/usr/lib/avr/include/math.h" 3
extern long lround (double __x) __attribute__((__const__));
# 454 "/usr/lib/avr/include/math.h" 3
extern long lrint (double __x) __attribute__((__const__));
# 47 "/usr/lib/avr/include/util/delay.h" 2 3
# 86 "/usr/lib/avr/include/util/delay.h" 3
static __inline__ void _delay_us(double __us) __attribute__((__always_inline__));
static __inline__ void _delay_ms(double __ms) __attribute__((__always_inline__));
# 165 "/usr/lib/avr/include/util/delay.h" 3
void
_delay_ms(double __ms)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((
# 174 "/usr/lib/avr/include/util/delay.h"
          8000000UL
# 174 "/usr/lib/avr/include/util/delay.h" 3
               ) / 1e3) * __ms;
# 184 "/usr/lib/avr/include/util/delay.h" 3
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 210 "/usr/lib/avr/include/util/delay.h" 3
}
# 254 "/usr/lib/avr/include/util/delay.h" 3
void
_delay_us(double __us)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((
# 263 "/usr/lib/avr/include/util/delay.h"
          8000000UL
# 263 "/usr/lib/avr/include/util/delay.h" 3
               ) / 1e6) * __us;
# 273 "/usr/lib/avr/include/util/delay.h" 3
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 299 "/usr/lib/avr/include/util/delay.h" 3
}
# 13 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/src/main.c" 2



# 15 "/media/fazloka/Abdelrhman/9 Month/ITI_AVR_ATMEGA32/LABS/LAB_LCD/src/main.c"
int main(void)
{
    HLCD_enuInit();
    HLCD_enuWriteData(0b01000000,0);





    while(1)
    {



    }
    return 0;
}
