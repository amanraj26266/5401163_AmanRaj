#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// comparator for qsort
int cmp_int(const void *a, const void *b)
{
  int x = *(const int *)a, y = *(const int *)b;
  return (x > y) - (x < y);
}

int maxMin(int k, int arr_count, int *arr)
{
  // sort the array
  qsort(arr, arr_count, sizeof(int), cmp_int);

  int best = INT_MAX;
  for (int i = 0; i + k - 1 < arr_count; i++)
  {
    int diff = arr[i + k - 1] - arr[i];
    if (diff < best)
      best = diff;
  }
  return best;
}

int main()
{
  int n, k;
  scanf("%d", &n);
  scanf("%d", &k);

  int *arr = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int result = maxMin(k, n, arr);
  printf("%d\n", result);

  free(arr);
  return 0;
}
