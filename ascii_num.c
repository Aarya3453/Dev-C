#include<stdio.h>

int main()
 
{
	char ch;
	
	printf("\n Enter ant alphabet :");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("\n Uppercase");
	}
	
	else if(ch>=97 && ch<=122)
	{
		printf("\n lowercase");
	}
	
	else
	{
		printf("\n not an alaphabet");
	}
	
	return 0;
}
