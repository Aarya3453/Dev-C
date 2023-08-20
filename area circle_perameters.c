#include<stdio.h>

float area(int r);

int main()

{
	float area1,r;
	
	printf("\n Enter radius of circle :");
	scanf("%f",&r);
	
	area1=area(int r);
	
	printf("\n Area of circle :%.2f",area1);
	
	return 0;
}

float area(int r)

{
	return 3.14*r*r;
}
