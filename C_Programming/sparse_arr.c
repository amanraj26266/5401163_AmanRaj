#include <stdio.h>
#include <string.h>
void sparse_array(char *queries[], int n, int n1, char *stri[])
{
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < n1; j++)
    {
      if (strcmp(queries[i], stri[j]) == 0)
      {
        count++;
      }
    }
    arr[i] = count;
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", arr[i]);
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  char queries_buff[n][101];
  char *queries[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%100s", queries_buff[i]);
    queries[i] = queries_buff[i];
  }
  int n1;
  scanf("%d", &n1);
  char stri_buff[n1][101];
  char *stri[n1];
  for (int i = 0; i < n1; i++)
  {
    scanf("%100s", stri_buff[i]);
    stri[i] = stri_buff[i];
  }
  sparse_array(queries, n, n1, stri);
  return 0;
}