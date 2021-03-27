#include <stdio.h>
#include <stdlib.h>

int funcao(int **piParametro)
{
  printf("%d\n", &piParametro);
  printf("%d\n", piParametro);
  printf("%d\n", *piParametro);
  printf("%d\n", **piParametro);

  return 0;
}

int main(void)
{
  int *piVariavel;

  piVariavel = (int *)malloc(sizeof(int));
  *piVariavel = 20;

  printf("%d\n", &piVariavel);
  printf("%d\n", piVariavel);
  printf("%d\n\n", *piVariavel);

  funcao(&piVariavel);

  return 0;
}
