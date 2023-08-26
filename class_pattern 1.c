#include<stdio.h>

int main()

{
	int i,n,j;
	
	printf("\n Enter the number : ");
	scanf("%d",&n);
	
	printf("  \n");
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}