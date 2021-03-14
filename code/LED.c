#include "LED.h"

void LED_Init(void) {
	RCC->AHB2ENR |= RCC_AHB2ENR_GPIOBEN;
	GPIOB->MODER &= ~GPIO_MODER_MODE2; 
	GPIOB->MODER |= GPIO_MODER_MODE2_0;
	GPIOB->OTYPER &= ~GPIO_OTYPER_OT2; 
	GPIOB->PUPDR &= ~GPIO_PUPDR_PUPD2; 
}

void Red_LED_Off(void) {
	GPIOB->ODR &= ~GPIO_ODR_OD2;
}

void Red_LED_On(void) {
	GPIOB->ODR |= GPIO_ODR_OD2;
}

void Red_LED_Toggle(void){
	GPIOB->ODR ^= GPIO_ODR_OD2;
}
