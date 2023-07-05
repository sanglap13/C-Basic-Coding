//C (Method 1)
#include <stdio.h>

int main() {
    
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    
    if (age >= 18)
        printf("Vote");
    else
        printf("Can not Vote");

       return 0;
}


// C(Method 2 : Ternary Operator)
// #include <stdio.h>

// int main() {
    
//     int age;
//     printf("Enter your age: ");
//     scanf("%d",&age);
    
//     age >= 18 ? printf("Vote") : printf("Can not Vote");
    
//     return 0;
// }