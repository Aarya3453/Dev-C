#include<stdio.h>

int main()

{
	int a[]={10,20,30,40,50};
	
	printf("\n Array : 10, 20, 30, 40, 50\n");
	
	printf("\n Print %d\n",a[2]);
	
	a[4]=60;
	
	printf("\n Modify %d\n",a[4]);
	
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n For loop %d",a[i]);
	}
	
	printf("  \n");
	
	for(i=5;i>=0;i--)
	{
		printf("\n Reverse %d",a[i]);	
	}
	 
	return 0;
}