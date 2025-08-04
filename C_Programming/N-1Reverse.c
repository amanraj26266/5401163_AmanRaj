// Printing numbers from n to 1 (reverse order)
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = n; i >= 1; i--)
  {
    printf("%d\n", i);
  }
  return 0;
}