#include<stdio.h>
#include<stdlib.h>


________ ________(int Arr[], int iSize)
{
	//Logic
	
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, i = 0, iRet = 0;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iLegth);
	
	ptr = (int *)malloc(iLegth * sizeof(int));
	
	printf("ENter the elements : \n");
	
	for(i = 0; i < iLegth; i++)
	{
		scanf("%d",&ptr[i]);
		
	}
	
	______ = ________(ptr, iLegth);
	
	
	free(ptr);
	return 0;
}