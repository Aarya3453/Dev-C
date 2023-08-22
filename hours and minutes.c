#include <stdio.h>

int main()

{
	int min, hrs;
   
    printf("\n Enter minutes : ");
    scanf("%d",&min);
   
    hrs=min/60;
    min=min%60;
    
    printf("\n %d Hours , %d Minutes",hrs,min);
   
    return 0;
}