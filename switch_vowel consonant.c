#include<stdio.h>

int main()

{
	char ch;
	
	printf("\n Enter the alpabet : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\n %c is vowel.",ch);
			break;
			
		default:
			printf("\n %c is consonant.",ch);	
	}
	
	return 0;
}