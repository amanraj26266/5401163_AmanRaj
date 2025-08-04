// Add elements of two 2-d array
#include <stdio.h>
int main()
{
  int arr[2][2];
  printf("Enter elements of first 2x2 array:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  int arr1[2][2];
  printf("Enter elements of second 2x2 array:\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }

  int sum[2][2];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      sum[i][j] = arr[i][j] + arr1[i][j];
    }
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}