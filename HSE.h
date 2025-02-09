/*
 * HSE.h
 *
 *  Created on: Feb 9, 2025
 *      Author: MRABTI Ayoub
 */

#ifndef HSE_H_
#define HSE_H_
#include <stdint.h>

#define ADR_BASE_RCC 				 (0x40023800UL)
#define ADR_offset_RCC_CFGR 		 (0x08UL)
#define ADR_RCC_CFGR 				 (ADR_BASE_RCC + ADR_offset_RCC_CFGR )
#define ADR_GPIOA  					 (0x40020000UL)

 extern  uint32_t *ptrRCC ;
 extern  uint32_t *ptrRCC_CFGR;
 extern  uint32_t *ptrGPIOA ;
void ACTV_RCC();


#endif /* HSE_H_ */
