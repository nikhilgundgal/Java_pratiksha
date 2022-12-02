/*
   Row = 4
   Col = 4
   
   1 1 1 1
   2 2 2 2
   3 3 3 3
   4 4 4 4
   
*/   






#include<stdio.h>	
	
	
void Display(int iRow, int iCol)	
{
	int i = 0, j = 0;
	for(j = 1; j <= iRow; j++)
	{
		for(i = 1; i <= iCol; i++)
		{
			printf("%d\t",i);
		}	
		printf("\n");
	}	
	
}



int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter number of rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of Column\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	
  return 0;	
}