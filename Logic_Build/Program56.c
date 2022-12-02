#include<stdio.h>
void DisplayEvenOddDigits(int iNo)
{
	int iDigit = 0;
	int iEvenCnt = 0;
	int iOddCnt = 0;
    
	if(iNo == 0)
    {
		printf("Number of even digits are : \n",iEvencnt);
	    printf("Number of even digits are : \n",iOddcnt);
		return; // ha return nahi takla tar to 2vel return karel atta pan n ntr while cha condtion ntr pan
	}		
	
    while(iNo != 0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iEvenCnt++;
		}	
		else
	    {
			iOddCnt++;
		}		
		
		iNo = iNo / 10;
		
	}	
	printf("Number of even digits are : \n",iEvencnt);
	printf("Number of even digits are : \n",iOddcnt);
}
int main()
{
	int iValue = 0;
	iRet = 0;
	
	printf("ENter Number: \n");
	scanf("%d",iValue);
	
	iRet = DisplayEvenOddDigits(iValue);
	printf("Number of Even digits are : \n",iRet);
	
	
	
	return 0;
}