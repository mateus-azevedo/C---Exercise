// programa_estrutura_01.c
#include <stdio.h>

struct DADO
{
  char sNome[40];
  int iIdade;
};

int main(void)
{
  struct DADO sDados[5];

  /* A estrutura é dividida em duas partes por um ponto (.). 
  Tem-se o nome da estrutura a esquerda e o nome do campo a direita.
  Neste exemplo, como esta sendo manipulado um vetor de estruturas, também t
  tem indice para cada linha do vetor. */
  
  int iIndice;

  for(iIndice = 0; iIndice < 5; iIndice++)
  {
    printf("\nEntre com o Nome: ");
    scanf("%s", &sDados[iIndice].sNome);
    printf("Entre com a idade: ");
    printf("%d", &sDados[iIndice].iIdade);
  }

  for(iIndice = 0; iIndice < 5; iIndice++)
  {
    printf("\n%s tem %d anos", sDados[iIndice].sNome, sDados[iIndice].iIdade);
  }

  return 0;
}
