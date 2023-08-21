#include<stdio.h>

int main()

{
	int n,last,first,sum=0;

	printf("\n Enter the number : ");
	scanf("%d",&n);

	last=n%10;

	while(n>=10)
	{
		n=n/10;
	}

	first=n;

	sum=first+last;

	printf("\n First digit and Last degit sum : %d",sum);

	return 0;
}