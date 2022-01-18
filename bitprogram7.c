//check wheather 7th and 10th bit is on and if then off that bit  

#include<stdio.h>
int main()
{
	unsigned long int no=6720;
	
	unsigned int imask=0x00000240;
	
	int result= no ^ imask;
	
	printf("%d",result);
	
	
		
}	
