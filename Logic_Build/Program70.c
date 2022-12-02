#include<stdio.h> //(header file for printf and scanf)
#include<stdlib.h>
 int Summation(int Data[], int iSize)
 {
	int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		iSum = iSum + Data[iCnt];
	}	
   	return iSum;
 }

int main()
{
	int Arr[5];
	int iCnt = 0, iRet = 0;
	printf("ENter the elements :");
	
	//    1         2         3
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d\n",&Arr[iCnt]);  //4
		
	}	
	
	printf("Elements from array are : \n");
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}	
	
	iRet = Summation(Arr,5);
	printf("Addition of all elements is : %d\n",iRet);
	
	return 0;
}
