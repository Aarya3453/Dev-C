#include<stdio.h>

int main()

{
	int num,i;
	
	printf("\n Enter the number to find the factors of : ");
	scanf("%d",&num);
	
	printf("\n Factors of %d are : ",num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		printf(" %d ",i);
	}
	
	return 0;
}