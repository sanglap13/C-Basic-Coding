#include <stdio.h>
int main()
{
    int option;
    printf("Enter your choice: ");
    scanf("%d",&option);
    
    switch (option)
   {
        case 1: printf("Option 1 Selected");
            break;
        case 2: printf("Option 2 Selected");
            break;
        case 3: printf("Option 3 Selected");
            break;       
        case 4: printf("Option 4 Selected");
            break;
        default: printf("Invalid");
            break;
   }
   return 0;
}