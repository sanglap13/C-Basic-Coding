#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
    char ch = 'A';
    short int a = -2;
    int b = -3;
    long int c = 2147483649;
    long long int d = 9223372036854775804;
    
    printf("%c\n",ch);
    
    printf("Value of ch(char) : %hd\n",ch);
    printf("Value of a(short) : %hd\n",a);
    printf("Value of b(int) : %d\n",b);
    printf("Value of c(long int) : %ld\n", c);
    printf("Value of d(long long int) : %lld\n\n", d);

    
    // MAX_LIMIT Short is 65535, rule states
    // if you're printing unsigned for negative
    //value the result would be (val) + MAX_LIMIT + 1
    // -2 + 65535 + 1  = 65534
    printf("Value of a(signed short) when used with unsigned short format specifier : %hu\n",a);
    
    
    // -3 + 4,294,967,295 + 1  = 4,294,967,293
    printf("Value of b(int) when used with unsigned int format specifier : %u\n",b);
    
    
    // MAX_Limit (int) is : 2,147,483,647 our number exceeds this by 2. So will go round about
    // to lower limit by 2
    // MIN_LIMIT (int) is -2,147,483,648 so 2nd number in this would be -2,147,483,647
    printf("Value of c(long int) when used with int format specifier : %d\n", c);
    

    return 0;
}