#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo em C que leia 1 (um) nome e 2 (duas) nota de um aluno. 
Calcule a média do aluno, se a média for maior ou igual a 7 (sete), escreva 
a mensagem “Aluno aprovado”. Se a média for menor que 7, calcule o mínimo 
que o aluno deverá tirar na terceira prova e exiba (Média final => soma das 
provas 3 provas dividida pela quantidade de provas). */

main(){
	char nome[21];
	float av1, av2, av3, media, mediaFinal;
	
	printf("Escreva o nome do Aluno: "); scanf("%s", &nome);
	printf("Digite o valor da AV1: "); scanf("%f", &av1); printf("Digite o valor da AV2: "); scanf("%f", &av2);
		
	media = (av1 + av2) / 2;
	
	if (media >= 7)
		printf("\nAluno(a) aprovado(a)");
	else{
	
		av3 = 3 * 7 - av1 - av2;
		mediaFinal = (av1 + av2 + av3) / 3;
		
		if (av3 >= 11){		
			printf("\n--- ALUNO REPROVADO ---\n");
			printf("O minimo que o(a) aluno(a) %s deve tirar na AV3 e: %.2f", nome, av3);
		}
		else{		
			printf("\nVoce precisa tirar pelo menos %.2f na AV3, %s\n", av3, nome);
			printf("\nA sua media sera calculada dessa forma:\n\n");
			printf("               AV1     AV2    AV3\n");
			printf("Media Final = %.2f + %.2f + %.2f\n", av1, av2, av3);
			printf("              --------------------\n");
			printf("                        3         ");
		}
	}
}
