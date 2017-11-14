#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	int i, numeroperguntas, pontuacao = 0;

		do { //fazer o loop no caso do input ser um número negativo de perguntas
			printf("Digite o numero de perguntas a que deseja responder.\n\n"); //número de perguntas pedidas
		scanf("%d", &numeroperguntas); } while (numeroperguntas < 1);
		
			if(numeroperguntas >= 1) { //resposta para quando o número de perguntas é maior ou igual a 1
			
				printf("%d" " perguntas seleccionadas.\n\n", numeroperguntas);
			for(i = 1; i <= numeroperguntas; ++i) {

		int generodepergunta = rand() % 5;

		int pergunta_octal_decimal = rand() % 255, resposta_octal_decimal; //octal -> decimal
			if(generodepergunta == 0) {
				printf("Converte '" "%o" "' de octal para decimal.\n\n", pergunta_octal_decimal);
				scanf("%d", &resposta_octal_decimal);
				while ( getchar() != '\n' ); //limpa o input
			if(pergunta_octal_decimal == resposta_octal_decimal) {
				pontuacao++;
				printf("Correcto!\n\n");
				}
			else {
				printf("Errado, continua a tentar.\n\n");
				}
				}
		unsigned int pergunta_octal_hexadecimal = rand() % 255, resposta_octal_hexadecimal; //octal -> hexadecimal
			if(generodepergunta == 1) {
				printf("Converte '" "%o" "' de octal para hexadecimal.\n\n", pergunta_octal_hexadecimal);
				scanf("%x", &resposta_octal_hexadecimal);
				while ( getchar() != '\n' ); //limpa o input
			if(pergunta_octal_hexadecimal == resposta_octal_hexadecimal) {
				pontuacao++;
				printf("Correcto!\n\n");
				}
			else {
				printf("Errado, continua a tentar.\n\n");
				}
				}
		unsigned int pergunta_decimal_octal = rand() % 255, resposta_decimal_octal; //decimal -> octal
			if(generodepergunta == 2) {
				printf("Converte '" "%d" "' de decimal para octal.\n\n", pergunta_decimal_octal);
				scanf("%o", &resposta_decimal_octal);
				while ( getchar() != '\n' ); //limpa o input
			if(pergunta_decimal_octal == resposta_decimal_octal) {
				pontuacao++;
				printf("Correcto!\n\n");
				}
			else {
				printf("Errado, continua a tentar.\n\n");
				}
				}
		unsigned int pergunta_decimal_hexadecimal = rand() % 255, resposta_decimal_hexadecimal; //decimal -> hexadecimal
			if(generodepergunta == 3) {
				printf("Converte '" "%d" "' de decimal para hexadecimal.\n\n", pergunta_decimal_hexadecimal);
				scanf("%x", &resposta_decimal_hexadecimal);
				while ( getchar() != '\n' ); //limpa o input
			if(pergunta_decimal_hexadecimal == resposta_decimal_hexadecimal) {
				pontuacao++;
				printf("Correcto!\n\n");
				}
			else {
				printf("Errado, continua a tentar.\n\n");
				}
				}
		unsigned int pergunta_hexadecimal_octal = rand() % 255, resposta_hexadecimal_octal; //hexadecimal -> octal
			if(generodepergunta == 4) {
				printf("Converte '" "%x" "' de hexadecimal para octal.\n\n", pergunta_hexadecimal_octal);
				scanf("%o", &resposta_hexadecimal_octal);
				while ( getchar() != '\n' ); //limpa o input
			if(pergunta_hexadecimal_octal == resposta_hexadecimal_octal) {
				pontuacao++;
				printf("Correcto!\n\n");
				}
			else {
				printf("Errado, continua a tentar.\n\n");
				}
				}
		int pergunta_hexadecimal_decimal = rand() % 255, resposta_hexadecimal_decimal; //hexadecimal -> decimal
			if(generodepergunta == 5) {
				printf("Converte '" "%x" "' de hexadecimal para decimal.\n\n", pergunta_hexadecimal_decimal);
				scanf("%d", &resposta_hexadecimal_decimal);
				while ( getchar() != '\n' ); //limpa o input
			if(pergunta_hexadecimal_decimal == resposta_hexadecimal_decimal) {
				pontuacao++;
				printf("Correcto!\n\n");
				}
			else {
				printf("Errado, continua a tentar.\n\n");
				}
				}
				}
			}

			printf("Acertaste %d perguntas\n\n", pontuacao); //diz a pontuação
		printf("Carrega no Enter para fechar o programa\n"); //cria um input para fechar o programa
		getchar();
	return 0;
}
