#include<stdio.h>

int main()

{
	float area,base,height;
	
	printf("\n Enter base of triangle :");
	scanf("%f",&base);
	
	printf("\n Enter hright of triangle :");
	scanf("%f",&height);
	
	area=0.5*base*height;
	
	printf("\n Area of triangle :%.2f",area);
	
	return 0;
}
