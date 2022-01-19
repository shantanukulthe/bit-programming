//// accept file name from user and open the file 

#include<stdio.h>
#include<fcntl.h>

int main()
{
	char name[200];
	int fd=0;
	
	printf("enter file name");
	scanf("%s",name);
	
	fd=open(name,'O_RD only');
	
	if(fd==-1)
	{
		printf("unable to open file");
	}
	
	
	printf("file is sucessfull opened with fd %d",fd);
	
	close(fd);
	
	return 0;
}	 	
