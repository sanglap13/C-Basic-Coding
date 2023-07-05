#include<stdio.h>
#include<math.h>
void table(int x)
  {
      int i;
      for(i=1;i<=10;i++)
      {
          printf("%d   *   %d  =   %d\n",x,i ,(x*i));
      }
  }


int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    table(n);
    return 0;
}