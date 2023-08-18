#include<stdio.h>

int main()

{
	char ch;
	
	printf("\n Enter the alpabet :");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch=='U')
	{
		printf("\n The alpabet is vowel.");		
	} 
	
	else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("\n The alpabet is consonant.");
	}	
	
	else
	{
		printf("\n The character is not alphabet.");
	}
	
	return 0;

}
