//Bibliotecas C
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	//Gera numeros aleatorios
	srand(time(NULL));
	
	int nr_perg, contador=1, pontuacao=0;
	//Imprime quantas perguntas o utilizador quer responder
	printf("Quantas perguntas deseja responder? ");
	//Interpreta o numero de perguntas escolhidas pelo utilizador
	scanf("%d", &nr_perg);
	//Programa corre ate terminar o numero de perguntas escolhidas
	while(contador <= nr_perg) {
		/*Gera um numero aleatorio de 1 a 6 para selecionar uma das
		  perguntas aleatoriamente*/
		int pergunta = rand() % 6;
			//Mostra a pergunta quando o numero aleatorio for 1
			if(pergunta == 1) {
				//E escolhido um numero aleatorio entre 0 e 255			
				unsigned int pergunta1 = rand() % 256, resposta1;
					/*Imprime a pergunta e o numero aleatorio
					  gerado na linha acima*/					
					printf("Converte %o de Octal para"
					       " Hexadecimal : ", pergunta1);
					//Interpreta a resposta do utilizador					
					scanf("%x", &resposta1);
					/*Compara a resposta correta com
					  a resposta do utilizador*/
					if(pergunta1 == resposta1) {
						/*Imprime uma mensagem se o
						utilizador responder corretamente*/					
						printf("Certo \n\n");
						//Soma uma resposta correta ao contadorador						
						pontuacao++;
					}
					else {
						/*Imprime a mensagem se o
						  utilizador falhar a resposta*/
						printf("Errado \n\n");
					} 
			//Soma um a variavel contador
			contador++;
			}
			//Mostra a pergunta quando o numero aleatorio for 2
			if(pergunta == 2) {
				//E escolhido um numero aleatorio entre 0 e 255
				int pergunta2 = rand() % 256, resposta2;
					/*Imprime a pergunta e o numero aleatorio
					  gerado na linha acima*/
					printf("Converte %o de Octal para"
					       " Decimal : ", pergunta2);
					//Interpreta a resposta do utilizador					
					scanf("%d", &resposta2);
					/*Compara a resposta correta com
					  a resposta do utilizador*/
					if(pergunta2 == resposta2) {
						/*Imprime uma mensagem se o
						utilizador responder corretamente*/
						printf("Certo \n\n");
						//Soma uma resposta correta ao contadorador
						pontuacao++;
					}
					else {
						/*Imprime a mensagem se o
						  utilizador falhar a resposta*/
						printf("Errado \n\n");
					} 
			//Soma um a variavel contador
			contador++;
			}
			//Mostra a pergunta quando o numero aleatorio for 3			
			if(pergunta == 3) {
				//E escolhido um numero aleatorio entre 0 e 255				
				int pergunta3 = rand() % 256, resposta3;
					/*Imprime a pergunta e o numero aleatorio
					  gerado na linha acima*/
					printf("Converte %x de Hexadecimal para"
					       " Decimal : ", pergunta3);
					//Interpreta a resposta do utilizador
					scanf("%d", &resposta3);
					/*Compara a resposta correta com
					  a resposta do utilizador*/
					if(pergunta3 == resposta3) {
						/*Imprime uma mensagem se o
						utilizador responder corretamente*/						
						printf("Certo \n\n");
						//Soma uma resposta correta ao contadorador
						pontuacao++;
					}
					else {
						/*Imprime a mensagem se o
						  utilizador falhar a resposta*/
						printf("Errado \n\n");
					} 
			//Soma um a variavel contador
			contador++;
			}
			//Mostra a pergunta quando o numero aleatorio for 4		
			if(pergunta == 4) {
				//E escolhido um numero aleatorio entre 0 e 255				
				unsigned int pergunta4 = rand() % 256, resposta4;
					/*Imprime a pergunta e o numero aleatorio
					  gerado na linha acima*/
					printf("Converte %d de Decimal para"
						   " Hexadecimal : ", pergunta4);
					//Interpreta a resposta do utilizador
					scanf("%x", &resposta4);
					/*Compara a resposta correta com
					  a resposta do utilizador*/
					if(pergunta4 == resposta4) {
						/*Imprime uma mensagem se o
						utilizador responder corretamente*/					
						printf("Certo \n\n");
						//Soma uma resposta correta ao contadorador
						pontuacao++;
					}
					else {
						/*Imprime a mensagem se o
						  utilizador falhar a resposta*/
						printf("Errado \n\n");
					} 
			//Soma um a variavel contador
			contador++;
			}
			//Mostra a pergunta quando o numero aleatorio for 5
			if(pergunta == 5) {
				//E escolhido um numero aleatorio entre 0 e 255				
				unsigned int pergunta5 = rand() % 256, resposta5;
					/*Imprime a pergunta e o numero aleatorio
					  gerado na linha acima*/						
					printf("Converte %x de Hexadecimal "
					       "para Octal : ", pergunta5);
					//Interpreta a resposta do utilizador
					scanf("%o", &resposta5);
					/*Compara a resposta correta com
					  a resposta do utilizador*/
					if(pergunta5 == resposta5) {
						/*Imprime uma mensagem se o
						utilizador responder corretamente*/					
						printf("Certo \n\n");
						//Soma uma resposta correta ao contadorador						
						pontuacao++;
					}
					else {
						/*Imprime a mensagem se o
						  utilizador falhar a resposta*/
						printf("Errado \n\n");
					} 
			//Soma um a variavel contador
			contador++;
			}
			//Mostra a pergunta quando o numero aleatorio for 6			
			if(pergunta == 6) {
				//E escolhido um numero aleatorio entre 0 e 255				
				unsigned int pergunta6 = rand() % 256, resposta6;
					/*Imprime a pergunta e o numero aleatorio
					  gerado na linha acima*/
					printf("Converte %d de Decimal "
					       "para Octal : ", pergunta6);
					//Interpreta a resposta do utilizador
					scanf("%o", &resposta6);
					/*Compara a resposta correta com
					  a resposta do utilizador*/				
					if(pergunta6 == resposta6) {
						/*Imprime uma mensagem se o
						utilizador responder corretamente*/					
						printf("Certo \n\n");
						//Soma uma resposta correta ao contadorador
						pontuacao++;
					}
					else {
						/*Imprime a mensagem se o
						  utilizador falhar a resposta*/
						printf("Errado \n\n");
					} 
			//Soma um a variavel contador
			contador++;
			}
	}
	//Imprime uma frase e o pontuacao final de respostas corretas
	printf("Certas: %d. \n Parabens \n", pontuacao);
//Devolve ao sistema o valor 0
return 0;

}
//Fim :)
	
