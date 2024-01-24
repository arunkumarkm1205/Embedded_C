/*
 * unionandintersection.c
 *
 *  Created on: Aug 11, 2023
 *      Author: user
 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct NODE *head1 = NULL;
	struct NODE *head2 = NULL;
	struct NODE *res_intersection = NULL;
	struct NODE *res_union = NULL;

	int first_list_nodes = 0, second_list_nodes = 0;
	  int  first_list_items = 0, second_list_items = 0;

	printf("Enter the number of nodes for 1st list:\n");
	fflush(stdout);
	scanf("%d",&first_list_nodes);

	for(int i=0;i<first_list_nodes;i++)
	{
		printf("\n enter the data %d of 1st list:\n",i+1);
		fflush(stdout);
		scanf("%d",&first_list_items);

		head1 = insert_node(head1,first_list_items);
	}
	printf("\n the data inside list 1 is :\t");
	display(head1);

	printf("\n enter the number of nodes for 2nd list :");
	fflush(stdout);
	scanf("%d",&second_list_nodes);

	for(int i=0;i<second_list_nodes;i++)
	{
		printf("\n enter the data %d of 2nd list:\n",i+1);
		fflush(stdout);
		scanf("%d",&second_list_items);

		head2 = insert_node(head2,second_list_items);
	}
	printf("\n the data inside list 2 is :\t");
	display(head2);

        res_intersection = get_intersection(head1,head2);
	printf("\n the result of intersection is:\t");
	display(res_intersection);

	res_union = get_union(head1,head2);
	printf("\n the result of union is :\t");
	display(res_union);
}


