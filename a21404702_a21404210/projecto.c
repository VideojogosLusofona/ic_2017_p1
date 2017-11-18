#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	
	unsigned int input;
	int score, pergs = 0;
	
	/* time seed */
	srand(time(NULL));

	/* apresentacao do jogo */
	printf("Bem-vindo ao jogo de Bases Numericas \n");
	printf("\n");
	printf("Criado por:\n");
	printf("Tiago Oliveira e Tiago Jesus\n");
	printf("a21404702 & a21404210 \n");
	printf("\n");
	
	/* pedir numero de perguntas para o for */
	printf("Numero de perguntas: ");
	scanf("%d", &pergs);
	
	for (int i = 0; i < pergs; i++) {
	
	/* valor a converter como unsigned char */
	unsigned char randvalue = rand() % 255 + 1;
	
	/* pergunta aleatoria 1-6 */
	int questionNumber = rand() % 6 + 1;
	
		switch (questionNumber) {
		
			//Octal => Decimal
			case 1:
				printf("Converte octal" " em base 10: %o\n", randvalue);
				scanf("%u", &input);
			break;
		
			//Octal => Hexadecimal
			case 2:
				printf("Converte octal" " em base 16:  %o\n", randvalue);
				scanf("%x", &input);
			break;
		
			//Decimal => Octal
			case 3:
				printf("Converte decimal" " em base 8:  %u\n", randvalue);
				scanf("%o", &input);
			break;
		
			//Decimal => Hexadecimal
			case 4:
				printf("Converte decimal" " em base 16:  %u\n", randvalue);
				scanf("%x", &input);
			break;
		
			//Hexadecimal => Octal
			case 5:
				printf("Converte hexadecimal" " em base 8:  %x\n", randvalue);
				scanf("%o", &input);
			break;
		
			//Hexadecimal => Decimal
			case 6:
				printf("Converte hexadecimal" " em base 10:  %x\n", randvalue);
				scanf("%u", &input);
            break;

			//Error
			default:
				printf("Erro! \n");
		}
		
		/* validar input */
		if(input == randvalue){
			printf("Certo!\n");
			score += 1;
		}
	
		else{
			printf("Errado!\n");
		}
	}

	/* fim do ciclo e pontuacao */
	printf("Fim do Jogo \n");
	printf("Pontuacao: %d", score);
	printf(" pergunta(s) certa(s) em %d", pergs);
    
	return 0;
}
