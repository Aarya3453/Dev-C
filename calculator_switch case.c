#include<stdio.h>
int main()
{
	float a,b;
	int op;
	char choice;
	
	printf("\n Enter the number of a : ");
	scanf("%f",&a);
	
	printf("\n Enter the number of b : ");
	scanf("%f",&b);
	
	do
	{
	menu:
		printf("\n 1.addition \n 2.subtraction \n 3.multiplication \n 4.division");	
		
		printf("\n\n enter the choice :");
		scanf("%d",&op);
	
		switch(op)
		{
			case 1:
				printf("\n addition is %.2f and %.2f number : %.2f",a,b,(a+b));
				break;
			
			case 2:
				printf("\n subtraction is %.2f and %.2f number : %.2f",a,b,(a-b));
				break;
			
			case 3:
				printf("\n multiplication is %.2f and %.2f number : %.2f",a,b,(a*b));
				break;
			
			case 4:
				printf("\n division is %.2f and %.2f number : %.2f",a,b,(a/b));
				break;
			
			default:
				printf("error!");
		}
		
		printf("\n Do you want to continue ? y or n:");
		scanf(" %c",&choice);
		
	}
	
	while(choice =='y');
	if(choice =='n');
	{
		printf("\n thank you..");
	}
	
	return 0;
}