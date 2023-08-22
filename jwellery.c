#include <stdio.h>

int main()

{
    int a,choice, qty, total=0, totalamt=0;
    char ch;
    
    printf("\n.....Jwellery shop.....\n");
    
	printf("\n User id :");
    scanf("%d",&a);
    
    do
    {
    Menu:
        printf("\n *****Types of jwellary*****\n");
        printf(" 1.Chain          price = 80000 rs/pcs\n");
        printf(" 2.Ring           price = 25000rs/pcs\n");
        printf(" 3.Beacelet       price = 40000rs/pcs\n");
        printf(" 4.Necklace       price = 60000rs/pcs\n");
        printf("\n Please Enter your choice... :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        { 
            printf("\n You have selected Chain.");
            printf("\n Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {	
                total = 80000 * qty;
            }
            printf("\n Amount : %d", total);
            break;
        }
        case 2:
        {
            printf("\n You have selected Ring.");
            printf("\n Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 25000 * qty;
            }
            printf("\n Amount : %d", total);
            break;
        }
        case 3:
        {
            printf("\n You have selected Bracelet.\n");
            printf("\n Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 40000 * qty;
            }
            printf("\n Amount : %d", total);
            break;
        }
        case 4:
        {
            printf("\n You have selected Necklace.\n");
            printf("\n Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 60000 * qty;
            }
            printf("\n Amount : %d", total);
            break;
        }
        default:
        {
            printf("\n Not exists in jwellary types...");
            printf("\n");
            goto Menu;
            break;
        }
        }

        totalamt += total;
        printf("\n Total amount is = %d \n", totalamt);
        printf("\n Do you want place more orders ? y & n : ");
        scanf("%s", &ch);

    } while (ch != 'n');
   
    if (ch == 'n')
    {
        printf("\n Your Bill");
        printf("\n Total amount is = %d", totalamt);
        printf("\n Thank You...\2");
    }

    return 0;
}