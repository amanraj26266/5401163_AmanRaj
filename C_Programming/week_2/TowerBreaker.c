// tower breaker game
// The game is played between two players who take turns breaking towers.
// The player who cannot make a move loses.
#include <stdio.h>

char *towerBreakers(int n, int m)
{
  if (m == 1 || n % 2 == 0)
  {
    return "2"; // Richard wins
  }
  else
  {
    return "1"; // Louise wins
  }
}

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%s\n", towerBreakers(n, m));
  }
  return 0;
}
