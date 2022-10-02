#include <stdio.h>
//킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
int main()
{
    int k, q, l, b, n, p;
    scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &n, &p);
    printf("%d %d %d %d %d %d", 1 - k , 1 - q, 2 - l, 2 - b, 2 - n, 8 - p);
}