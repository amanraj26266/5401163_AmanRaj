// find the positive negative and zero numbers in an array and then //print the ratio of positive, negative and zero numbers setpricision(6)
#include <stdio.h>
int plus_minus(int arr[], int n)
{
  int pos = 0, neg = 0, zero = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      pos++;
    }
    else if (arr[i] < 0)
    {
      neg++;
    }
    else
    {
      zero++;
    }
  }
  printf("Positive ratio: %.6f\n", (float)pos / n);
  printf("Negative ratio: %.6f\n", (float)neg / n);
  printf("Zero ratio: %.6f\n", (float)zero / n);
}
int main()
{
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  plus_minus(arr, n);
  return 0;
}