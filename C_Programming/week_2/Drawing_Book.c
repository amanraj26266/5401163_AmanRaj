#include <stdio.h>
#include <stdlib.h>

int drawingBook(int n, int p)
{
  int front = p / 2;
  int back = (n / 2) - (p / 2);
  return (front < back) ? front : back;
}

int main()
{
  int n, p;
  scanf("%d%d", &n, &p);
  printf("%d", drawingBook(n, p));
  return 0;
}
