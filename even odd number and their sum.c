#include<stdio.h>

int main()

{
	int i,n,odd=0,even=0;

	printf("\n Enter the number : ");
	scanf("%d",&n);
	
	printf("\n Even number : ");

	for(i=0;i<=n;i+=2)
	{
		if(i%2==0)
		{
		printf("\n %d",i);
		even++;
		}
	}

	printf("\n\n Odd number : ");
	
	for(i=1;i<=n;i+=2)
	{
		if(i%2==1)
		{
		printf("\n %d",i);
		odd++;
		}
	}

	printf("\n\n The Sum of even Natural Number : %d \n",even);
	printf("\n The Sum of odd Natural Number : %d",odd);

	return 0;
}