#include<stdio.h>

int Countsmall(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}	
		str++;
	}	
	return iCnt;
}
int main()
{
	char Arr[10];
	int iRet = 0;
	
	printf("Please Enter String\n ");
	scanf("%[^'\n']s",Arr);
	
	iRet = Countsmall(Arr);
	
	printf("Frequency of small letter is : %d\n",iRet);
	return 0;
}