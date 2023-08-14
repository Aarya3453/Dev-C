#include<stdio.h>

int main()

{
	float a,b;
	int op;
	
	printf("\n Enter the value of A :");
	scanf("%f",&a);
	
	printf("\n Enter the value of B :");
	scanf("%f",&b);
	
	printf("\n 1.Addition +\n 2.Subtraction -\n 3.Multiplication *\n 4.Division /\n 5.Modulo%");
	
	printf("\n\n Enter your choice :");
	scanf("%d",&op);
	
	switch(op)
	
	{
		case 1:
			
			printf("\n Addition of %.2f and %.2f number : %.2f",a,b,(a+b));
			break;
			
		case 2:
			
			printf("\n Subtraction of %.2f and %.2f number : %.2f",a,b,(a-b));
			break;
		
		case 3:
			
			printf("\n Multiplication of %.2f and %.2f number : %.2f",a,b,(a*b));
			break;
		
		case 4:
			
			printf("\n Division of %.2f and %.2f number : %.2f",a,b,(a/b));
			break;
		
		//case 5:
			
		//printf("\n Modulo of %.2f and %.2f number : %.2f",a,b,(a%b));
		//	break;
			
		default:
		
			printf("\n Enter your connect choice.");
			break;	
	}
	
	return 0;
}


