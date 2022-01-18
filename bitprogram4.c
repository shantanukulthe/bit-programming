//check wheather last and first bit is on or not

#include<stdio.h>
int main()
{
	unsigned long int no=10;
	
	unsigned int imask=0x80000001;
	
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
