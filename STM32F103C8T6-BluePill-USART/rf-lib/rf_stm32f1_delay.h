/***************************************************************
* File     : rf_stm32f1_delay.h
***************************************************************/

/***************************************************************
// Header Files Includes
***************************************************************/
#include "stm32f10x.h"
#include "misc.h"

/***************************************************************
* Global Function
***************************************************************/
void FM_delay_init(void);
void delay_ms(u16 nms);
void delay_us(u32 nus);

/***************************************************************/
