#include <stdio.h>

int main()
{
    int a,b,c;
    
    scanf("%d", &c);
    while(c > 0)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        c--;
    }
}