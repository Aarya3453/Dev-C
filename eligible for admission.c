#include<stdio.h>

int main()

{
	int m,p,c,total,mp;
	
	printf(" Eligibility Criteria :\n");
    printf(" Marks in Maths >=65\n");
    printf(" Marks in Phy >=55\n");
    printf(" Marks in Chem>=50\n");
    printf(" Total in all three subject >=190\n");
    printf(" or Total in Maths and Physics >=140\n");
    printf("-------------------------------------\n");
    
    printf(" Enter the marks of Mathematics : ");
    scanf("%d",&m);
    
	printf(" Enter the marks of Physics : ");
    scanf("%d",&p);
    
    printf(" Enter the marks of Chemistry : ");
    scanf("%d",&c);
    
	printf("\n Total mark in three subject : %d",(m+p+c));
	
	printf("\n total math and phy subject : %d\n",(m+p));
	
	{
		(m>=65 && p>=55 && c>=50 && m+p+c >=190 || m+p >=140) ? printf("\n Eligible for admission.") :  printf("\n Not eligible for admission.");
	}

	return 0;
}