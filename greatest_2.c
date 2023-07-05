//C Method 1
#include<stdio.h>
int main ()
{
  int num1, num2;
  printf ("Insert two numbers: ");
  scanf ("%d % d", &num1, &num2);

  //Condition to check which of the two numbers is greater
  //it will compare numbers where number 1 is greater
  if (num1 > num2)
    printf ("%d is greatest", num1);

  //where number 2 is greater
  else if (num1 > num1)
    printf ("%d is greatest", num2);

  //for both are equal
  else
    printf ("%d and % d are equal", num1, num2);

  return 0;
}

// C Method 2
// #include<stdio.h>
// int main ()
// {
//     int num1, num2, largest;
//     printf ("Insert two numbers: ");
//     scanf ("%d %d", &num1, &num2);
 
//     if(num1 == num2)
//         printf("Both are Equal\n");
//     else{
//         largest = num1 > num2? num1 : num2;
//         printf("%d is largest",largest);
//     }

//   return 0;
// }