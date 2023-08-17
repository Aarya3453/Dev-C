#include<stdio.h>

void Circle();
void Rectangle();
void Triangle();
void Square();

int main()
{
	Circle();
	Rectangle();
    Triangle();
    Square();
	
	return 0;
}

void Circle()
{
	float r,area;
	
	printf("\n Enter the radius of circle :");
	scanf("%f",&r);
	
	area=3.14*r*r;
	printf("\n Area of circle : %.2f\n",area);
}

void Rectangle()
{
	float area,h,w;
	
	printf("\n Enter the height :");
	scanf("%f",&h);
	
	printf("\n Enter the weight :");
	scanf("%f",&w);
	
	area=h*w;
	printf("\n Area of recatangle : %.2f\n",area);			
}

void Triangle()
{
	float area,b,h;
	
	printf("\n Enter the base :");
	scanf("%f",&b);
	
	printf("\n Enter the height :");
	scanf("%f",&h);
	
	area=0.5*b*h;
	printf("\n Area of triangle : %.2f\n",area);
}

void Square()
{
	float s,area;
	
	printf("\n Enter side of square :");
 	scanf("%f",&s);
 	
	area=s*s;
	printf("\n Area of square :%.2f\n",area);
}
