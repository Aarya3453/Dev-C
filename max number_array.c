#include<stdio.h>

int largest(int arr[],int n);

int main()

{
	int arr[]={10,20,30,40,50,60};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("\n Largest is given arr %d",largest(arr,n));
	
	return 0;
}

int largest(int arr[],int n)
{
	int i;
	int max = arr[0];
	
	for(i=1;i<=n;i++)
		if(arr[i]>max)
			max=arr[i];
	
	return max;
}