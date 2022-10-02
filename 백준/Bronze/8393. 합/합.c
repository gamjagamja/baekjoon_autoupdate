#include <stdio.h>

int plus_num(int a) 
{
  if(a < 1)
      return 0;
  return(a + plus_num(a - 1));
}

int main()
{
   int a;
   scanf("%d", &a);
   printf("%d",plus_num(a));
}