#include <stdio.h>

int main()

{       
    int i,n,sum=0;
	float avg;

	printf("\n Enter the 10 numbers : \n");

	for (i=1;i<=10;i++)
	{
                printf("\n Number %d :",i);

		scanf(" %d",&n);
		sum +=n;
	}

	avg=sum/10.0;

	printf("\n The sum of 10 number is : %d\n\n The Average is : %.2f\n",sum,avg);
 
 	return 0;
 	
}
