/*
 * HSE.c
 *
 *  Created on: Feb 9, 2025
 *      Author: MRABTI Ayoub
 */

#include "HSE.h"
 uint32_t *ptrRCC = (uint32_t*)ADR_BASE_RCC ;
 uint32_t *ptrRCC_CFGR = (uint32_t*)ADR_RCC_CFGR ;
 uint32_t *ptrGPIOA = (uint32_t*)ADR_GPIOA ;
void ACTV_RCC()
{
	*ptrRCC |=0x10000;
	while(!(*ptrRCC &=(1<<17)))
	{
		*ptrRCC_CFGR |=(1<<0); //SW :  01: HSE oscillator selected as system clock

		*ptrRCC_CFGR |=(1<<22); //    Bits 22:21MCO1: Microcontroller clock output 1////  10: HSE oscillator clock selected

		*ptrRCC_CFGR |=(1<<31); // 10: HSE oscillator clock selected

		*ptrRCC_CFGR |=((1<<26)&&(1<<25)); // 110: division by 4

	}
}
