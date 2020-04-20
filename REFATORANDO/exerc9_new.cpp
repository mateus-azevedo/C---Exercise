#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define pi 3.1415

int nomes(char nome[20]);

int main() {
	char figura[20];
	int validation;
	float raio, altura;
	
	printf("Tipo da Figura [Cone/Cilindro/Esfera]: "); scanf("%s", &figura);
	printf("O raio da figura: "); scanf("%f", &raio);
	printf("A altura da figura: "); scanf("%f", &altura);
	
	strupr(figura);
	validation = nomes(figura);
	
	printf("Testando = %d", validation);
}

int nomes(char nome[20]) {
	int valor;
	
	if(strcmp(nome, "CONE") == 0) {
		valor = 1;
		return valor;
	}
	else if(strcmp(nome, "CILINDRO") == 0) {
		valor = 2;
		return valor;
	}
	else if(strcmp(nome, "ESFERA") == 0) {
		valor = 3;
		return valor;
	}
}
