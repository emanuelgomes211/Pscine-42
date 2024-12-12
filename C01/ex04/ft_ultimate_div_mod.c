void    ft_ultimate_div_mod(int *a, int *b)
{
   int div;
   int mod;

   div = *a / *b;
   mod = *a % *b;

   *a = div;
   *b = mod;
}
/*
#include <stdio.h>
int main()
{
  int div = 10;
  int mod = 2;
  ft_ultimate_div_mod(&div, &mod);
  printf("%d\n%d\n", div, mod);
  return (0);
}
*/