/////accept file from user and read first 10 bytes from user


#include<stdio.h>
#include<fcntl.h>
int main()
{
	char arr[20];
	int iret=0;
	int fd=0;
	char name[20];
	
	printf("enter the name of file");
	scanf("%s",name);
	
	
	fd=open(name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("unable to open file");
	}
	
	iret=read(fd,arr,5);
	
	if(iret<=0)
	{
		printf("unable to read file");
		close(fd);
		return -1;
	}	
		
	printf("data is %s",arr);
	
	close(fd);
	
	return 0;
}	
