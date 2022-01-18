//Write a program which accept one number from user and range of
//positions from user. Toggle all bits from that range

#include<stdio.h>
int main()
{
	unsigned int no;
	 int start,end;
	

	printf("enter the number \n");
	scanf("%d",&no);
	
	
	printf("enter the start \n");
	scanf("%d",&start);
	
	printf("enter the end \n");
	scanf("%d",&end);
	
	unsigned int imask1=0xffffffff;
	imask1=imask1<<(start-1);
	
	unsigned int imask2=0xffffffff;
	imask2=imask2>>(32-end);
	
	unsigned int imask=imask1 & imask2;
	
	int iresult=imask ^ no;
	
	printf("%d ",iresult);
	
	
} 
		
	
	
	
