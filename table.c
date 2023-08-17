#include<stdio.h>

int main()

{
	int i,n;
	
	printf("\n Enter the number to crate table :");
	scanf("%d",&n);
	
	printf(" ");
	
	for(i=1;i<=10;i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}
	
	return 0;
}


