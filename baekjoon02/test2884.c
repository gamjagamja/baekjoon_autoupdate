#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int h = 0, m = 0;

    scanf("%d %d", &h, &m);
    if (m - 45 < 0)
    {
        if (h - 1 >= 0)
            printf("%d %d", h - 1, m + 15);
        else
            printf("%d %d", 23, m + 15);
    }
    else
        printf("%d %d", h, m - 45);
    return 0;
}
