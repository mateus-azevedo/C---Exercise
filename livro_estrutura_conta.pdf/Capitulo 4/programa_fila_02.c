#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAXIMO 10

struct queue
{
  int itens[TAMANHO_MAXIMO];
  int front, rear;
};

int empty(struct queue *pq)
{
  if(pq->front == pq->rear)
    return 1;

  return 0;
}

void enqueue(struct queue *pq, int x)
{
  /* Inversao das posicoes dos ponteiros. Se o final do vetor ja foi
    alcancado, entao retorna-se ao inicio do vetor */
  if(pq->rear == TAMANHO_MAXIMO-1)
    pq->rear = 0;
  else
    pq->rear++;

  if(pq->rear == pq->front)
  {
    printf("\nEstouro da fila");
    exit(1);
  }

  pq->itens[pq->rear] = x;
  return;
}

int size(struct queue *pq)
{
  /* se o final da fila ianda nao alcancou o final do vetor... */
  if(pq->front <= pq->rear)
  {
    return pq->rear - pq->front;
    /* ...entao o tamanho da fila e o final da fila menos o
      inicio da fila...*/
  }

  /* ... se nao, quer dizer que o ponteiro de final da fila ha alcancou o final do vetor
   e foi reposicionado para o inicio do vetor, entao o tamanho da fila e a quantidade
   de itens que ainda restam ate chegar ao final do vetor somando itens que estao
   no inicio do vetor */
  return pq->rear + pq->front;
}

int front(struct queue *pq)
{
  return pq->itens[pq->front + 1];
}

int dequeue(struct queue *pq)
{
  int x, i;
  if(empty(pq))
  {
    printf("\nFila vazia");
    exit(1);
  }

  /* Inversao das posicoes dos ponteiros. Se o final do vetor ja foi alcancado,
   entao retorna-se ao inicio do vetor */
  if(pq->front == TAMANHO_MAXIMO - 1)
    pq->front = 0;
  else
    pq->front++;
  
  return(pq->itens[pq->front]);
}

int main(void)
{
  struct queue q;
  q.front = -1;
  q.rear =-1;

  enqueue(&q, 1);
  enqueue(&q, 2);
  enqueue(&q, 3);
  enqueue(&q, 4);

  printf("\nTamanho da fila %d", size(&q));
  printf("\nProximo da fila %d", front(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nProximo da fila %d", front(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTamanho da fila %d", size(&q));

  enqueue(&q, 5);
  enqueue(&q, 6);
  enqueue(&q, 7);
  enqueue(&q, 8);
  enqueue(&q, 9);

  printf("\n\nTamanho da fila %d", size(&q));
  printf("\nProximo da fila %d", front(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nProximo da fila %d", front(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTamanho da fila %d", size(&q));

  enqueue(&q, 10);
  enqueue(&q, 11);
  enqueue(&q, 12);
  enqueue(&q, 13);
  enqueue(&q, 14);
  enqueue(&q, 15);
  enqueue(&q, 16);
  enqueue(&q, 17);
  enqueue(&q, 18);

  printf("\n\nTamanho da fila %d", size(&q));
  printf("\nProximo da fila %d", front(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nProximo da fila %d", front(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTamanho da fila %d", size(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTamanho da fila %d", size(&q));

  printf("\nFila vazia %d", empty(&q));

  enqueue(&q, 20);
  enqueue(&q, 21);
  enqueue(&q, 22);
  enqueue(&q, 23);
  enqueue(&q, 24);
  enqueue(&q, 25);

  printf("\n\nTamanho da fila %d", size(&q));
  printf("\nProximo da fila %d", front(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nProximo da fila %d", front(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTamanho da fila %d", size(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTamanho da fila %d", size(&q));
  printf("\nTirando da fila %d", dequeue(&q));
  printf("\nTamanho da fila %d", size(&q));

  printf("\nFila vazia %d", empty(&q));
  printf("\n");
  
  return 0;
}