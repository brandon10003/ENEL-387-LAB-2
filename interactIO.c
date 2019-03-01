 #include "stm32f10x.h"
 #include "interactIO.h"
 
 void writeLED1 (bool x) {
	if (x)
		GPIOC->ODR |= GPIO_ODR_ODR9;
	else
		GPIOC->ODR &= ~GPIO_ODR_ODR9;
}
void writeLED2 (bool x) {
	if (x)
		GPIOC->ODR |= GPIO_ODR_ODR9;
	else
		GPIOC->ODR &= ~GPIO_ODR_ODR9;
}
void writeLED3 (bool x) {
	if (x)
		GPIOC->ODR |= GPIO_ODR_ODR9;
	else
		GPIOC->ODR &= ~GPIO_ODR_ODR9;
}
void writeLED4 (bool x) {
	if (x)
		GPIOC->ODR |= GPIO_ODR_ODR9;
	else
		GPIOC->ODR &= ~GPIO_ODR_ODR9;
}

bool readSwitch1(void) {
	if ((GPIOB->IDR & GPIO_IDR_IDR8) == 0)
    {
			return true;
    }
    else
    {
			return false;
    }
}
bool readSwitch2(void) {
	if ((GPIOB->IDR & GPIO_IDR_IDR9) == 0)
    {
			return true;
    }
    else
    {
			return false;
    }
}
bool readSwitch3(void) {
	if ((GPIOC->IDR & GPIO_IDR_IDR12) == 0)
    {
			return true;
    }
    else
    {
			return false;
    }
}
bool readSwitch4(void) {
	if ((GPIOA->IDR & GPIO_IDR_IDR5) == 0)
    {
			return true;
    }
    else
    {
			return false;
    }
}