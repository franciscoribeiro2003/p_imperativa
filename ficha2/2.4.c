#include <stdio.h>
int mediana(int a, int b, int c)
{
  scanf("%d %d %d", &a, &b, &c); // ler 3 valores
  if (a>=b)
    if (a<=c)
      return a;
    else
      if (c>=b)
      {
        return c;
      }
      else
        return b;
  else if (b>=a)
  {
    if (b<=c)
      return  b;
    else
      if (c>=a)
        return c;
      else
        return a;
  }
  return 0;
}
