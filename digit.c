#include <stdio.h>

int main()

{
   int i;
   
   printf("\n Enter the digit : ");
   scanf("%d",&i);
   
   switch(i)
   
   {
   	case 0:
		{
	       printf("\n Zero");
	       break;
		}
	
	case 1:
		{
	       printf("\n One");
	       break;
		}
	
	case 2:
		{
	       printf("\n Two");
	       break;
		}
	
	case 3:
		{
	       printf("\n Three");
	       break;
		}
		
	case 4:
		{
	       printf("\n Four");
	       break;
		}
	
	case 5:
		{
	       printf("\n Five");
	       break;
		}
	
	case 6:
		{
	       printf("\n Six");
	       break;
		}
	
	case 7:
		{
	       printf("\n Seven");
	       break;
		}
	
	case 8:
		{
	       printf("\n Eight");
	       break;
		}
	
	case 9:
		{
	       printf("\n Nine");
	       break;
		}
			
	default:
		{
	       printf("\n Invalid your digit");
	       break;
	    }
	}
	
	return 0;
	
}

