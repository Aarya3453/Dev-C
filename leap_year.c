#include<stdio.h>

int main()

{
	int i;
	
	printf("\n Enter the year :");
	scanf("%d",&i);
	
	if(i%4==0)
	{
		printf("\n Enter the year is leap year.");
	}
	
	else
	{
		printf("\n Enter the year is not leap year.");
	}

	return 0;
}
