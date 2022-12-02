//Ascii table


#include<stdio.h>

int main()
{
	int i = 0;
	printf("\n________________________________________________\n");
	printf("ASCII table\n");
	printf("\n________________________________________________\n");
	
	printf("character\t Decimal\t Hex\t octal");
	
	
	for(i = 0; i <= 127; i++)
	{
		printf("%c\t %d\t %x\t %o\n",i,i,i,i);
	}	
	
	printf("\n________________________________________________\n");
	
	return 0;
}