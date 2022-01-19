#include<stdio.h>
#include<fcntl.h>

int main()
{
	char name[20];
	int fd=0;
	char arr[20];
	int iret=0;
	
	printf("enter the file name");
	scanf("%s",name);
	
	fd=open(name,O_RDONLY);
	
	if(fd==-1)
	{
		printf("unable to open file");
		return -1;
	}	
	
	iret=read(fd,arr,5);
	
	if(iret==-1)
	{
		printf("unable to open");
		
		close(fd);
		
		return -1;
	}
	
		
	printf("data i %s",arr);
	
	close(fd);
	
	return 0;
}	
