#include <stdio.h>

int main()
{
  int num[10];
  int rest[10];
  int j = 0;
  int count = 0;
 
    
    for(int i = 0; i < 10; i++)
    {
       scanf("%d", &num[i]);
        if(num[i] <0 || num[i] > 1000)
            break;
       rest[i] = num[i] % 42;
    }
    for(int i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(rest[i] == rest[j])
            {
                count++;
                j = 10;
            }
        }
    }
        printf("%d\n", 10 - count);
}