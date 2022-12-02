

#include<stdio.h>
#include<stdbool.h>




bool CheckPalindrome(int iNo)
{
	int iDigit = 0, iRev = 0;
	int iTemp = 0;
	
	
	for(iRev = 0, iDigit = 0; iNo != 0; iNo = iNo/10) 
    {
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo/10;
		
	}	
    if(iRev == iTemp)
    {
		return true;
	}		
	else
    {
		return false;
	}		
}
int main()
{
	int iValue = 0;
	bool bRet;
	
	
	printf("ENter Number: \n");
	scanf("%d",iValue);
	
	bRet = CheckPalindrome(iValue);
	if(bRet == true)
	{
		printf("%d is palindrome number \n",iValue);
	}	
	else
	{
		printf("%d is not a  palindrome number \n",iValue);
	}	
	
	
	
	return 0;
}