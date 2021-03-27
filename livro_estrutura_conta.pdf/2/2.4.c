/* programa_memoria_02.c */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  /* A declaracao de uma matriz de 2 dimensoes exige um ponteiro para ponteiro */
  int **p;
  int i, j, k, x;

  printf("\nDigite as dimensoes da matriz ->");
  scanf("%d %d", &i, &j);

  /* 
    Alocacao da primeira dimensao. Internamente, a funcao calloc fara uma multiplicacao da
    quantidade de elementos pelo tamanho de cada elemento para saber quanto de memoria
    deve ser alocada. 
  */
  
  p = calloc(i, sizeof(int));

  if(p == NULL)
  {
    printf("\nErro de alocacao de memoria");
    exit(1);
  }

  for(k = 0; k < i; k++)
  {
    /* Alocacao das linhas de cada coluna (segunda dimensao) */
    p[k] = calloc(i, sizeof(int));

    if(p[k] == NULL)
    {
      printf("\nErro de alocacao de memoria");
      exit(1);
    }
  }

  for(k = 0; k < i; k++)
  {
    for(x = 0; x < j; x++)
    {
      printf("Digite o numero para o indice %d,%d ->", k, x);
      scanf("%d", &p[k][x]);
    }
  }

  for(k = 0; k < i; k++)
  {
    for(x = 0; x < j; x++)
    {
      printf("O numero do indice %d, %d eh %d\n", k, x, p[k][x]);
    }
  }

  printf("\nLiberando memoria alocada");

  for(k = 0; k < i; k++)
  {
    free(p[k]); /* Primeiro deve ser liberada a memoria para linha da matriz... */
  }

  free(p); /* ... para depois liberar a memoria do vetor que continha as linhas */
  return 0;
}