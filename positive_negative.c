#include <stdio.h>

int main()

{
    int i;
 
    printf("\n Enter the number :");
    scanf("%d", &i);
    
    if (i>=0)
    
    {
        printf("\n %d is a positive number \n",i);
    
	}
	
	else
	{
        printf("\n %d is a negative number \n",i);
	}
	
	return 0;
}

