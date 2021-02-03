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

int sommeproduit(int a, int b, int *sp, int *pp)
{
  *sp = a+b;
  *pp = a*b;
}

int main(void)
{
  int s, p;
  sommeproduit(12, 13, &s, &p);
  printf("s: %i; p: %i\n", s, p);
  return 0;
}