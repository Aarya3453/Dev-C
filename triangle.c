#include<stdio.h>

int main()

{
	int a,b,c;
	
	printf("\n Enter the first angle of the triangle : ");
	scanf("%d",&a);
	
	printf("\n Enter the second angle of the triangle : ");
	scanf("%d",&b);
	
	c = 180 - (a + b);
	
	printf("\n Third angle of the triangle :  %d\n",c);  
	
	return 0;
}