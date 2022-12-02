

#include<stdio.h>

int MaxDigit(int iNo)
{
	int iDigit = 0, iMax = 0;
	int iCnt = 0;
	
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}	
	while(iNo != 0)             
	{
		iDigit = iNo % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
			if(iMax == 9)
			{
				break;
			}	
		}
        iNo = iNo / 10;
        iCnt++;		
	}	
	return iMax,iCnt;  // loop cha aat madhe return kadhich lihaych nahiii
	
}
int main()
{
    int iValue = 0, iRet = 0;
	
	printf("ENter Number: \n");
	scanf("%d",iValue);
	iRet = MaxDigit(iValue);
	printf("Largest digit is : %d\n",iRet);
	return 0;
}	