///Write a program which accept one number , two positions from user and
//check whether bit at first or bit at second position is ON or OFF.

#include<stdio.h>
int main()
{
	unsigned int no;
	 int pos1,pos2;
	

	printf("enter the number \n");
	scanf("%d",&no);
	
	
	printf("enter the position1 \n");
	scanf("%d",&pos1);
	
	printf("enter the position2 \n");
	scanf("%d",&pos2);
	
	
	
	if((pos1<1)||(pos1>32))
	{
		return -1;
	}
	
	
	 unsigned int imask1=0x00000001;
	 
	 unsigned int imask2=0x00000001;
	imask1=imask1<<(pos1-1);
	
	int iresult1=no & imask1;
	
	imask2=imask2<<(pos2-1);
	
	int iresult2=no & imask2;
	
	//unsigned int imask=imask1 | imask2;
	
	// int iresult=imask & no;
	
	if((iresult1==imask1)||(iresult2==imask2))
	{
	    printf("bit is on");
	}
	else
	{
		printf("bit is off");
	}		 
	
}
