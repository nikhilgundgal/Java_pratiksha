// Small case to capital

#include<stdio.h>

char ToUpperX(char ch )
{
	return ch - 32;
}

int main()
{
	char cValue = '\0';
	char cRet = '\0';
	
	printf("Enter the Character \n");
	scanf("%c",&cValue);
	
	cRet = ToUpper(cValue);
	
	printf("Character in the upper case is : %c\n",cRet);
	
	return 0;
}