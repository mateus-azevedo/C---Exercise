#include "stdio.h"

main() {
	int n1, n2, produto;
	
	printf("Informe dois numeros inteiros: "); 
	scanf("%d %d", &n1, &n2); //scanf("%d", &n2);
	
	produto = n1 * n2;
	
	printf("O produto e %d", produto);
}
