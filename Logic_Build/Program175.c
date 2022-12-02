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
    PNODE temp = *First;
	
    newn->data = No;
    newn->next = NULL;    
	
	if(*First == NULL)  // If Linked List is empty
	{
		*First = newn;
	}	
	else            // If Linked List contains atleast one node
	{
		while(temp->next != NULL)
		{
			temp = temp -> next;
		}	
		temp -> next = newn;
	}	
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
void DeleteFirst(PPNODE First)
{
	PNODE temp = *First;
	
	
	if(*First == NULL)
	{
		return;
	}
    else if((*First)-> next == NULL)
    {
		free(*First);
		*First = NULL;
	}	
    else
    {
		*First = (*First)-> next;
		free(temp);
	}		
}
void DeleteLast(PPNODE First)
{
	PNODE temp = *First;
	if(*First == NULL)
	{
		return;
	}
    else if((*First)-> next == NULL)
    {
		free(*First);
		*First = NULL;
	}	
    else 
    {
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
        free(temp -> next)
        temp -> next = NULL;		
	}		
}	
void InsertPos(PPNODE First, int No, int ipos)
{
	int NodeCnt = 0;
	NodeCnt = Count(*First);
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	NodeCnt = Count(*First);
	
	if((ipos < 1) || (ipos > (NodeCnt + 1)))
	{
		printf("Invalid position\n");
		return;
	}	
	if(ipos == 1)
	{
		InsertFirst(First, No);
	}	
	else if(ipos == NodeCnt + 1)
	{
		InsertLast(First, No);
	}	
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = No;
		newn->next = NULL;
		temp = *First;
		for(icnt = 1; icnt < ipos-1,icnt++)
		{
			temp = temp -> next;
		}	
	}	
}
void DeleteAtPos(PPNODE First, int No)
{
	PNODE temp = NULL;
	int icnt = 0, NodeCnt = 0;
	
	NodeCnt = Count(*First);
	if((ipos < 1) || (ipos > NodeCnt)
	{
		printf("Invalid output\n");
		return;
	}	
	
	if(ipos == 1)
	{
		DeleteFirst(First);
	}	
	else if(ipos == NodeCnt)
	{
		DeleteLast(First);
	}	
	else
	{
		temp1 = *First;
		
		for(icnt = 1; icnt < ipos-1; icnt++)
		{
			temp1 = temp->next;
		}	
		temp2 = temp1->next;
		temp1->next = temp2->next;    //temp1->next= temp1->next->next;
		free(temp2);
	}	
	
	
}
int main()
{
    PNODE Head = NULL; 
	int iRet = 0;
    
    InsertFirst(&Head, 51);   //call by addresss   InsertFirst(60,51)
	InsertFirst(&Head, 21);   //call by addresss   InsertFirst(60,21)
	InsertFirst(&Head, 11);   //call by addresss   InsertFirst(60,11)
	
	Display(Head);     // CAll by Value
	
	InsertLast(&Head,101);
	InsertLast(&Head,111);
	InsertLast(&Head,121);
	
    Display(Head);
	
	iRet = Count(Head);
	printf("Number of node are : %d\n",iRet);
	
	InsertPos(&Head, 105,5);   //call by addresss   InsertFirst(60,51)
	Display(Head);
	
	DeleteAtPos(&Head, 5);
	Display(Head);
	
	return 0;
}