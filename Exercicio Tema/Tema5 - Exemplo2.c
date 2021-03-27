#include <stdio.h>

//Exemplo2: Utilizando valor do tipo char com a estrutura switch
int main() {
	char ch;
	
	printf("Digite uma letra: ");
	scanf("%c",&ch);
	
	switch(ch){
		case 'a':{
			printf("Voce informou a letra a."); break;
		}
		case 'b':{
			printf("Voce informou a letra b."); break;
		}
		default:{
			printf("Caractere informado diferente de a e b."); break;
		}
	}
}
