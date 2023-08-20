#include <stdio.h> 

int main()

{
    int days,years,weeks;
    
    printf("\n*****Days into Years*****\n");

    printf("\n Enter the day : ");
    scanf("%d",&days);

    years = days/365; 
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));

    printf("\n Years: %d",years);
    printf("\n Weeks: %d",weeks);
    printf("\n Days: %d\n",days);
    
    printf("\n*****Years into Days*****");

	printf("\n\n Enter the years : ");
	scanf("%d",&years);
	
	days = 365*years;
	printf("\n Days: %d ",days);
	
	return 0;
}
	

