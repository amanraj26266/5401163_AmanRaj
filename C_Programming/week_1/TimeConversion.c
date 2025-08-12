#include <stdio.h>
#include <string.h>
void time_conversion(char time[])
{
  int hour, min, sec;
  char period[3];
  sscanf(time, "%d:%d:%d%2s", &hour, &min, &sec, period);
  if (strcmp(period, "PM") == 0 && hour != 12)
  {
    hour += 12;

    printf("%0d:%d:%d", hour, min, sec);
  }
  else
  {
    printf("%0d:%d:%d", hour, min, sec);
  }
}
int main()
{
  char time[11];
  printf("Time should in the format HH:MM:SSAM/HH:MM:SSPM\n");
  scanf("%10s", &time);
  time_conversion(time);
  return 0;
}