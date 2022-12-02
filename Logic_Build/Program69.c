

#include<stdio.h> //(header file for printf and scanf)
#include<stdlib.h>
 


int main()
{
	int Arr[5];
	int iCnt = 0;
	printf("ENter the elements :");
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d\n",&Arr[iCnt]);
		
	}	
	
	printf("Elements from array are : \n");
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}	
	
	return 0;
}
