#include<stdio.h>

int sumofrange(int n);

int main()

{
	int n,sum;
	
	printf("\n Enter the last number of the range starting from 1 : ");
	scanf("%d",&n);
	
	sum = sumofrange(n);
    printf("\n The sum of numbers from 1 to %d : %d",n,sum);
	
	return 0;
}

int sumofrange(int n)
{
	int range;
	
	if(n == 1)
	{
		return (1);
	}
	
	else
	{
		range = n + sumofrange(n-1);
	}
	
	return (range);
}
