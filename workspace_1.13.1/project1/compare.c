/*
 * compare.c
 *
 *  Created on: Aug 11, 2023
 *      Author: user
 */
#include "settheory.h"
#include<stdio.h>
int compare(struct NODE *c_node,int n)
{
	while(c_node!=NULL)
	{
		if(c_node->data == n)
		{
			return 1;
		}
		c_node =c_node->next;
	}
	return 0;
}




