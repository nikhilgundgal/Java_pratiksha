// frequency

#include<stdio.h>

int Countch(Char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == 'a')
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
	
	iRet = Countch(Arr);
	
	printf("Frequency of a is : %d\n",iRet);
	return 0;
}