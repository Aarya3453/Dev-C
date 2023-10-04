#include<stdio.h>
#include<string.h>

int main()

{
	char ch[10];	 
	
	int i;
	
	printf("\n Enter the string : ");
	scanf("%s",ch);
	
	if(strlen(ch)==5)
	{
		printf("\n Enter string is equal to 5 character.");
	}
	
	else
	{
		printf("\n Enter string is not equal to 5 character.\n");
		
		for(i=0;i<5;i++)
	{
		printf("\n %c",ch[i]);
	}
	}
	
	return 0;
}