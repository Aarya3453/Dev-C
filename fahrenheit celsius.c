#include<stdio.h>  

int main()   

{   
	float fahrenheit,celsius;  
                   
	printf("\n Enter the celsius : ");
    scanf("%f",&celsius);  
 
    fahrenheit = ((celsius*9)/5)+32;  
 
   	printf("\n Temperature in fahrenheit : %f",fahrenheit);  
 
    return 0; 
}  