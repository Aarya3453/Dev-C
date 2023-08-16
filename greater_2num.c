#include<stdio.h>

int main()

{
	int a,b;
	
	printf("\n Enter the first number :");
	scanf("%d",&a);
		
	printf("\n Enter the sencond number :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("\n First number is greater");
	}
	
	else if(a<b)
	{
		printf("\n Sencond number is greater");
	}
	
	else
	{
		printf("\n Both are equal");
	}
	
	return 0;
}
