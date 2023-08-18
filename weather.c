#include<stdio.h>

int main()

{
	int i;
	
	printf("\n Enter the temprature : ");
	scanf("%d",&i);
	
	if(i<0)
	{
		printf("\n Weather is freezing.");
	}
	
	else if (i>=1 && i<=20)
	{
		printf("\n Weather is cold.");
	}
	
	else if(i>=21 && i<=40)
	{
		printf("\n Weather is medium.");
	}
	
	else
	{
		printf("\n Weather is very hot.");
	}
	
	return 0;
}
