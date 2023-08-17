#include<stdio.h>

void swap();

int main()

{
	swap();
	
	return 0;
}

void swap()

{
	int a,b;
	
	printf("\n Enter the number A : ");
	scanf("%d",&a);
	
	printf("\n Enter the number B : ");
	scanf("%d",&b);
	
	printf("\n Before swaping A = %d and B = %d \n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n After swaping A = %d and B = %d",a,b);
	
}