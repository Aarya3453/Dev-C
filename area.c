#include<stdio.h>

int main()

{
	int op;
	float area,side,r,h,w,b;
	
	printf("\n 1.Circle \n 2.Rectangle \n 3.Triangle \n 4.Square \n");
	
	printf("\n Enter the choice :");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			
			printf("\n Enter the radius of circle :");
			scanf("%f",&r);
			area=3.14*r*r;
			printf("\n Area of circle : %.2f",area);
			break;
		
		case 2:
			
			printf("\n Enter the height :");
			scanf("%f",&h);
			printf("\n Enter the weight :");
			scanf("%f",&w);
			area=h*w;
			printf("\n Area of recatangle : %.2f",area);
			break;
			
		case 3:
			
			printf("\n Enter the base :");
			scanf("%f",&b);
			printf("\n Enter the height :");
			scanf("%f",&h);
			area=0.5*b*h;
			printf("\n Area of triangle : %.2f",area);
			break;
			
		case 4:
		
			printf("\n Enter side of square :");
 			scanf("%f",&side);
			area=side*side;
			printf("\n Area of square :%.2f",area);
			break;
			
		default:
		
			printf("\n Enter your connect choice.");
			break;	
	}
	
	return 0;	
}
