#include<stdio.h>

int main()

{
	float i;
	
	printf("\n Height of the person :");
	scanf("%f",&i);
	
	if(i<150.00)
	{
		printf("\n The person is Dwarf.");
	}
	
	else if((i<165.00) && (150.00>=i))
	{
		printf("\n The person is average heighted.");
	}
	
	else if((i<195.00) && (165.00>=i))
	{
		printf("\n The person is average heighted.");
	}
	
	else
	{
		printf("\n The person is taller.");
	}
	
	return 0;
}
