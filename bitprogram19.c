//accept no from user and optimize the code 

#include<stdio.h>
int main()
{
	int no;
	
	printf("enter the number");
	scanf("%d",&no);
	
	int imask=1;
	
	int iresult=0;
	int icnt=0;
	int ipos=0;
	while(no>0)
	{
		iresult=no & imask;
		
		if(iresult==1)
		{
			icnt++;
			printf("%d",ipos);
			
		}
		ipos++;
		
		no=no>>1;
	}
	
	printf("%d",icnt);	
}	
