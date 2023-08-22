#include <stdio.h>

int main()

{
	float kilometers;
    
	printf("\n Enter the kilometers : ");
	scanf("%f", &kilometers);

	float miles = kilometers * 0.621;
	
	printf("\n Kilometers to Miles : %f",miles);
	
	return 0;
}