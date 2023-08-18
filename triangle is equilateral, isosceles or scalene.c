#include <stdio.h>

int main()  

{  
    int a,b,c;   
   
    printf("\n Enter the first sides of triangle: ");  
    scanf("%d",&a);  
    
    printf("\n Enter the second sides of triangle: ");  
    scanf("%d",&b);  
  
    printf("\n Enter the third sides of triangle: ");  
    scanf("%d",&c);  
  
    if(a==b && b==c) 
    {  
        printf("\n This is an equilateral triangle.\n");  
    }  
    
    else if(a==b || a==c || b==c)   
    {  
        printf("\n This is an isosceles triangle.\n");  
    }
	  
    else 
    {  
        printf("\n This is a scalene triangle.\n");  
    }  
  
    return 0;  
} 
