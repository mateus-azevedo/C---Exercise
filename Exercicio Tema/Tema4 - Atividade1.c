#include <stdio.h>

main() {
	int n1, n2, n3;
	
	printf("numero 1: "); scanf("%d", &n1);
	printf("numero 2: "); scanf("%d", &n2);
	printf("numero 3: "); scanf("%d", &n3);
	
	if (n1 > n2)
		printf("n1: %d", n1);
	else if (n2 > n3)
		printf("n2: %d", n2);
	else
		printf("n3: %d", n3);
}
