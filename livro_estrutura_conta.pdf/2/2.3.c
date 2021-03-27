/* programa_memoria_01.c */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *p;
  int i, k, n;

  printf("\nDigite a quantidade de numeros que serao digitados ->");
  scanf("%d", &i);

  /* A funcao malloc reserva espaco suficiente para um vetor de inteiros.
    Caso sejam digitados 5 elementos, serao reservados 20 bytes, pois cada
    inteiro ocupa 4 bytes na memoria */
  
  p = (int *)(malloc(i * sizeof(int)));

  if(p == NULL)
  {
    printf("\nErro de alocacao de memoria");
    exit(1);
  }

  for(k = 0; k < i; k++)
  {
    printf("Digite o numero para o indice %d ->", k);
    scanf("%d", &p[k]);
  }

  for(k = 0; k < i; k++)
  {
    printf("O numero do indice %d eh %d\n", k, p[k]);
  }

  printf("\nDigite quantos elementos quer adicionar ao vetor ->");
  scanf("%d", &n);

  /* A funcao realloc aumenta ou diminui o tamanho do vetor dinamicamente. Ela recebe o
    o ponteiro para o vetor anterior e retorna o novo espaco alocado */
  
  p = (int *)(realloc(p, (i+n) * sizeof(int)));

  if(p == NULL)
  {
    printf("\nErro de re-alocacao de memoria");
    exit(1);
  }

  for(;k < (n + i); k++)
  {
    printf("Digite o numero para o indice %d->", k);
    scanf("%d", &p[k]);
  }

  for(k = 0; k < (i + n); k++)
  {
    printf("O numero do indice %d eh %d\n", k, p[k]);
  }

  free(p);

  return 0;
}