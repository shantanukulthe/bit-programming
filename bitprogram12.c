/////search whethear alternative bit is on or not

//10101010101010101010101010101010


#include<stdio.h>
int main()
{
	unsigned long int no=10101010101010;
	unsigned long int no1=1100011000110;
	unsigned int imask=0x55555555;
	
	int result= no & imask;
	
	if (result==imask)
	{
		printf("bits are on");
		
	}
	else
	{
		printf("bits are off");
	}
	
		
}	
