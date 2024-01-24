#include "stm32f3xx.h"
void delay(unsigned int a )
{
	for(int i =0;i<a;i++)
		for(int j=0;j<6000;j++);
}
int main(){
	RCC ->AHBENR=(1U<<18)|(1U<<17);
	GPIOB->MODER|=(1U<<20);
	GPIOB->MODER&= ~(1U<<21);
	GPIOA->MODER|=(1U<<10);
    GPIOA->MODER&= ~(1U<<11);
	GPIOB->MODER&= ~((1U<<10)|(1<<11));
	while(1)
		{
		if((GPIOB->IDR&(1<<5)))
		{
			 GPIOB->ODR&=~(1U<<10);
			 delay(10);
			 GPIOA->ODR|=(1U<<5);
			 delay(10);

		}
		else
			{
			  GPIOA->ODR&=~(1U<<5);
			  delay(10);
			  GPIOB->ODR|=(1U<<10);
			  delay(10);
			}
		}
}
