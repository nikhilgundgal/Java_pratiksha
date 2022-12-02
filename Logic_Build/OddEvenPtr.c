#include<stdio.h>
#include<stdlib.h>


int DisplayOddEven(int Arr[], int iSize)
{
	int iCnt = 0, iEvencnt = 0;
	
	for(iCnt= 0; iCnt < iSize; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEvencnt++;
		}		
	}	
    printf("Number of even elements are : \n"iEvencnt);
	printf("Number of even elements are : \n"iSize - iEvencnt);
    	
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("ENter the elements : \n");
	
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
		
	}
	
    DisplayOddEven(ptr,iLength);
	
	// Dellocate the memory
	free(ptr);
	return 0; 
}