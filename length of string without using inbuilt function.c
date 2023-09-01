#include <stdio.h>

int main()

{
	char s[100];
	int i;

	printf("\n Enter a string : ");
	scanf("%s",s);

	for(i = 0; s[i] != '\0'; ++i);

	printf("\n Length of string : %d", i);
	
	return 0;
}*/