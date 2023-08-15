#include<stdio.h>

int main()

{
	float area,side;
	
	printf("\n Enter side of square :");
	scanf("%f",&side);
	
	area=side*side;
	
	printf("\n Area of square :%.2f",area);
	
	return 0;
}
