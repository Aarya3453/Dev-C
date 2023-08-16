#include <stdio.h>

int main()

{
   int i, sum=0;
   
   printf("\n Numbers between 100 and 200, divisible by 9 :\n");
   
   for(i=101;i<200;i++)
   {
     if(i%9==0)
     {
       printf(" %d ",i);
       sum+=i;
     }
   }
   
	printf("\n\n The sum : %d \n",sum);

	return 0;
	
}
