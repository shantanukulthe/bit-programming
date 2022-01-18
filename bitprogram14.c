////Write a program which accept one number and position from user and off
//that bit. Return modified number


#include<stdio.h>
int main()
{
	unsigned int no;
	 int pos1;
	

	printf("enter the number");
	scanf("%d",&no);
	
	
	printf("enter the position1");
	scanf("%d",&pos1);
	
	
	
	
	if((pos1<1)||(pos1>32))
	{
		return -1;
	}
	
	
	 unsigned int imask=0x00000001;
	
	imask=imask<<(pos1-1);
	
	 int iresult=imask ^ no;
	 
	printf("%d",iresult);	 
	
}
