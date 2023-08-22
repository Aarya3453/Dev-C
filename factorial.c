#include<stdio.h>

int main()

{
	int a=1,n,i;
	
	printf("\n Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	a=a*i;
	
	printf("\n The factorial of %d is: %d\n",n,a);	
		
	return 0;
}
