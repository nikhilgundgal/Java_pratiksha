

#include<stdio.h>

void strcpySmlX(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{	
		    *dest = *src + 32;
		}
		else
		{
			*dest = *src;
		}	
		
		src++;
		dest++;
	}	
	*dest = '\0';
	
	
	
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	
	printf("Please enter string\n");
	scanf("%[^'\n']s",Arr);
	strcpySmlX(Arr,Brr);
	
	printf("Copied string is : %s\n",Brr);
	
	return 0;
}