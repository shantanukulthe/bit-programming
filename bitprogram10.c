////accept number and position from user and check wheather bit is on or off


#include<stdio.h>
int main()
{
	unsigned int no;
	 int pos;
	

	printf("enter the number");
	scanf("%d",&no);
	
	
	printf("enter the position");
	scanf("%d",&pos);
	
	if((pos<1)||(pos>32))
	{
		return -1;
	}
	unsigned int imask=0x00000001;
	
	imask=0x00000001<<pos;
	
	 int iresult=imask & no;
	
	if(iresult!=imask)
	{
		printf("bit is on");
	}
	else
	{
		printf("bit is off");
	}	
	
		
}	
