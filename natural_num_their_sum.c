#include<stdio.h>

int main()

{
	int i,n,sum=0;
	
	printf("\n Enter the number :");
	scanf("%d",&n);
	
	printf("\n The first %d number are : ",n);
	
	for(i=1;i<=n;i++)
	{
		printf(" %d ",i);	
		sum+=i;
	}
	
	printf("\n\n The sum of natural numbers upto %d terms : %d\n",n,sum);
	
	return 0;
}
