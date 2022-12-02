#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)// 1byte cha format ne size release to avoid padding

struct node
{
	
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));  // 1Allocate memory

    newn->data = No;
    newn->next = NULL;    
	if(*First == NULL)  // If Linked List is empty
	{
		*First = newn;
	}	
	else            // If Linked List contains atleast one node
	{
		newn->next = *First;
		*First = newn;
	}	
	
}
void InsertLast(PPNODE First, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));  // 1Allocate memory

    newn->data = No;
    newn->next = NULL;    
	
	if(*First == NULL)  // If Linked List is empty
	{
		*First = newn;
	}	
	else            // If Linked List contains atleast one node
	{
		
	}	
	    
	void Display(PNODE First)
	{
		printf("Elements from the Linked List are : \n");
		
		while(First != NULL)
		{
			printf("| %d |->",First->data);
			First = First-> next;   // its similar to icnt++
			
		}
        printf("NULL \n");		
	}
	
	
}
int main()
{
    PNODE Head = NULL;
    
    InsertFirst(&Head, 51);   //call by addresss   InsertFirst(60,51)
	InsertFirst(&Head, 21);   //call by addresss   InsertFirst(60,21)
	InsertFirst(&Head, 11);   //call by addresss   InsertFirst(60,11)
	
	Display(Head);     // CAll by Value
	
	
	return 0;
}