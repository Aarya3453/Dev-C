#include<stdio.h>

int main()

{
	int p,r,n;
	float si;
	
	printf("\n Enter Principle :");
	scanf("%d",&p);
	
	printf("\n Enter rate of interest :");
	scanf("%d",&r);
	
	printf("\n Enter time :");
	scanf("%d",&n);
	
	si=p*r*n/100;
	
	printf("\n Simple interest :%.2f",si);
	
	
	return 0;
}
