#include <stdio.h>
#include<stddef.h>
int main() {
   printf("Size of char : %ld\n" ,sizeof(char));
   printf("Size of int : %ld\n"  ,sizeof(int));
   printf("Size of short int : %ld\n" ,sizeof(short int));
   printf("Size of long int : %ld\n" ,sizeof(long int));
   printf("Size of float : %ld\n" ,sizeof(float));
   printf("Size of double : %ld\n" ,sizeof(double));
   printf("Size of wchar_t : %ld\n" ,sizeof(wchar_t));
   return 0;
}

