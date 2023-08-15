#include<stdio.h>

int main()

{
	float h,w,area;
	
	printf("\n Enter height of rectangle :");
	scanf("%f",&h);
	
	printf("\n Enter width of rectangle :");
	scanf("%f",&w);
	
	area=h*w;
	
	printf("\n Area of recangle :%.2f",area);
	
	return 0;
}
