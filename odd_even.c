//C (Method 1)
#include<stdio.h>
int main ()
{
  int number;
  printf ("Insert a number \n");
  scanf ("%d", &number);

  //Checking if the number is divisible by 2
  if (number % 2 == 0)
    printf ("Even");

  else
    printf ("Odd");
  return 0;
}

// C (Method 2)
// #include<stdio.h>
// int main ()
// {
//     int number;
//     printf ("Insert a number \n");
//     scanf ("%d", &number);
    
//     //Checking if the number is divisible by 2
//     number % 2 == 0? printf ("Even"):printf ("Odd");
    
//     return 0;
// }
// C (Method 3 - using Bitwise Ops)
// #include <stdio.h>

// // Returns true if n is even, else odd
// int isEven(int number)
// {
//     // n & 1 is 1, then odd, else even
//     return (!(number & 1));
// }
 
// // Driver code
// int main()
// {
//     int number;
//     printf("Enter the number: ");
//     scanf("%d",&number);

//     if(isEven(number))
//         printf("Even");
//     else
//         printf("Odd");

//     //isEven(number)? cout << "Even" : cout << "Odd";
 
//     return 0;
// }
