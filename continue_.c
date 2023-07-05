// Problem Description
// Write a program to print all numbers between two intervals, 
// namely low and high. But, with a special condition that numbers 
// divisible by 5 must not be printed and skipped. (Do this using continue Statement)

// Sample Input
// 1 10
// Sample Output
// 1 2 3 4 6 7 8 9

// Sample Input
// 10 20
// Sample Output
// 11 12 13 14 16 17 18 19

 

 

//C (For Loop)
#include <stdio.h>

int main() {
    
    int low,high;
    printf("Enter the numbers: ");
    scanf("%d %d",&low, &high);
    
    for(int i = low;i<=high;i++){
        
        if(i%5==0)
            continue;
        
        printf("%d ",i);
    }
    
    return 0;
}

// C (While Loop)
// #include <stdio.h>

// int main() {
    
//     int low,high;
//     printf("Enter the numbers: ");
//     scanf("%d %d",&low, &high);
    
//     int i = low;
//     while(i <= high){
        
//         if(i%5==0){
//             i++;
//             continue;
//         }
//         printf("%d ",i);
//         i++;

//     }
    
//     return 0;
// }