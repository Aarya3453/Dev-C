#include<stdio.h>

int main()

{
	int n;
	
	printf("\n Enter the marks :");
	scanf("%d",&n);
	
	if(n>=91)
	{
		printf("\n A1 grade");
	}
	
	else if(n>80 && n<=91)
	{
		printf("\n A2 grade");
	}
	
	else if(n>70 && n<=80)
	{
		printf("\n B1 grade");
	}
	
	else if(n>60 && n<=70)
	{
		printf("\n B2 grade");
	}
	
	else if(n>50 && n<=60)
	{
		printf("\n C1 grade");
	}
	
	else if(n>40 && n<=50)
	{
		printf("\n C2 grade");
	}
	
	else
	{
		printf("\n no such grade");
	}
	
	return 0;
}
