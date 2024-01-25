#include<stm32f3xx.h>
void delay(unsigned int a )
{
	unsigned int i,j;
	for(i=0;i<1;i++)
		for(j=0;j<6000;j++);
}

int main()
{
	RCC->AHBENR=(1U<<17);
	GPIOA->MODER|=(1U<<13);
	GPIOA->MODER&=~(1U<<12);
	GPIOA->AFR[0]=-0;
	GPIOA->AFR[0]|=(1<<25);

	RCC->APB1ENR=(1U<<1);
	TIM3->PSC=0;
	TIM3->ARR=500;
	TIM3->CNT=0;
	TIM3->CCMR1|=(1<<5)|(1<<6);

	TIM3->CCER=1;
	TIM3->CR1;
	while(1)
	{
		TIM3->CCR1=1000;
		delay(200);
		TIM3->CCR1=2500;
		delay(200);
		TIM3->CCR1=7500;
		delay(200);
		TIM3->CCR1=9900;
        delay(1000);

	}
}
