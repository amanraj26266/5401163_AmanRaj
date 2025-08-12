#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *pangrams(char *s)
{
  int marked[26] = {0};
  int count = 0;

  for (int i = 0; s[i] != '\0'; i++)
  {
    char ch = tolower(s[i]);
    if (ch >= 'a' && ch <= 'z')
    {
      if (!marked[ch - 'a'])
      {
        marked[ch - 'a'] = 1;
        count++;
      }
    }
  }

  return (count == 26) ? "pangram" : "not pangram";
}

int main()
{
  char s[1001];

  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = 0;

  printf("%s\n", pangrams(s));

  return 0;
}
