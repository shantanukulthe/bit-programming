//count no of 1 in the number

#include<stdio.h>
int main()
{
	unsigned int no;

	

	printf("enter the number");
	scanf("%d",&no);
	
	if(no<0)
	{
		no=-no;
	}
	
	unsigned int imask=1;
	int iresult=0;
	int i=0,icnt=0;
	
	for(i=1;i<32;i++)
	{
		iresult=no & imask;
		
		if(iresult==imask)
		{
			icnt++;
		}
		
		imask=imask<<1;
	}
	
	printf("%d",icnt);	
}	
