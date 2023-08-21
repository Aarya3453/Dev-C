#include<stdio.h>

void swap(int,int); //call by value

int main()

{
	int a,b;
	
	printf("\n Enter the value of A and B :");
	scanf("%d%d",&a,&b);
	
//	printf("\n Enter the value of B :");
	//scanf("%d",&b);
	
//	printf("\n Before swapping A = %d and B = %d \n",a,b);
	
	swap(a,b);  //actual
	
	printf("\n  %d %d",a,b);
	
	return 0;
}

void swap(int a,int b) //formal

{
	int c;
	
	c=a;
	a=b;
	b=c;
}
