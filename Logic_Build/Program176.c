#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;   //X
	
	if(*First = NULL)
	{
		*First = newn;
	}	
	else
	{
		
	}	
}
void InsertLast(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = *First;
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;   //X
	
	if(*First = NULL)
	{
		*First = newn;
	}
    else
	{		
	    while(temp->next == NULL)
	    {
		    temp = temp->next;
        }	
		temp->next = newn;
		newn->prev = temp;
}
void Display(PNODE First)
{
	printf("Elements of Linked List are\n");
	
	while(First != NULL)
	{
		printf("| %d |-> ",First->data);
		First = First->next;
	}	
	printf("NULL \n");
}
int Count(PNODE First)
{
	int iCnt =;
	
	while(First != NULL)
	{
		iCnt++;
		First = First->next;
		
	}	
	return iCnt;
}
int main()
{
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertFirst(&Head,51);
	Display(Head);
	
	InsertFirst(&Head,21);
	Display(Head);
	
	InsertFirst(&Head,11);
	Display(Head);
	
	InsertLast(&Head,101);
	Display(Head);
	
	InsertLast(&Head,101);
	Display(Head);
	
	InsertLast(&Head,101);
	Display(Head);
	
	iRet = Count(Head);
	
	printf("Number of elements are : %d\n",iRet);
	return 0;
}