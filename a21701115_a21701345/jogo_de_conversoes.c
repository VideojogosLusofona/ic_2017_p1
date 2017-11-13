//1º Projeto - Jogo de Conversoes
//Diogo Martins - a21701345
//André Pedro - a21701115

/* Objetivos:
-Pedir ao utilizador o número de questões a que deseja responder;
-Perguntar ao utilizador para converter um número de uma base numérica noutra base numérica;
-Indicar se o utilizador respondeu ou não corretamente à questão após cada resposta;
-Indicar quantas respostas corretas foram dadas no fim do jogo. */

//Compilar com: gcc -std=c99 -Wall -Wextra -Wpedantic

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <setjmp.h>

//inicio
int main() {
	
	int number; //variavel que determina o numero de perguntas
	unsigned int resp; //resposta introduzida
	int count = 0; //conta as respostas corretas
	
	//pedir e ler o numero de perguntas (escolhido pelo utilizador)
	printf("------------------------|ATENÇÃO|-----------------------------\r\n"
		"O objetivo deste jogo é tentares responder corretamente a per-\r\n"
			"guntas com conversões de uma base numeral para outra! Começa\r\n"
				"por digitar o número de perguntas a que pretendes responder:\r\n");
	scanf("%d", &number);
	
	//loop que cria as perguntas (cujo numero depende do user)
	for (int i = 0; i < number; i++) {
		
		//gerar numero aleatorio entre 0 e 255 (para usar nas perguntas)
		srand((unsigned int) time(NULL));
		for (int i = 0; i < 1; i++) {
			unsigned int num = rand() % 256;
		
			//gerador aleatorio de numero entre 0 e 5 para utilizar mais 'a frente
			srand((unsigned int)time(NULL));
			for (int i = 0; i < 1; i++) {
				int n = rand() % 6;
				
				//usar comparacoes (n == x (com 0<=x<=5) para obter a pergunta
				if (n == 0) {
					printf("Converte o número %o octal para base decimal:\r\n", num);
					scanf("%u", &resp);
						//verificar se a resposta está correta ou errada
						if (resp == num) {
							printf("Está correto! :D\r\n");
							count += 1; //adicionar 1 ao count quando a resposta esta correta
						} else {
							printf("Está errado! >:(\r\n");
						}
				} else if (n == 1) {
					printf("Converte o número %o octal para base hexadecimal:\r\n", num);
					scanf("%x", &resp);
						//verificar se a resposta está correta ou errada
						if (resp == num) {
							printf("Está correto! :D\r\n");
							count += 1; //adicionar 1 ao count quando a resposta esta correta
						} else {
							printf("Está errado! >:(\r\n");
						}
				} else if (n == 2) {
					printf("Converte o número %d decimal para base octal:\r\n", num);
					scanf("%o", &resp);
						//verificar se a resposta está correta ou errada
						if (resp == num) {
							printf("Está correto! :D\r\n");
							count += 1; //adicionar 1 ao count quando a resposta esta correta
						} else {
							printf("Está errado! >:(\r\n");
						}
				} else if (n == 3) {
					printf("Converte o número %d decimal para base hexadecimal:\r\n", num);
					scanf("%x", &resp);
						//verificar se a resposta está correta ou errada
						if (resp == num) {
							printf("Está correto! :D\r\n");
							count += 1; //adicionar 1 ao count quando a resposta esta correta
						} else {
							printf("Está errado! >:(\r\n");
						}
				} else if (n == 4) {
					printf("Converte o número %x hexadecimal para base octal:\r\n", num);
					scanf("%o", &resp);
						//verificar se a resposta está correta ou errada
						if (resp == num) {
							printf("Está correto! :D\r\n");
							count += 1; //adicionar 1 ao count quando a resposta esta correta
						} else {
							printf("Está errado! >:(\r\n");
							}
				} else if (n == 5) {
					printf("Converte o número %x hexadecimal para base decimal:\r\n", num);
					scanf("%u", &resp);
						//verificar se a resposta está correta ou errada
						if (resp == num) {
							printf("Está correto! :D\r\n");
							count += 1; //adicionar 1 ao count quando a resposta esta correta
						} else {
							printf("Está errado! >:(\r\n");
						}
				}
			}
		}
	} //fim do loop
	
	//numero de respostas corretas
	printf("Em %d respostas acertaste: %d\r\n", number, count);
	
	//mensagem final que varia consoante o resultado:
	//score = 0
	if (count==0) { //para score = 0
		printf("Claramente não percebeste o objetivo do jogo... ou então tens um QI muito baixo :$\r\n");
	//score <= 20%
	} else if (count*100 <= (number*100/5) && (count*100 > 0)) {
		printf("Nem sei que te diga... Eu tinha acertado mais a responder ao calhas! LOSER\r\n");
	//score <= 40%
	} else if (count*100<=(number*200/5) && (count*100 > (number*100/5))) {
		printf("És uma nódoa nisto pah.. vai estudar conversões e depois volta a tentar!");
	//score <= 60%
	} else if (count*100<(number*300/5) && (count*100 > (number*200/5))) {
		printf("Vá lá eu sei que consegues melhor que isto... Tenta novamente !\r\n");
	//score <= 80%
	} else if (count*100<(number*400/5) && (count*100 >= (number*300/5))) {
		printf("Conseguiste um bom resultado mas ainda dá para mais! Esforça-te!\r\n");
	//score < 100%
	} else if (count*100<(number*500/5) && (count*100 >= (number*400/5))) {
		printf("Quase perfeito! Continua a tentar e vais lá chegar!\r\n");
	//score = 100%
	} else if (count*100==number*100) {
		printf("UAU CONSEGUISTE ACERTAR TODAS!! PARABÉNS!\r\n");
	} else{
	}
	//adeus
	return 0;
    
}
