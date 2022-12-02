#include<stdio.h>
#include<stdbool.h>

int main()
{
	char Arr[50];
	printf("Please Enter the name\n");
	//scanf("%s",Arr);   /// in C, C++ Array is the base Address so there is no need of &
	scanf("%[^'\n']s",Arr);  /// 
	printf("Your Nameis : %s\n",Arr);
	return 0;
}