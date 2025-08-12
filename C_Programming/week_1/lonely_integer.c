#include <stdio.h>
#include <stdlib.h>
int uni(int arr[], int count)
{
  int unique1 = 0;
  for (int i = 0; i < count; i++)
  {
      unique1 ^= arr[i];
  }
  return unique1;
}

int main()
{
  int count;
  printf("Enter the number of elements: ");
  scanf("%d", &count);
  int arr[count];
  printf("Enter the elements:\n");
  for (int i = 0; i < count; i++)
  {
    scanf("%d", &arr[i]);
  }
  int res = uni(arr, count);
  printf("The unique integer is: %d\n", res);
  return 0;
}