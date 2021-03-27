#include "fila.h"

int main(void)
{
  Fila *fi;
  fi = cria_Fila();
  
  insere_Fila(fi, dados_alunos);
  
  return 0;
}