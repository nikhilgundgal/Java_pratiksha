//check whether plindrome or not with two fnction




int Reverse(int iNo)
{
	int iDigit = 0, iRev = 0;
	int iTemp = 0;
	
	
	while(iNo != 0)
    {
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo/10;
		
	}	
    return iRev;
}
bool CheckPalindrome(int iData)
{
	int iReverse = 0;
	iReverse = Reverse(iData);
	return (iReverse == iData);
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