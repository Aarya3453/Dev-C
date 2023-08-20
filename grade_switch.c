#include<stdio.h>

int main()

{
	char grade;
	
	printf("\n Enter character : ");
	scanf("%c",&grade);
	
	grade = toupper(grade);
	
	switch(grade)
	{
		case 'E':
			printf("\n Excellent");	
			break;
			
		case 'V':
			printf("\n Very good");
			break;
			
		case 'G':
			printf("\n Good");
			break;
		
		case 'A':
			printf("\n Average");
			break;
			
		case 'F':
			printf("\n Fail");
			break;
			
		default:
			printf("\n invalid grade");
	}
		
return 0;
	
}
