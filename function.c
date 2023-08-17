#include<stdio.h>

void hello();
void namaste();

int main()

{
	hello();
	namaste();
	hello();
	namaste();
	hello();
	
	return 0;
}

void hello()
{
	printf("\n Hello World !");
}

void namaste()
{
	printf("\n Namaste");
}