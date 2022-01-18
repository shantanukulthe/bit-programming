/*5. Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits*/

#include<stdio.h>
int main()
{
	unsigned long int no=15;
	
	unsigned int imask=0x00000009;
	
	int result= no ^ imask;
	
	printf("%d",result);
	
	
		
}	
