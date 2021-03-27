#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_PILHA 100

/* Estrutura que ira conter a pilha de informacoes */
struct pilha
{
  int topo;
  int itens[TAMANHO_PILHA];
};

int empty(struct pilha *p)
{
  if(p->topo == -1)
    return 1;
  
  return 0;
}

int pop(struct pilha *p)
{
  if(empty(p))
  {
    printf("\nPilha vazia");
    exit(1);
  }
  /* retorna o itens da pilha atual e diminui a posicao da pilha */
  return(p->itens[p->topo--]);
}

void push(struct pilha *p, int e)
{
  if(p->topo == (TAMANHO_PILHA - 1))
  {
    printf("\nEstouro da pilha");
    exit(1);
  }
  /* apos verificar se nao haveria estouro na capacidade da pilha,
  e criada uma nova posicao na pilha e o elemento e armazenado */
  p->itens[++(p->topo)] = e;
  return;
}

int size(struct pilha *p)
{
  /* sempre lembrando que na linguagem C o indice de um
    vetor comeca na posicao 0 */
  return p->topo+1;
}

int stackpop(struct pilha *p)
{
  return p->itens[p->topo];
}

int main(void)
{
  struct pilha x;
  x.topo = -1;

  push(&x, 1);
  push(&x, 2);
  push(&x, 3);

  printf("\nTamanho da pilha %d", size(&x));
  printf("\nElemento do topo da filha %d", stackpop(&x));

  printf("\n%d", pop(&x));
  printf("\n%d", pop(&x));
  printf("\n%d", pop(&x));
  printf("\n%d", pop(&x));

  return 0;
}