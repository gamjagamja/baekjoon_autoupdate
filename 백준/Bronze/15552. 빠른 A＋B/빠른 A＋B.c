#include <stdio.h>

int main()
{
   int x, y, n;
    
   scanf("%d", &n);
    while(n > 0)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", x+y);
        n--;
    }
    return 0;
}