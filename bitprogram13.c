////accept two position from user and check wheather bin of position is on or not;

#include<stdio.h>
int main()
{
	unsigned int no;
	 int pos1,pos2;
	

	printf("enter the number");
	scanf("%d",&no);
	
	
	printf("enter the position1");
	scanf("%d",&pos1);
	
	

	printf("enter the position2");
	scanf("%d",&pos2);
	
	
	if(((pos1<1)||(pos1>32))&&((pos2<1)||(pos2>32)))
	{
		return -1;
	}
	unsigned int imask1=0x00000001;
	unsigned int imask2=0x00000001;
	
	
	imask1=imask1<<(pos1-1);
	imask2=imask2<<(pos2-1);
	
	 unsigned int imask=0;
	
	imask=imask1 | imask2 ;
	
	 int iresult=imask & no;
	 
	 
	if(iresult==imask)
	{
		printf("bit is on");
	}
	else
	{
		printf("bit is off");
	}	
	
		
}		
