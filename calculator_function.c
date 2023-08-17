#include<stdio.h>

void add();
void sub();
void mul();
void div();

int main()
{
	add();
	sub();
	mul();
	div();
	
	return 0;
}

void add()
{
	float a,b,c;
	
	printf("\n Enter the value of A :");
	scanf("%f",&a);
	
	printf("\n Enter the value of B :");
	scanf("%f",&b);
	
	printf("\n Addition of %.2f and %.2f number : %.2f\n",a,b,(a+b));
} 

void sub()
{
	float a,b,c;
	
	printf("\n Enter the value of A :");
	scanf("%f",&a);
	
	printf("\n Enter the value of B :");
	scanf("%f",&b);
	
	printf("\n Subtraction of %.2f and %.2f number : %.2f\n",a,b,(a-b));
} 

void mul()
{
	float a,b,c;
	
	printf("\n Enter the value of A :");
	scanf("%f",&a);
	
	printf("\n Enter the value of B :");
	scanf("%f",&b);
	
	printf("\n Multipliction of %.2f and %.2f number : %.2f\n",a,b,(a*b));
} 

void div()
{
	float a,b,c;
	
	printf("\n Enter the value of A :");
	scanf("%f",&a);
	
	printf("\n Enter the value of B :");
	scanf("%f",&b);
	
	printf("\n Division of %.2f and %.2f number : %.2f\n",a,b,(a/b));
} 