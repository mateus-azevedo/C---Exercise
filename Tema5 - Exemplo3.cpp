#include <stdio.h>

//Exemplo3: Utiliza��o da estrutura switch para apresenta��o de menus.

int main (){
	int op;
	
	printf("**********************************\n");
	printf("***************MENU***************\n");
	printf("**********************************\n");
	printf("1- Cadastro de produtos\n");
	printf("2- Busca de produto\n");
	printf("3- Exclus�o de produto\n");
	printf("\nInforme sua op��o: ");
	scanf("%d",&op);
	
	switch (op){
		case 1:{
			printf("\nCADASTRO DE PRODUTOS\n"); break;
		}
		case 2:{
			printf("\nBUSCA DE PRODUTOS\n"); break;
		}
		case 3:{
			printf("\nEXCLUS�O DE PRODUTOS\n"); break;
		}
		default:{
			printf("\nOP��O INV�LIDA!!!\n"); break;
		}
	}
}
