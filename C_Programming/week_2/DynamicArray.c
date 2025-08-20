#include <stdio.h>
#include <stdlib.h>

int *dynamicArray(int n, int queries_rows, int **queries, int *queries_cols, int *result_count)
{
  int lastAnswer = 0;
  int seqCount = 0;
  int **seqList = (int **)malloc(n * sizeof(int *));
  int *seqSize = (int *)calloc(n, sizeof(int));

  for (int i = 0; i < n; i++)
  {
    seqList[i] = NULL; // initially empty sequences
    seqSize[i] = 0;
  }

  int *results = (int *)malloc(queries_rows * sizeof(int)); // max possible size
  *result_count = 0;

  for (int i = 0; i < queries_rows; i++)
  {
    int type = queries[i][0];
    int x = queries[i][1];
    int y = queries[i][2];

    int idx = (x ^ lastAnswer) % n;

    if (type == 1)
    {
      // Append y to seqList[idx]
      seqList[idx] = (int *)realloc(seqList[idx], (seqSize[idx] + 1) * sizeof(int));
      seqList[idx][seqSize[idx]] = y;
      seqSize[idx]++;
    }
    else if (type == 2)
    {
      int pos = y % seqSize[idx];
      lastAnswer = seqList[idx][pos];
      results[*result_count] = lastAnswer;
      (*result_count)++;
    }
  }

  return results;
}

int main()
{
  int n, q;
  scanf("%d %d", &n, &q);

  int **queries = (int **)malloc(q * sizeof(int *));
  int *queries_cols = (int *)malloc(q * sizeof(int));

  for (int i = 0; i < q; i++)
  {
    queries[i] = (int *)malloc(3 * sizeof(int));
    queries_cols[i] = 3;
    scanf("%d %d %d", &queries[i][0], &queries[i][1], &queries[i][2]);
  }

  int result_count;
  int *result = dynamicArray(n, q, queries, queries_cols, &result_count);

  for (int i = 0; i < result_count; i++)
  {
    printf("%d\n", result[i]);
  }

  // cleanup
  free(result);
  for (int i = 0; i < q; i++)
    free(queries[i]);
  free(queries);
  free(queries_cols);

  return 0;
}
