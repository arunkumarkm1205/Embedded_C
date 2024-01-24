/*
 * get_intersection.c
 *
 *  Created on: Aug 12, 2023
 *      Author: user
 */
#include "settheory.h"

struct NODE *get_intersection(struct NODE *head1,struct NODE *head2)
{
	 struct NODE *head_intersection = NULL;
	 while(head1 != NULL)

	 {
		 if(compare(head2,head1->data))
		 {
			 head_intersection = insert_node(head_intersection,head1->data);
		 }
		 head1 = head1->next;
	 }

	 return head_intersection;
}


