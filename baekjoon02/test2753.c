#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(0 < a && a <= 4000)
    {
    if((a%4 == 0 && a%100 != 0) || a%400 == 0)
        printf("1");
    else
        printf("0");
    }
    else
        printf("0");
}