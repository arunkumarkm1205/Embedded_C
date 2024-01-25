#include"stm32f3xx.h"
int main()
{
	RCC->AHBENR |=(1<<17);
	GPIOA->MODER |=(1<<10);
	GPIOA ->MODER &=~(1U<<11);


	RCC ->APB1ENR =(1U<<1);
	TIM3->PSC=7999;
	TIM3->ARR=500;
	TIM3->CNT=0;
	TIM3->CR1=(1U<<0);

	while(1)
	{

		while(!(TIM3->SR&(1U<<0)));
		TIM3->SR&=~(1U<<0);
		GPIOA->ODR^=(1U<<5);
	}
}