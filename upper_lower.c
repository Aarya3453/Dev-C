#include<stdio.h>

int main()

{
	char ch;
	
	printf("\n Enter ant alphabet :");
	scanf("%c",&ch);
	
	if(ch>='A'&&ch<='Z')
	{
		printf("\n Uppercase");
	}
	
	else if(ch>='a' && ch<='z')
	{
		printf("\n lowercase");
	}
	
	else
	{
		printf("\n not an alaphabet");
	}
	
	return 0;
}
