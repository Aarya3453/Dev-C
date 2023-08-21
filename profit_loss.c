#include<stdio.h>

int main()

{
	float cp,sp,profit,loss;
	
	printf("\n Enter the cost price :");
	scanf("%f",&cp);
	
	
	printf("\n Enter the selling price :");
	scanf("%f",&sp);
	
	if(sp>cp)
	{
		profit=sp-cp;
		
		printf("\n Profit is %.2f rupee",profit);
	}
	
	else
	{
		loss=cp-sp;
		
		printf("\n loss is %.2f rupee",loss);
	}
	
	return 0;
}
