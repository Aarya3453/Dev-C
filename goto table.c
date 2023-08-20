#include<stdio.h>

int main()

{
	int n,i=1;
	
	printf("\n Enter the number whose table you want to print ? : ");
	scanf("%d",&n);
	
	table:   //lable
	
	printf("\n %d * %d = %d ",n,i,n*i);
	i++;
	if(i<=10)
	
	goto table;
	
	return 0;
}