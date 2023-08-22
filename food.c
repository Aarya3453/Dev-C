#include <stdio.h>

int main()

{
    int a,choice, qty, total=0, totalamt=0;
    char ch;
    
    printf("\n.....Food shop.....\n");
    
	printf("\n User id :");
    scanf("%d",&a);
    
    do
    {
    Menu:
        printf("\n *****Types of food*****\n");
        printf(" 1.Veg.Burger        price = 30 rs/pcs\n");
        printf(" 2.Pizza             price = 60rs/pcs\n");
        printf(" 3.Coffee            price = 25rs/pcs\n");
        printf(" 4.French Fries      price = 50rs/pcs\n");
        printf("\n Please Enter your choice... :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        { 
            printf("\n You have selected Veg.Burger.");
            printf("\n Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {	
                total = 30 * qty;
            }
            printf("\n Amount : %d", total);
            break;
        }
        case 2:
        {
            printf("\n You have selected Pizza.");
            printf("\n Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 60 * qty;
            }
            printf("\n Amount : %d", total);
            break;
        }
        case 3:
        {
            printf("\n You have selected Coffee.\n");
            printf("\n Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 25 * qty;
            }
            printf("\n Amount : %d", total);
            break;
        }
        case 4:
        {
            printf("\n You have selected French Fries.\n");
            printf("\n Enter the quantity : ");
            scanf("%d", &qty);
            for (int i = 1; i <= qty; i++)
            {
                total = 50 * qty;
            }
            printf("\n Amount : %d", total);
            break;
        }
        default:
        {
            printf("\n Not exists in food types...");
            printf("\n");
            goto Menu;
            break;
        }
        }

        totalamt += total;
        printf("\n Total amount is = %d rs.\n", totalamt);
        printf("\n Do you want place more orders ? y & n : ");
        scanf("%s", &ch);

    } while (ch != 'n');
   
    if (ch == 'n')
    {
        printf("\n Your Bill");
        printf("\n Total amount is = %d rs.\n", totalamt);
        printf("\n Thank You...");
    }

    return 0;
}