#include<stdio.h>

void reverse(char *str);

int main()

{
	char str[]="this is house";
	reverse(str);

	printf("\n");

	return 0;
}

void reverse(char *str)
{
	if(*str!='\0')
	{
			reverse(str+1);
			printf("%c",*str);	
	}

	return 0;

}

