/*
 * display.c
 *
 *  Created on: Aug 11, 2023
 *      Author: user
 */
#include "settheory.h"
#include<stdio.h>
void display(struct NODE *n)
{
	while(n!=NULL)
	{
		printf("\t%d",n->data);
		n = n->next;
	}
	printf("\n");
}




