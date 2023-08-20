#include<stdio.h>

int main()

{
	char ch;
	
	printf("\n Enter the character :");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("\n The character is an alpabet.");
	}	
	
	else if(ch>='0' && ch<='9')
	{
		printf("\n The character is a digit.");
	}
	
	else
	{
		printf("\n The character is a special character.");
	}
		
	return 0;
}
