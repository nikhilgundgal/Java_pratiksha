#include<stdio.h>
int CountDigits(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
    
	if(iNo < 0)   //updator
	{
		iNo = -iNo;
	}	


    while(iNo < 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		iCnt++;
	}	
	return iCnt;
}
int main()
{
	int iValue = 0;
	iRet = 0;
	
	printf("ENter Number: \n");
	scanf("%d",iValue);
	
	iRet = CountDigits(iValue);
	printf("Number of digits are : \n",iRet);
	
	
	
	return 0;
}