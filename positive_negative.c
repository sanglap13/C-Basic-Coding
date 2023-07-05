//C (Method 0)
#include<stdio.h>
int main()
{
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
    
    //Conditions to check if the number is negative or positive
    if (num > 0)
         printf("The number is positive");
    else if (num < 0)
        printf("The number is negative");
    else
        printf("Zero");
    
    return 0;
}

// C (Method 1)
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Insert a number: ");
//     scanf("%d", &num);
    
//     //Condition to check if the number is negative or positive or zero
//     if (num >= 0)
//     {
//         if (num == 0)
//             printf("The number is 0.");
//         else
//             printf("The number is Positive");
//     }
//     else
//         printf("The number is positive");
    
//     return 0;
// }
// C (Method 2)
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Insert a number: ");
//     scanf("%d", &num);
    
//     //Condition to check if the 0, positive or negative
    
//     if(num == 0)
//         printf("Zero");
//     else
//         (num > 0) ? printf("Positive"): printf("Negative");
    
//     return 0;
// }