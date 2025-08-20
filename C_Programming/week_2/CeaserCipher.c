#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *caesarCipher(char *s, int k)
{
  int n = strlen(s);
  char *result = (char *)malloc((n + 1) * sizeof(char));
  k = k % 26; // wrap around if k > 26

  for (int i = 0; i < n; i++)
  {
    if (isalpha(s[i]))
    {
      char base = isupper(s[i]) ? 'A' : 'a';
      result[i] = (char)(((s[i] - base + k) % 26) + base);
    }
    else
    {
      result[i] = s[i]; // non-alphabetic remains unchanged
    }
  }
  result[n] = '\0';
  return result;
}

int main()
{
  int n, k;
  scanf("%d", &n); // length of string
  char s[1000];
  scanf("%s", s);
  scanf("%d", &k);

    char *encrypted = caesarCipher(s, k);
  printf("%s\n", encrypted);

  free(encrypted);
  return 0;
}
