#include <stdio.h>

//Exemplo3: Utilização da estrutura switch para apresentação de menus.

int main (){
	int op;
	
	printf("**********************************\n");
	printf("***************MENU***************\n");
	printf("**********************************\n");
	printf("1- Cadastro de produtos\n");
	printf("2- Busca de produto\n");
	printf("3- Exclusão de produto\n");
	printf("\nInforme sua opção: ");
	scanf("%d",&op);
	
	switch (op){
		case 1:{
			printf("\nCADASTRO DE PRODUTOS\n"); break;
		}
		case 2:{
			printf("\nBUSCA DE PRODUTOS\n"); break;
		}
		case 3:{
			printf("\nEXCLUSÃO DE PRODUTOS\n"); break;
		}
		default:{
			printf("\nOPÇÃO INVÁLIDA!!!\n"); break;
		}
	}
}
