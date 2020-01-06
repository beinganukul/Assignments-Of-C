#include <stdio.h>
int main() {
  int n, i, s = 0;
  printf("\nEnter any positive integer: \n");
  scanf("%d",&n);

  s = (n * (n + 1) * (2 * n + 1 )) / 6;
  
  for(i =1; i<=n;i++)
  {
    if (i != n)
       printf("%d^2 + ",i);
    else
       printf("%d^2 = %d ",i, s);
  }
}