// Problem Statement
// Write a program to print all numbers between two intervals,
// namely low and high. But, with a special condition that 
// if any number in the range while getting printed becomes 
// divisible by 13 then you must not print anything further and stop.
// (Do this using the Break Statement)

// Example -

// Input -
// 1 10
// Output 
// 1 2 3 4 5 6 7 8 9 10

// Input
// 10 20
// Output
// 10 11 12 13

// Input
// -18 0
// Output
// -18 -17 -16 -15 -14 -13

 
//C (While Loop)
#include  <stdio.h>

int main() {
    
    int low,high;
    printf("Enter the numbers: ");
    scanf("%d %d",&low, &high);
    
    int i = low;
    while(i<=high)
    {
        printf("%d ",i);
        
        if(i%13==0)
            break;
        i++;
    }
    
    return 0;
}

// C(For Loop)
// #include  <stdio.h>

// int main() {
    
//     int low,high;
//     printf("Enter the numbers: ");
//     scanf("%d %d",&low, &high);
    
//     for(int i = low;i<=high;i++){
//         printf("%d ",i);
        
//         if(i%13==0)
//             break;        
//     }
    
//     return 0;
// }