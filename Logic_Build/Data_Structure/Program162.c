#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	
	struct node *Head *newn = (struct node *)malloc(sizeof(struct node));
	
	newn->data = 11;
	newn->next = NULL;
	
	
	return 0;
}