/*
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다.
O는 문제를 맞은 것이고, X는 문제를 틀린 것이다.
문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다.
예를 들어, 10번 문제의 점수는 3이 된다.
"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char **arr;
    int n = 0;
    int i = 0;
    int score = 0;

    scanf("%d", &n);
    arr = (char**)malloc(sizeof(char*)*n);
    for(i = 0; i < n; i++)
        arr[i] = (char*)malloc(sizeof(char)* 80);

    i = 0;  
    while(i < n)
      {
        scanf("%s", arr[i]);
        i++;
      }
  
  /*  for(i = 0, i < n; i++)
        scanf("%s", arr[i]);
  */
    int sum = 0;
    for(i = 0; i < n; i++)
    {
        for(int j = 0; arr[i][j] != '\0'; j++)
        {
            if(arr[i][j] == 'X')
            {
                score = 0;
            }
            else if(arr[i][j] == 'O')
            {
                score += 1;
                sum += score;
            }
        }
       printf("%d\n", sum);
      score = 0;
      sum = 0;
     }
    for(i = 0; i < n; i++)
        free(arr[i]);
    free(arr);
}