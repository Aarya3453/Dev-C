#include<stdio.h>

void hello(int n);

int main()

{
	hello(6);
	
	return 0;
}

void hello(int n)
{
	if(n==0)
	{
		return;
	}
	
	printf("\nhello world");
	
	hello(n-1);
}