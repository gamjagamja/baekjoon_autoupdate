#include <stdio.h>

int main()
{
    int n, x, y;
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++)
    {
        scanf("%d %d", &x, &y);
        printf("Case #%d: %d + %d = %d\n", i, x, y, x+y);
    }
    return (0);
}