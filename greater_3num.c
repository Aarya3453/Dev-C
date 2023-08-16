#include<stdio.h>

int main()

{
	int a,b,c;
	
	printf("\n Enter the first number :");
	scanf("%d",&a);
	
	printf("\n Enter the second number :");
	scanf("%d",&b);
	
	printf("\n Enter the third number :");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("\n First number is greater.");
	}
	
	else if(b>a && b>c)
	{
		printf("\n Second number is greater.");
	}
	
	else
	{
		printf("\n Third number is greater.");
	}
	
	return 0;
}
