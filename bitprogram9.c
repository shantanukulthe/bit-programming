//check wheather 4th is bit and on or off and and on its

#include<stdio.h>
int main()
{
	unsigned long int no=10;
	
	unsigned int imask=0x00000004;
	
	int result= no | imask;
	
	printf("%d",result);
	
	
		
}	
