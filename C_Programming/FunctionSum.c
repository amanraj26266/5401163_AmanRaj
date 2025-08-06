#include <stdio.h>

// funtion prototype
int sum(int, int);

// function defination
int sum(int a, int b)
{
  int sum = a + b;
  return sum;
}
// driver code
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  int result = sum(a, b); // function call
  printf("the sum of a and b is %d\n", result);
  return 0;
}
//01824520520