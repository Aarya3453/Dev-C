#include<stdio.h>

int main()

{
	int n;
	
	printf("\n Enter the number :");
	scanf("%d",&n);
	
	(n%2==0) ? printf("\n Even number") : printf("\n Odd number");
	
	return 0;
}
