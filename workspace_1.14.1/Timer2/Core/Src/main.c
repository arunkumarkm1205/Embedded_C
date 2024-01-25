#include"stm32f3xx.h"
int main()
{
	RCC->AHBENR |=(1<<17);
	GPIOA->MODER |=(1<<10);
	GPIOA ->MODER &=~(1U<<11);


	RCC ->APB1ENR =(1U<<0);
	TIM2->PSC=7999;
	TIM2->ARR=100;
	TIM2->CNT=0;
	TIM2->CR1=(1U<<0);

	while(1)
	{

		while(!(TIM2->SR&(1U<<0)));
		TIM2->SR&=~(1U<<0);
		GPIOA->ODR^=(1U<<5);
	}
}
