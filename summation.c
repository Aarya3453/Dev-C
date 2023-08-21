#include<stdio.h>

int main()

{
	int n,sum=0;
	
	printf("\n Enter the number:");
	scanf("%d",&n);

	while(n!=0)
	{
		sum += n%10;
		n   =  n/10;
	}

	printf("\n Sum of given number : %d\n",sum);

	return 0;
}