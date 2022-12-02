#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


int main()
{
	char Fname[20];
	int fd = 0;
	char Data[20];
	
	printf("Please enter file name that you want to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);   //O_RDONLY O_WRONLY
	if(fd == -1)
	{
		printf("unable to open the file\n");
		return -1;
		
	}	
	else
	{
		printf("File is sucessfully opened with FD %d\n",fd);
		
	}	
	
	
	read(fd,Data,10);
	printf("Data from file is : %s\n",Data);
	
	close(fd);
	return 0;
	
}
