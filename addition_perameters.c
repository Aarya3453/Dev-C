#include<stdio.h>

int add(int a,int b);

int main()

{
	int a,b,c;
	
	printf("\n Enter the value of a :");
	scanf("%d",&a);
	
	printf("\n Enter the value of b :");
	scanf("%d",&b);
	
	c=add(a,b);
	
	printf("\n Addition of a & b is :%d",c);
	
	return 0;
}

int add(int a,int b)

{
	return a+b;
}