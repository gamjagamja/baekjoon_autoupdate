#include <stdio.h>

int main()
{
   int n, std, a;
   scanf("%d %d", &n, &std);
       for(int i = 1; i <= n; i++)
       {
           scanf("%d", &a);
           
           if(a < std)
               printf("%d ", a);
       }
}