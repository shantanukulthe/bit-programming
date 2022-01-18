//check wheather first 7,8,9 bit is on or not

#include<stdio.h>
int main()
{
	unsigned long int no=968;
	
	unsigned int imask=0x000002c0;
	
	int iresult =imask & no;
	
	if(iresult==imask)
	{
		printf("bit is on");
	}
	else
	{
		printf("bit is off");	
	}
		
}	
