#include <stdio.h>

int main()

{
    int i,j,n;
    char ch='A';
    
    printf("\n Enter the number : ");
    scanf("%d",&n);
    
    printf(" \n");
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch+j-1);
        }
        printf("\n");
    }
    
    return 0;
}