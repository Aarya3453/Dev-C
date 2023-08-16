#include<stdio.h>

int main()

{
	int n;
	
	printf("\n Enter the number :");
	scanf("%d",&n);
	
	if(n%11==0)
	{
		printf("\n Divisble by 11");
	}
	
	else
	{
		printf("\n Divisble not by 11");
	}
	
	return 0;
}
