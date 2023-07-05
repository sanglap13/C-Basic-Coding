#include<stdio.h>
int main() {
    double Pi = 3.141592653589793238;
 
    //%[flags][width][.precision][length]specifier
    
    //printf("|%-lf|\n", Pi);
    printf("|%lf|\n", Pi);
    printf("|%30lf|\n", Pi); // width 30 right justification
    printf("|%-30lf|\n", Pi); //width 30 left justification
    printf("|%30.10f|\n", Pi);
    printf("|%030.10f|\n", Pi);
    /*width 30 precision 10 right justification. Filling blank space with '0' */
    printf("|%-6.3f|\n", Pi);
    printf("|%-0.15f|\n", Pi);
    printf("|%-030.15f|\n", Pi);
    
    
    //Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers.
    //By default, only negative numbers are preceded with a -ve sign.
    printf("|%+-lf|\n", Pi);
    
    
    //(space) If no sign is going to be written, a blank space is inserted before the value
    printf("|% -lf|\n", Pi);
    
    
    // printing in octal 12 in decimal is 14 in octal
    printf("|%o|\n", 12);
    // Making octal precision as 014
    printf("|%#o|\n", 12);
    // Making hexadecimal precision as ox preceding c
    printf("|%#x|\n", 12);

    
    return 0;
}