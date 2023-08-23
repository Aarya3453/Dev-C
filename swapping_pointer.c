#include<stdio.h>

void swap(int*,int*); 

void main( )

{
    int a,b;
    
    printf("\n Enter the value of A : ");
	scanf("%d",&a);
    
	printf("\n Enter the value of B : ");
	scanf("%d",&b);
	
	printf("\n Before swapping A=%d B=%d",a,b);
    
	swap(&a,&b);                                          
    
}
    
void swap(int*a,int*b)                           
{ 
    int c;
    c=*a;
    *a=*b;
    *b=c;
    
    printf("\n After swapping A=%d B=%d",*a,*b);
}
