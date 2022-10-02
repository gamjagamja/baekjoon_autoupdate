#include <stdio.h>

int main()
{
  int sum, n, price= 0 , product_n = 0, sum_a =0;
  scanf("%d", &sum);
  scanf("%d", &n);
  while(n > 0)
  {
      scanf("%d %d", &price, &product_n);
      sum_a = sum_a + (price * product_n);
      n--;
  }
 
  if(sum_a == sum)
      printf("Yes");
  else
      printf("No");
  
    return 0;
}