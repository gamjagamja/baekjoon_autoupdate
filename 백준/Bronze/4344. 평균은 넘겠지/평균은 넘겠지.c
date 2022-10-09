#include <stdio.h>

int main()
{ 
    int c = 0;

  
    scanf("%d\n", &c);
    for(int i =0; i < c; i++)
     {
        int n = 0;
        scanf("%d", &n);
        int score[n];
        int sum = 0;
        // sum의 위치에 주의합니다!!
        // for문 안에서 반복적으로 초기화 필요!!
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        float average = 0.00;
        average = (double)sum/n;

        int count = 0;
        for(int k = 0; k < n; k++)
        {
            if(score[k] > average)
                count++;
        }
       
        printf("%.3f%%\n", ((double)count/n)*100);
        
     }
    return 0;
}
