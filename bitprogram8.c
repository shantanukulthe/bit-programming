//check wheather 7th is bit and on or off and toggle it

#include<stdio.h>
int main()
{
	unsigned long int no=10;
	
	unsigned int imask=0x00000001;
	
	int result= no ^ imask;
	
	printf("%d",result);
	
	
		
}	
