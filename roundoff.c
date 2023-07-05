#include <stdio.h>
#include <math.h>

int main () {
   float val1, val2, val3, val4;

   val1 = 1.5623;
   val2 = 6.32569;


   printf ("value1 - floor  = %f\n",floor(val1));
   printf ("value1 - ceil = %f\n", ceil(val1));
   printf ("value2 - floor = %f\n",floor(val2));
   printf ("value2 - ceil = %f\n", ceil(val2));
   
   return(0);
}