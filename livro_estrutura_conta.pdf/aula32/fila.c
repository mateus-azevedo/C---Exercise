#include "fila.h"
#include <stdio.h>
#include<stdlib.h>

struct fila
{
  int inicio, final, qtd;
  struct aluno dados[MAX];
};

Fila* cria_Fila()
{
  Fila *fi = (Fila*)malloc(sizeof(struct fila));
  if(fi != NULL)
  {
    fi->inicio = 0;
    fi->final = 0;
    fi->qtd = 0;
  }

  return fi;
}

void libera_Fila(Fila* fi)
{
  free(fi);
}

int tamanho_Fila(Fila* fi)
{
  if(fi == NULL)
    return -1;
  return fi->qtd;
}

int Fila_cheia(Fila* fi)
{
  if(fi == NULL) return -1;
  if(fi->qtd == MAX)
    return 1;
  else
    return 0;
}

int insere_Fila(Fila *fi, struct aluno al)
{
  if(fi == NULL) return 0;
  if(Fila_cheia(fi)) return 0;
  fi->dados[fi->final] = al;
  fi->final = (fi->final+1) % MAX;
  fi->qtd++;

  return 1;
}