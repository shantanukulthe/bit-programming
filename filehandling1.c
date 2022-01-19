/////accept file from user and read first 10 bytes from user

#include<stdio.h>
#include<fcntl.h>

int main()
{
	char arr[20]="hello";
	int iret=0;
	int fd=0;

	

	
	fd=open("hello.txt",O_WRONLY);
	
	if(fd==-1)
	{
		printf("unable to open file");
	}
	
	iret=write(fd,arr,5);
	
	if(iret==-1)
	{
		printf("unable to write file");
		close(fd);
		return -1;
	}	
		
	printf("data sucessfully Written ");
	
	close(fd);
	
	return 0;
}		
