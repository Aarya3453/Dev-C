#include<stdio.h>
#include<string.h>

int main()

{
	int r,p,c,ca,total;
	float per;
	char nos[20];
	
	printf(" Enter the Rollno : ");
	scanf("%d",&r);
	
	printf(" Enter name of student : ");
	scanf("%s",&nos);
	
	printf("\n Enter the marks in Physics : ");
	scanf("%d",&p);
	
	printf(" Enter the marks in Chemestry : ");
	scanf("%d",&c);
	
	printf(" Enter the marks in Computer app : ");
	scanf("%d",&ca);
	
	total=p+c+ca;
	per=total/3;
	
	printf("\n Total marks : %d",total);
	
	printf("\n Total percantage : %.2f",per);
	
	if(per>80)
	{
		printf("\n Div : A++");
	}
	
	else if(per>70 && per<=80)
	{
		printf("\n Div : A");
	}
	
	else if(per>55 && per<=70)
	{
		printf("\n Div : B");
	}
	
	else if(per>33 && per<=55)
	{
		printf("\n Div : C");
	}
	
	else
	{
		printf("\n Div : E");
	}
	
	printf("\n\n \t---------Student marksheet-----------\t");
	printf("\n\n Rollno : %d",r);
	printf("\t\t Name of student : %s",nos);
	printf("\n\n Marks in physics : %d",p);
	printf("\t Marks in chemestry : %d",c);
	printf("\t Marks in computer app : %d",ca);
	printf("\n\n Total marks : %d",total);
	printf("\t Total percantage : %.2f",per);
	
	return 0;
}