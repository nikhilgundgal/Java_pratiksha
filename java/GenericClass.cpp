#include<iostream>
using namespace std;

class Array
{
	
	public:
	    int *Arr;
		int Size;
		
		Array(int length)
		{
			Size = length;
			Arr = new int[Size];
			
		}
		void Accept()
		{
			cout<<"Enter the values \n";
			for(int i = 0; i < Size; i++)
			{
				cin>>Arr[i];
			}	
		}
	
	
	
}