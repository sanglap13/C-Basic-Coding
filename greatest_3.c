//C (Method 1)
#include<stdio.h>
int main ()
{
    int first, second, third;
    printf("Enter first number:");
    scanf("%d",&first);
    printf("Enter second number:");
    scanf("%d",&second);
    printf("Enter third number:");
    scanf("%d",&third);
    //comparing first with other numbers
    if ((first >= second) && (first >= third))
        printf(" %d is the greatest ", first);
    //comparing Second with other numbers
    else if ((second >= first) && (second >= third))
         printf(" %d is the greatest ", second);
    else
         printf(" %d is the greatest ", third);    return 0;
}
 
// C (Method 2)
// #include<stdio.h>
// int main ()
// {
//     int first, second, third;
//     printf("Enter first number:");
//     scanf("%d",&first);
    
//     printf("Enter second number:");
//     scanf("%d",&second);
    
//     printf("Enter third number:");
//     scanf("%d",&third);
    
//     int temp, result;    // find the largest bw first and second and store in temp
//     temp = first > second ? first:second;
    
//     // find the largest bw temp and third and finally printing it
//     result = temp > third ? temp:third;    
    
//     // the above two ternary statements can be condensed into one ternary statement
//     result = third > (first > second ? first : second) ? third : ((first > second) ? first : second);
    
//     printf(" %d is the largest", result);
//     return 0;
// }