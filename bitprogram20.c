// accept  two number from user and display all common bits are on in it

#include<stdio.h>
int main()
{
	int no1,no2;
	
	printf("enter the number1 \n");
	scanf("%d",&no1);
	
	printf("enter the number2 \n");
	scanf("%d",&no2);
	
	int no=no1 & no2;
	
	int imask=1;
	
	int ipos=1;
	
	while(no!=0)
	{
		int iresult=no & imask;
		
		if(iresult==1)
		{
			printf("%d",ipos);
		}
		ipos++;
		no=no>>1;
	}

	return 0;
}			
	
	
