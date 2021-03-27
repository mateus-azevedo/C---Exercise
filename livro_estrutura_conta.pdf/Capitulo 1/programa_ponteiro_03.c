#include <stdio.h>

int main(void)
{
  int *piValor;
  int iValor;
  char *pcValor;
  char cValor;

  piValor = &iValor;
  pcValor = &cValor;

  printf("Endereco de piValor = %d\n", piValor);
  printf("Endereco de pcValor = %d\n", pcValor);

  piValor++; /* somando uma unidade (4 bytes) na memoria */
  pcValor++; /* somando uma unidade (1 byte) na memoria */

  printf("\nEndereco de piValor = %d\n", piValor);
  printf("Endereco de pcValor = %d\n", pcValor);

  return 0;
}