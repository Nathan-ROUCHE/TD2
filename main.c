#include <stdio.h>

int maximum(int *t, int n)
{
  int m = t[0];
  for(int i = 0; i<n; i++)
  {
    if(m < t[i]) m = t[i];
  }
  return m;
}

int main(void)
{
  printf("Hello\n");
  return 0;
}