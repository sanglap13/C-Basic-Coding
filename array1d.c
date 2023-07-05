#include<stdio.h>

int main (){
    //Initialize array
    int n,i;
    
    printf("Enter the length of the array\n"); 
    scanf("%d",&n);

    int arr[n];
    printf("Enter the Elements of the array\n");
    
    for( i = 0;i<n;i++) 
    scanf("%d",&arr[i]);
        
    printf("Elements of given array: \n");
    //Loop through the array by incrementing value of i
    for (i = 0; i < n; i++)
        printf("%d\t",arr[i]);

    return 0;
}
