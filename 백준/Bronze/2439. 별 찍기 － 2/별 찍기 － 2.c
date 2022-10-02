#include <stdio.h>

int main()
{
    int star_n, i,j;
    scanf("%d", &star_n);
    for(i = 1; i <= star_n; i++)
    {
        for(j = 1; j <= star_n - i; j++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}