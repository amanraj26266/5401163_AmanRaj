// In this question we will be solving the Counter Game problem from HackerRank.
// The problem is to determine the winner of a game where two players take turns reducing a number
// by either halving it (if it's a power of 2) or subtracting the highest power of 2 less than it.
// The player who cannot make a move loses.

#include <stdio.h>
#include <stdbool.h>

// Check if n is a power of 2
bool isPowerOfTwo(unsigned long long n)
{
  return (n && !(n & (n - 1)));
}

// Find highest power of 2 less than n
unsigned long long highestPowerOfTwo(unsigned long long n)
{
  unsigned long long p = 1;
  while (p << 1 <= n)
  {
    p <<= 1;
  }
  return p;
}

char *counterGame(unsigned long long n)
{
  int turns = 0;
  while (n > 1)
  {
    if (isPowerOfTwo(n))
    {
      n /= 2;
    }
    else
    {
      n -= highestPowerOfTwo(n);
    }
    turns++;
  }
  return (turns % 2 == 1) ? "Louise" : "Richard";
}

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    unsigned long long n;
    scanf("%llu", &n);
    printf("%s\n", counterGame(n));
  }
  return 0;
}
