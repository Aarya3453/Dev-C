#include <stdio.h>

int main(void) 

{

	int i,max,n,x;
	
	printf("\n Enter the number : ");
	scanf("%d",&n);
	
	max=0;
	
	for(i=1;i<=n;i++)
	{
		printf("\n Enter value %d : ",i);
		scanf("%d",&x);

		if(max < x)
		
		max = x;
	}
	
	printf("\n Maximum number : %d",max);
	
	return 0;
}