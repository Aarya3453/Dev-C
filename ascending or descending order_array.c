#include<stdio.h>
#include<conio.h>

int main()

{
	int a[10],temp,i,j,size;

	printf("\nEnter the array size : ");
	scanf("%d",&size);

	printf("\nEnter the array to be sorted : ");

	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}

	}

	printf("\n\nSorted Array in ascending order : ");
	
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n\nSorted Array in descending order : ");
	
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}

	return 0;

}

/*
#include<stdio.h>
int main()
{
	int a[100],n,j,i,temp=0;
	
	printf("\n enter the array:");
	scanf("%d",&n);
	
	printf("\n enter the array element:\n");
	for(i=0;i<n;i++)
	{
			scanf("%d",&a[i]);	
	}
	
	for(i=0;i<n;i++) //loop for ascending
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n\n ascending order:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
	for(i=0;i<n;i++)  // decsending order
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n descending ordrer:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;	
}*/