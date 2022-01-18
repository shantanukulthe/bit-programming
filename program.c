#include<stdio.h>
int main()
{
	unsigned int no=178547;
	
	unsigned int imask=0x00008000;
	
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
