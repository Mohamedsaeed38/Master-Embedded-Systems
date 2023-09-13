/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

typedef volatile unsigned int vuint32_t;
#include<stdio.h>
#define RCC_BASE         0x40021000
#define GPIOA_BASE       0x40010800
#define RCC_APB2ENR      *( vuint32_t *)(RCC_BASE  + 0x18)
#define GPIOA_CRH        *( vuint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR        *( vuint32_t *)(GPIOA_BASE + 0x0c)
typedef union  {
	vuint32_t  all_fields;
	struct {
		vuint32_t  reserved:13;
		vuint32_t  P_13:1;
	}Pin;
}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0c);

int main()
{
	RCC_APB2ENR |=1<<2;
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;
	while(1)
	{
		R_ODR->Pin.P_13=1;
		for(int i=0 ;i<5000;i++); // for delay
		R_ODR->Pin.P_13=0;
		for(int i=0 ;i<5000;i++); // for delay
	}
	return 0;
	// loop for ever
	for(;;);
}


