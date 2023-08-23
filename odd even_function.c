#include<stdio.h>
  
int oddeven(int n)

{   
    return (n & 1);
}

int main()

{
    int n;
	    
    printf("\n Enter tye number : ");
    scanf("%d", &n);

    if(oddeven(n))
    {
        printf("\n The entered number is odd.");
    }

    else
    {
        printf("\n The entered number is even.");
    }

    return 0;
}
