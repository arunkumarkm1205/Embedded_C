#include "stm32f3xx.h"
void delay(int a)
{
	int i ,j;
	for(j=0;j<a;j++)
	for(i=0;i<6000;i++);
}
int main()
{
	RCC->AHBENR |=(1<<17);
	GPIOA->MODER |=(1U<<10);
	GPIOA->MODER &=~(1U<<11);

     while(1){
	   GPIOA->ODR |=(1U<<5);
	   delay(50);
	   GPIOA->ODR &=~(1U<<5);
	   delay(50);
   }

}
