/*
 * settheory.h
 *
 *  Created on: Aug 11, 2023
 *      Author: user
 */
#include<stdio.h>
#include<stdlib.h>
#ifndef SETTHEORY_H_
#define SETTHEORY_H_
struct NODE
{
	int data;
	struct NODE *next;

};
struct NODE *insert_node(struct NODE *,int);
struct NODE *get_union(struct NODE *,struct NODE *);
struct NODE *get_intersection(struct NODE *,struct NODE *);
int compare(struct NODE *head,int n);
void display(struct NODE *);




#endif /* SETTHEORY_H_ */
