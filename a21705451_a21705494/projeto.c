#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	//Gera uma seed de numeros aleatorios
	srand(time(NULL));
	/*Cria-se as variaveis "i", "numero_perguntas" e "score" sendo que o 
	score e igual a 0*/
	int i, numero_perguntas, score = 0;
		//Imprime no terminal a mensagem escrita
		printf("\nQuantas perguntas queres responder?\n\nQuero ");
		//Obtem o valor digitado e transforma-o na variavel "numero_perguntas"
		scanf("%d", &numero_perguntas);
		//Imprime um paragrafo em branco
		printf("\n");
			/*Caso o valor da variavel numero_perguntas seja 1 faz 
			o codigo dentro deste "if"*/
			if(numero_perguntas == 1) {
				printf("Ok, aqui vai 1 pergunta, boa sorte.\n\n");
				/*Gera um numero aleatório de 0 a 5 e transforma-o
				na variavel "tipo_pergunta"*/
				int tipo_pergunta = rand() % 6;
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_oct_dec" e cria-se a variavel
				"resposta_oct_dec"*/
				int pergunta_oct_dec = rand() % 256, resposta_oct_dec;
					/*Caso o valor da variavel tipo_pergunta
					seja 0 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 0) {
						printf("Converte '%o' de octal "
						"para decimal.\n\nResposta: "
						, pergunta_oct_dec);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_oct_dec"*/
						scanf("%d", &resposta_oct_dec);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_oct_dec
						e resposta_oct_dec sejam iguais faz
						o codigo dentro deste "if"*/
						if(pergunta_oct_dec == resposta_oct_dec) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_oct_dec
						e resposta_oct_dec nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_oct_hex" e cria-se a variavel
				"resposta_oct_hex"*/
				unsigned int pergunta_oct_hex = rand() % 256
				, resposta_oct_hex;
					/*Caso o valor da variavel tipo_pergunta
					seja 1 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 1) {
						printf("Converte '%o' de octal para"
						" hexadecimal.\n\nResposta: "
						, pergunta_oct_hex);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_oct_hex"*/
						scanf("%x", &resposta_oct_hex);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_oct_hex
						e resposta_oct_hex sejam iguais faz
						o codigo dentro deste "if"*/
						if(pergunta_oct_hex == resposta_oct_hex) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_oct_hex
						e resposta_oct_hex nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_dec_oct" e cria-se a variavel
				"resposta_dec_oct"*/
				unsigned int pergunta_dec_oct = rand() % 256
				, resposta_dec_oct;
					/*Caso o valor da variavel tipo_pergunta
					seja 2 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 2) {
						printf("Converte '%d' de decimal"
						" para octal.\n\nResposta: "
						, pergunta_dec_oct);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_dec_oct"*/
						scanf("%o", &resposta_dec_oct);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_dec_oct
						e resposta_dec_oct sejam iguais
						faz o codigo dentro deste "if"*/
						if(pergunta_dec_oct == resposta_dec_oct) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_dec_oct
						e resposta_dec_oct nao sejam iguais
						faz o código dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_dec_hex" e cria-se a variavel
				"resposta_dec_hex"*/
				unsigned int pergunta_dec_hex = rand() % 256
				, resposta_dec_hex;
					/*Caso o valor da variavel tipo_pergunta
					seja 3 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 3) {
						printf("Converte '%d' de decimal"
						" para hexadecimal.\n\nResposta: "
						, pergunta_dec_hex);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_dec_hex"*/
						scanf("%x", &resposta_dec_hex);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_dec_hex
						e resposta_dec_hex sejam iguais
						faz o codigo dentro deste "if"*/
						if(pergunta_dec_hex == resposta_dec_hex) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n");
						}
						/*Caso as variaveis pergunta_dec_hex
						e resposta_dec_hex nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_hex_oct" e cria-se a variavel
				"resposta_hex_oct"*/
				unsigned int pergunta_hex_oct = rand() % 256
				, resposta_hex_oct;
					/*Caso o valor da variavel tipo_pergunta
					seja 4 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 4) {
						printf("Converte '%x' de hexadecimal"
						" para octal.\n\nResposta: "
						, pergunta_hex_oct);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_hex_oct"*/
						scanf("%o", &resposta_hex_oct);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_hex_oct
						e resposta_hex_oct sejam iguais faz
						o codigo dentro deste "if"*/
						if(pergunta_hex_oct == resposta_hex_oct) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_hex_oct
						e resposta_hex_oct nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_hex_dec" e cria-se a variavel
				"resposta_hex_dec"*/
				int pergunta_hex_dec = rand() % 256, resposta_hex_dec;
					/*Caso o valor da variavel tipo_pergunta
					seja 5 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 5) {
						printf("Converte '%x' de hexadecimal"
						" para decimal.\n\nResposta: "
						, pergunta_hex_dec);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_hex_dec"*/
						scanf("%d", &resposta_hex_dec);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_hex_dec
						e resposta_hex_dec sejam iguais faz
						o codigo dentro deste "if"*/
						if(pergunta_hex_dec == resposta_hex_dec) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_hex_dec
						e resposta_hex_dec nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
			}
			/*Caso o valor da variavel numero_perguntas seja maior ou
			igual a 2 faz o codigo dentro deste "if"*/
			if(numero_perguntas >= 2) {
				printf("Ok aqui vão " "%d" " perguntas, boa "
				"sorte!\n\n", numero_perguntas);
				for(i = 1; i <= numero_perguntas; ++i) {
				/*Gera um numero aleatorio de 0 a 5 e transforma-o
				na variavel "tipo_pergunta"*/
				int tipo_pergunta = rand() % 5;
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_oct_dec" e cria-se a variavel
				"resposta_oct_dec"*/
				int pergunta_oct_dec = rand() % 256, resposta_oct_dec;
					/*Caso o valor da variavel tipo_pergunta
					seja 0 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 0) {
						printf("Converte '%o' de octal "
						"para decimal.\n\nResposta: "
						, pergunta_oct_dec);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_oct_dec"*/
						scanf("%d", &resposta_oct_dec);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_oct_dec
						e resposta_oct_dec sejam iguais
						faz o codigo dentro deste "if"*/
						if(pergunta_oct_dec == resposta_oct_dec) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_oct_dec
						e resposta_oct_dec nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_oct_hex" e cria-se a variavel
				"resposta_oct_hex"*/
				unsigned int pergunta_oct_hex = rand() % 256
				, resposta_oct_hex;
					/*Caso o valor da variavel tipo_pergunta
					seja 1 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 1) {
						printf("Converte '%o' de octal para"
						" hexadecimal.\n\nResposta: "
						, pergunta_oct_hex);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_oct_hex"*/
						scanf("%x", &resposta_oct_hex);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_oct_hex
						e resposta_oct_hex sejam iguais faz
						o codigo dentro deste "if"*/
						if(pergunta_oct_hex == resposta_oct_hex) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_oct_hex
						e resposta_oct_hex nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_dec_oct" e cria-se a variavel
				"resposta_dec_oct"*/
				unsigned int pergunta_dec_oct = rand() % 256
				, resposta_dec_oct;
					/*Caso o valor da variavel tipo_pergunta
					seja 2 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 2) {
						printf("Converte '%d' de decimal"
						" para octal.\n\nResposta: "
						, pergunta_dec_oct);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_dec_oct"*/
						scanf("%o", &resposta_dec_oct);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_dec_oct
						e resposta_dec_oct sejam iguais faz
						o codigo dentro deste "if"*/
						if(pergunta_dec_oct == resposta_dec_oct) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_dec_oct
						e resposta_dec_oct nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_dec_hex" e cria-se a variavel
				"resposta_dec_hex"*/
				unsigned int pergunta_dec_hex = rand() % 256
				, resposta_dec_hex;
					/*Caso o valor da variavel tipo_pergunta
					seja 3 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 3) {
						printf("Converte '%d' de decimal "
						"para hexadecimal.\n\nResposta: "
						, pergunta_dec_hex);
						/*Obtem o valor digitado e transforma-o
						 na variavel "resposta_dec_hex"*/
						scanf("%x", &resposta_dec_hex);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_dec_hex
						e resposta_dec_hex sejam iguais faz
						o codigo dentro deste "if"*/
						if(pergunta_dec_hex == resposta_dec_hex) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_dec_hex
						e resposta_dec_hex nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_hex_oct" e cria-se a variavel
				"resposta_hex_oct"*/
				unsigned int pergunta_hex_oct = rand() % 256
				, resposta_hex_oct;
					/*Caso o valor da variavel tipo_pergunta
					seja 4 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 4) {
						printf("Converte '%x' de hexadecimal "
						"para octal.\n\nResposta: "
						, pergunta_hex_oct);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_hex_oct"*/
						scanf("%o", &resposta_hex_oct);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_hex_oct
						e resposta_hex_oct sejam iguais faz
						o codigo dentro deste "if"*/
						if(pergunta_hex_oct == resposta_hex_oct) {
							//Adiciona 1 a variavel score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_hex_oct
						e resposta_hex_oct nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				/*Gera um numero aleatorio de 0 a 255 e transforma-o
				na variavel "pergunta_hex_dec" e cria-se a variavel
				"resposta_hex_dec"*/
				int pergunta_hex_dec = rand() % 256, resposta_hex_dec;
					/*Caso o valor da variavel tipo_pergunta
					seja 5 faz o codigo dentro deste "if"*/
					if(tipo_pergunta == 5) {
						printf("Converte '%x' de hexadecimal "
						"para decimal.\n\nResposta: "
						, pergunta_hex_dec);
						/*Obtem o valor digitado e transforma-o
						na variavel "resposta_hex_dec"*/
						scanf("%d", &resposta_hex_dec);
						printf("\n");
						while ( getchar() != '\n' );
						/*Caso as variaveis pergunta_hex_dec
						e resposta_hex_dec sejam iguais faz
						o codigo dentro deste "if"*/
						if(pergunta_hex_dec == resposta_hex_dec) {
							//Adiciona 1 à variável score
							score++;
							printf("Certo!\n\n");
						}
						/*Caso as variaveis pergunta_hex_dec
						e resposta_hex_dec nao sejam iguais
						faz o codigo dentro deste "else"*/
						else {
							printf("Errado.\n\n");
						}
					}
				}
			}
			/*Caso o valor da variavel numero_perguntas seja maior ou
			igual a 256 faz o codigo dentro deste "if"*/
			if(numero_perguntas >= 256) {
				printf("Número demasiado elevado, iniciando "
				"auto-destruição . . .\n\n");
			}
			/*Caso as variaveis score e numero_perguntas sejam iguais
			faz o codigo dentro deste "if"*/
			if(score == numero_perguntas) {
				if(numero_perguntas == 0) {
					printf("Se nao queres responder a nenhuma"
					" pergunta porque me iniciaste...\n\n");
				}
				/*Caso a variavel numero_perguntas seja igual a 
				1 faz o codigo dentro deste "if"*/
				if(numero_perguntas == 1)
					printf("Acertaste a pergunta, o teu score"
					" é de apenas %d.\n\n", numero_perguntas);
				/*Caso a variavel numero_perguntas seja maior ou
				igual a 2 faz o codigo dentro deste "if"*/
				if(numero_perguntas >= 2)
					printf("Parabéns! Conseguiste acertar todas"
					" as %d perguntas a que te comprometeste!\n\n"
					, numero_perguntas);
			}
			/*Caso a variavel score seja maior que a variavel 
			numero_perguntas faz o codigo dentro deste "else if"*/
			else if(score > numero_perguntas) {
				printf("Perguntas negativas? Então queres "
				"respostas? Valores positivos por favor!\n\n");
			}
			/*Caso nenhuma das 2 condições imediatamente acima
			se verifiquem faz o código dentro deste "else"*/
			else {
				printf("O teu score final é de %d\n\n", score);
			}
	return 0;
}
