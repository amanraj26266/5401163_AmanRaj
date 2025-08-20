// in this question we will see how we are making a zigzag arr where arr[n] is convered using the logic where 
#include <stdio.h>
#include <stdlib.h>
int cmp_int_asc(const void *a, const void *b)
{
  int x = *(const int *)a;
  int y = *(const int *)b;
  return (x > y) - (x < y);
}
void swap(int *x, int *y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void zigzag(int *a, int n)
{
  qsort(a, n, sizeof(int), cmp_int_asc);

  int mid = (n - 1) / 2;
  swap(&a[mid], &a[n - 1]);

  int i = mid + 1, j = n - 2;
  while (i < j)
  {
    swap(&a[i], &a[j]);
    i++;
    j--;
  }
}

int main(void)
{

  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  zigzag(a, n);

  for (int i = 0; i < n; i++)
  {
    if (i)
      printf(" ");
    printf("%d", a[i]);
  }
  printf("\n");

  return 0;
}
