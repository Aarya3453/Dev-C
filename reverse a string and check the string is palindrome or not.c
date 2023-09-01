#include<stdio.h>
#include<string.h>

int main()

{
	int i,n;
	char str[100],rev[100];

	printf("\n Enter the string : ");
	gets(str);
	n=strlen(str);

	printf("\n Reversed string is : ");

	for(i=n-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}

	printf("\n\n-----------------------------------------------------------");

	printf("\n\n Enter the string : ");
	gets(str);
	strcpy(rev,str);
	strrev(rev);

	(strcmp(rev,str)==0) ? printf("\n Palidrome string",str) : printf("\n Not palidrome string",str);

	return 0;
}