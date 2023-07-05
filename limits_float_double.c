#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {
// Read more about %f, %g, %e here -
// https://prepinsta.com/all-about-c-language/format-specifiers-in-c/difference-between-e-f-and-g/
// read more : https://en.cppreference.com/w/c/types/limits

    printf("Storage size for float : %d \n", sizeof(float));
    printf("Storage size for double : %d \n", sizeof(double));
    printf("Storage size for long double : %d \n\n\n", sizeof(long double));
    
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n\n\n", (float) -FLT_MIN);
    
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("-DBL_MIN     :  %g\n\n\n", (double) -DBL_MIN);
    
    printf("LDBL_MAX     :   %g\n", (double) LDBL_MAX);
    printf("LDBL_MIN     :   %g\n", (double) LDBL_MIN);
    printf("-LDBL_MAX     :  %g\n", (double) -LDBL_MAX);
    printf("-LDBL_MIN     :  %g\n\n\n", (double) -LDBL_MIN);

    printf("Precision value: %d\n", FLT_DIG );
    printf("Precision value: %d\n", DBL_DIG );
    printf("Precision value: %d\n", LDBL_DIG );

    return 0;
}