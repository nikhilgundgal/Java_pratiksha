#include<stdio.h>
#include<stdbool.h>

bool Char(char *str, char ch)
{
	bool bFlag = false;
	while(*str != '\0')
	{
		if(*str == 'ch') 
		{
			
			break;
		}	
		str++;
	}	
	return bFlag;
}
int main()
{
	char Arr[20];
	bool bRet = 0;
	char cValue = '\0';
	
	printf("Please Enter String\n ");
	scanf("%[^'\n']s",Arr);    ///input buffer mhnje ethe 

    printf("please enter character\n");
	scanf(" %c",&cValue);// hya scanf cha %c cha adhi space takaychi ki inptbuffered problem yet nahi 
	
	
	bRet = Check(Arr,'cValue');
	if(bRet == true)
	{
		printf("Character is present in the string\n");
	}	
	else
	{
		printf("Character is ");
	}	
	return 0;
}