#include<stdio.h>




int MinDigit(int iNo)
{
	int iDigit = 0, iMin = 9;
	int iCnt = 0;
	
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}	
	while(iNo != 0)             
	{
		iDigit = iNo % 10;
		if(iDigit > iMin)
		{
			iMin = iDigit;
		}
        iNo = iNo / 10;
        iCnt++;		
	}	
	return iMin,iCnt;  // loop cha aat madhe return kadhich lihaych nahiii
	
}
int main()
{
    int iValue = 0, iRet = 0;
	
	printf("ENter Number: \n");
	scanf("%d",iValue);
	iRet = MinDigit(iValue);
	printf("Largest digit is : %d\n",iRet);
	return 0;
}	