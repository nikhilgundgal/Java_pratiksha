//Accept no from uuser and count digit of that number
// Input: 751,  Output : 3

#include<stdio.h>
int CountDigits(int iNo)
{
	iSum = 0
	iDigit = 0;
    while(iNo !=0)
	{
		iDigit = iNo %10;
		iSum = isum + iDigit;
		
		return 
	}	
	
	
	
	return 0;
}
int main()
{
	int iValue = 0;
	iRet = 0;
	
	printf("ENter Number: \n");
	scanf("%d",&iValue);
	
	iRet = CountDigits(iValue);
	printf("Number of digits are : \n",iRet);
	
	
	
	return 0;
}