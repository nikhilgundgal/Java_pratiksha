#include<stdio.h>
#include<stdlib.h>


BOOL ChkFrequency(int Arr[], int iSize)
{
	int iCnt = 0, iFrequency = 0;
	
	for(iCnt= 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			return TRUE;
		}
        else
        {
			return FALSE;
		}			
	}
	
			
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, i = FALSE, iValue = 0, iRet = 0;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	
	printf("ENter the elements : \n");
	
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
		
	}
	
	printf("Enter the elements which is in the  the list : \n");
	scanf("%d",&iValue);
	
	iRet = ChkFrequency(ptr,iLength, iValue);
	printf("Frequecy of %d is %d\n",iValue,iRet);
	// Dellocate the memory
	free(ptr);
	return 0;
}