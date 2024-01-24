/*
 * insert_node.c
 *
 *  Created on: Aug 11, 2023
 *      Author: user
 */
#include "settheory.h"
#include<stdio.h>
#include<stdlib.h>
struct NODE *insert_node(struct NODE *head,int data)
{
	printf("\n inserting the data at the begining");
	struct NODE *newnode;
	newnode=(struct NODE *)malloc(sizeof(struct NODE));
	printf("\n the adress of the newnode is: %p",newnode);
	newnode->data=data;
	printf("\nthe data inserted in the newnode is : %d\n",newnode->data);
	newnode->next=head;
	head = newnode;
	return head;

}



