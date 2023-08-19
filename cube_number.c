#include <stdio.h>

int main()

{
    int a,i;
    
    printf("\n Enter the number : ");
    scanf("%d", &a);
    
    for(i=1;i<=a;i++)
    {
	 	printf("\n Number is %d and cube of the %d is : %d \n",i,i, (i*i*i)); 
    }
    
    return 0;
 }

