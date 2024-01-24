/*
 * get_union.c
 *
 *  Created on: Aug 12, 2023
 *      Author: user
 */
#include "settheory.h"

struct NODE *get_union(struct NODE *head1, struct NODE *head2)
{
	 struct NODE *head_union = NULL;
	 while(head1 != NULL)

	 {

	     head_union = insert_node(head_union,head1->data);
		 head1 = head1->next;
	 }
       while(head2 !=NULL)
       {
    	   if(!compare(head_union,head2->data))
    	   {
    		   head_union = insert_node(head_union,head2->data);
       }
	 head2 = head2->next;
      }
    return head_union;
  }


