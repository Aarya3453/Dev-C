#include <stdio.h>

int main()

{
   int i,n,sum=0;

   printf("\n Enter the number : ");
   scanf("%d",&n);
  
   printf("\n The even numbers are :");
  
   for(i=1;i<=n;i++)
   {
     printf(" %d ",2*i);
     sum+=2*i;
   }
  
   printf("\n\n The Sum of even Natural Number upto %d terms : %d \n",n,sum);

	return 0;
} 
