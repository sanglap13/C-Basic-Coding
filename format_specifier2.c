#include <stdio.h>
int main()
{
    char ch = 'A';
    int x = 10, y;

    printf("%c\n", ch);
    printf("%d\n", x);
    printf("%i\n", x);
    
    // enter 012 it will assume base 10 thus 12 with %d
    scanf("%d",&x);
    printf("%d\n", x);

    // enter 012 it will check base thus 10 as preceding 0 means octal
    scanf("%i",&y);
    printf("%i\n", y);
    
    // enter 0x12 it will check base thus 18 as preceding 0 means hexadecimal
    scanf("%i",&y);
    printf("%i\n", y);
    
    //%u is for unsinged int which has limits [0, 4,294,967,295]
    // thus - 10 + 4,294,967,295 + 1 = 4,294,967,286
    printf("%u\n", -10);
    printf("%u\n", 10);
    
    float a = 32.19;
    float b = 0.119;
    // will print till 6 decimal points
    printf("%f\n", a);
    // will print in scientific notation
    printf("%e\n", a);
    // will print till 6 decimal points
    printf("%f\n", b);
    // will print in scientific notation
    printf("%e\n", b);
    
    // will print octal equivalent for integer
    printf("%o\n", 69);
    
    // accept 57 here
    scanf("%o",&x);
    // will print 57 here as number was also accepted as an octal
    printf("%o\n",x);
    
    // accept 69 here
    scanf("%o",&x);
    // will print 69 here as 9 is invalid as octal will range from (0-7)
    printf("%o\n",x);
    
    
    char s[] = "PrepInsta";
    printf("%s\n", s);
    
    int w = 10;
    printf("The Memory Address of a: %p\n",(void*)&w);
    
    //Prints % character
    printf("%%\n");
    
    // will print double here
    double z = 1.1;
    scanf("%lf", &z); // input is 12.10
    printf("%lf\n", z);


    return 0;
}