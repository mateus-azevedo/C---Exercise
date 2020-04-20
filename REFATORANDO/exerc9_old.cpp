#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define pi 3.1415

int nomes(char nome[20]);
float calculo_volumes(float raio, float altura, char name);
float calculo_areas(float raio, float altura, char name);

int main() {
	char tipo[20];
	float r, h;
	
	printf("Tipo da Figura [Cone/Cilindro/Esfera]: "); scanf("%s", &tipo);
	printf("O raio da figura: "); scanf("%f", &r);
	printf("A altura da figura: "); scanf("%f", &h);
	
	strupr(tipo);
	
	printf("\n\n%s\nVOLUME = %.2f\nAREA = %.2f", tipo, calculo_volumes(r, h, *tipo), calculo_areas(r, h, *tipo));
	
	return 0;
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
	else {
		valor = 0;
		return valor;
	}
	printf("%d %s", valor, nome);
}

float calculo_volumes(float raio, float altura, char *name) {
	float volume;
	int value;
	
	//strcpy(value, nomes(name));
	value = nomes(name);
	
	switch(value) {
		case 1: {
			volume = ((pi * pow(raio,2)) * altura) / 3;
			return volume;
		}
		case 2: {
			volume = ((pi * pow(raio,2)) * altura);
			return volume;
		}
		case 3: {
			volume = (pi * 4 * pow(raio,3)) / 3;
			return volume;
		}
		default: return 0;
	}
}

float calculo_areas(float raio, float altura, char *name) {
	float area;
	int value;
	
	//strcpy(value, nomes(name));
	value = nomes(name);
	
	switch(value) {
		case 1: {
			area = (pi * raio) * sqrt(pow(raio,2) + pow(altura,2));
			return area;
		}
		case 2: {
			area = (2 * pi) * (raio * altura);
			return area;
		}
		case 3: {
			area = (4 * (pi * pow(raio,2)));
			return area;
		}
		default: return 0;
	}
}
