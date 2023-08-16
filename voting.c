#include<stdio.h>

int main()

{
	int age;
	
	printf("\n Enter the age :");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("\n You can drive");
	}
	
	else
	{
		printf("\n You can't drive");
	}
	
	return 0;
}
