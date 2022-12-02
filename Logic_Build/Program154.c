// count voidSpaces in the sentence



#include<stdio.h>

int CountSpace(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == ' ')  // single cot mdge sppace dyaychii
	    {
			iCnt++;
		}	
		str++;
	}
	return iCnt;


	
}

int main()
{
	char Arr[20];
	int iRet = 0;
	printf("Please enter the strings\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSpace(Arr);  
	
	printf("String after conversion is : %s\n",iRet);
	
	return 0;
}
