// Display your  name on Screen


#include<stdio.h>


int main()
{
	char Arr[50];
	printf("Please Enter the name\n");
	scanf("%s",Arr);   /// in C, C++ Array is the base Address so there is no need of &
	// hyat fkt nav display krt karan user kdun sentence ghetlyavr %s asha ast ki me (name  of array is internally consider as base address of array)
	//multiple char gheil pn space cha adhich gheto space cha ntr che ghet nahi
	printf("Your Nameis : %s\n",Arr);
	return 0;
}