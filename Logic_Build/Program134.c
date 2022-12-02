// Accept th string from user


#include<stdio.h>

int strlenX(char *str)
{
	int iCnt = 0;
	while(*str != '\0')   // joparynt str jyala point krte tyacha pointt krn sampat nhi tovr
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	printf("Please Enter String\n");
	scanf("%[^'\n']s",Arr);  
	
	iRet = strlenX(Arr);
	
	printf("Number of character are %d\n",iRet);
	
	return 0;
}