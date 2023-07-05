#include<stdio.h>
#include<math.h>
double SquareRoot(int x)
{
    double sq;
    sq=sqrt(x);
    return sq;
}
double CubeRoot(int x)
{
    double cr;
    cr=cbrt(x);
    return cr;
}

int main()
{
    printf("%f\n", SquareRoot(52));
    printf("%f\n", CubeRoot(8));
    return 0;
}
