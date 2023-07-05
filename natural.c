//Using For Loop
#include <stdio.h>

int main() {
    
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        printf("%d ",i);
    }
    
    return 0;
}

// Using While Loop
// #include <stdio.h>

// int main() {
    
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
    
//     int i = 1;
//     while(i<=num){
//         printf("%d ",i);
//         i++;
//     }
    
//     return 0;
// }

// Using Do - While Loop
// #include <stdio.h>

// int main() {
    
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
    
//     int i = 1;
    
//     do{
//         printf("%d ",i);
//         i++;
//     }while(i<=num);
    
//     return 0;
// }