//Bibliotecas de C utilizadas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	//Gera uma seed de numeros aleatoriamente
	srand(time(NULL));
	
	int numero_perguntas, cont=1, score=0;
	//Imprime no ecra a pergunta de quantas perguntas quer o utilizador
	printf("Ola Jogador quantas perguntas queres responder ? ");
	/*Le o que o utilizador escreve para definir o numero de perguntas a 
	  efetuar*/
	scanf("%d", &numero_perguntas);
	/*Enquanto o numero de perguntas for menor ou igual ao numero selecionado
	  pelo utilizador continua a correr em ciclo*/
	while(cont <= numero_perguntas) {
		/*Gera um numero aleatorio de 0 a 5, sendo este que faz com que 
		  seja apresentada uma pergunta aleatoria*/
		int pergunta = rand() % 6;
			/*Mostra a pergunta abaixo, quando o numero aleatorio 
			  gerado pela linha acima e 0 */
			if(pergunta == 0) {
				//Escolhe aleatoriamente um numero de 0 a 255
				int pergunta0 = rand() % 256, resposta0;
					/*Imprime no ecra a pergunta, imprimindo
					  tambem o numero aleatorio gerado pela
					  linha em cima*/
					printf("Converte %o de Octal para"
					       " Decimal -> ", pergunta0);
					//Le a resposta do utilizador					
					scanf("%d", &resposta0);
					/*Compara a resposta do utilizador
					  com a resposta correta*/
					if(pergunta0 == resposta0) {
						/*Imprime no ecra a mensagem, 
						  quando a condicao anterior
						  e verdadeira*/						
						printf("Boa Campeao " 
						       "Acertaste \n\n");
						/*Adiciona um ao contador de 
						  de respostas corretas(score)*/
						score++;
					}
					else {
						/*Imprime a mensagem no ecra,
						  quando a condicao anterior
						  e falsa*/						
						printf("Pff nao vales nada"
						       " \n\n");
					} 
			//Adiciona 1 a variavel cont
			cont++;
			}
			/*Mostra a pergunta abaixo, quando o numero aleatorio 
			  gerado e 1 */
			if(pergunta == 1) {
				//Escolhe aleatoriamente um numero de 0 a 255				
				unsigned int pergunta1 = rand() % 256, resposta1;
					/*Imprime no ecra a pergunta, imprimindo
					  tambem o numero aleatorio gerado pela
					  linha em cima*/					
					printf("Converte %o de Octal para"
					       " Hexadecimal -> ", pergunta1);
					//Le a resposta do utilizador					
					scanf("%x", &resposta1);
					/*Compara a resposta do utilizador
					  com a resposta correta*/
					if(pergunta1 == resposta1) {
						/*Imprime no ecra a mensagem, 
						  quando a condicao anterior
						  e verdadeira*/						
						printf("Boa SAM \n\n");
						/*Adiciona um ao contador de 
						  de respostas corretas(score)*/						
						score++;
					}
					else {
						/*Imprime a mensagem no ecra,
						  quando a condicao anterior
						  e falsa*/
						printf("Bem Podre nem sabes "
						       "isso xD \n\n");
					} 
			//Adiciona 1 a variavel cont			
			cont++;
			}
			/*Mostra a pergunta abaixo, quando o numero aleatorio 
			  gerado e 2 */
			if(pergunta == 2) {
				//Escolhe aleatoriamente um numero de 0 a 255				
				unsigned int pergunta2 = rand() % 256, resposta2;
					/*Imprime no ecra a pergunta,
					  com o numero aleatorio gerado pela
					  linha em cima*/						
					printf("Converte %x de Hexadecimal "
					       "para Octal -> ", pergunta2);
					//Le a resposta do utilizador
					scanf("%o", &resposta2);
					while ( getchar() != '\n' );
					/*Compara a resposta do utilizador
					com a resposta correta*/
					if(pergunta2 == resposta2) {
						/*Imprime no ecra a mensagem, 
						  quando a condicao anterior
						  e verdadeira*/						
						printf("Na mouche \n\n");
						/*Adiciona um ao contador de 
						  de respostas corretas(score)*/						
						score++;
					}
					else {
						/*Imprime a mensagem no ecra,
						  quando a condicao anterior
						  e falsa*/
						printf("Volta para o "
						       "Farmville \n\n");
					} 
			//Adiciona 1 a variavel cont
			cont++;
			}
			/*Mostra a pergunta abaixo, quando o numero aleatorio 
			  gerado e 3 */			
			if(pergunta == 3) {
				//Escolhe aleatoriamente um numero de 0 a 255				
				int pergunta3 = rand() % 256, resposta3;
					/*Imprime no ecra a pergunta,
					  com o numero aleatorio gerado pela
					  linha em cima*/
					printf("Converte %x de Hexadecimal para"
					       " Decimal -> ", pergunta3);
					//Le a resposta do utilizador
					scanf("%d", &resposta3);
					/*Compara a resposta do utilizador
					  com a resposta correta*/
					if(pergunta3 == resposta3) {
						/*Imprime no ecra a mensagem, 
						  quando a condicao anterior
						  e verdadeira*/						
						printf("Estas bala tu  \n\n");
						/*Adiciona um ao contador de 
						  de respostas corretas(score)*/
						score++;
					}
					else {
						/*Imprime a mensagem no ecra,
						  quando a condicao anterior
						  e falsa*/
						printf("ERROUUUU \n\n");
					} 
			//Adiciona 1 a variavel cont
			cont++;
			}
			/*Mostra a pergunta abaixo, quando o numero aleatorio 
			  gerado e 4 */			
			if(pergunta == 4) {
				//Escolhe aleatoriamente um numero de 0 a 255				
				unsigned int pergunta4 = rand() % 256, resposta4;
					/*Imprime no ecra a pergunta,
					  com o numero aleatorio gerado pela
					  linha em cima*/
					printf("Converte %d de Decimal para"
					" Hexadecimal -> ", pergunta4);
					//Le a resposta do utilizador
					scanf("%x", &resposta4);
					/*Compara a resposta do utilizador
					  com a resposta correta*/
					if(pergunta4 == resposta4) {
						/*Imprime no ecra a mensagem, 
						  quando a condicao anterior
						  e verdadeira*/						
						printf("Este individuo/a"
						       " nao erra \n\n");
						/*Adiciona um ao contador de 
						  de respostas corretas(score)*/
						score++;
					}
					else {
						/*Imprime a mensagem no ecra,
						  quando a condicao anterior
						  e falsa*/
						printf("NAO . \n\n");
					} 
			//Adiciona 1 a variavel cont
			cont++;
			}
			/*Mostra a pergunta abaixo, quando o numero aleatorio 
			  gerado e 5 */			
			if(pergunta == 5) {
				//Escolhe aleatoriamente um numero de 0 a 255				
				unsigned int pergunta5 = rand() % 256, resposta5;
					/*Imprime no ecra a pergunta,
					com o numero aleatorio gerado pela
					linha em cima*/
					printf("Converte %d de Decimal "
					       "para Octal -> ", pergunta5);
					//Le a resposta do utilizador
					scanf("%o", &resposta5);
					while ( getchar() != '\n' );
					/*Compara a resposta do utilizador
					com a resposta correta*/					
					if(pergunta5 == resposta5) {
						/*Imprime no ecra a mensagem, 
						  quando a condicao anterior
						  e verdadeira*/						
						printf("Esta era facil... \n\n");
						/*Adiciona um ao contador de 
						  de respostas corretas(score)*/
						score++;
					}
					else {
						/*Imprime a mensagem no ecra,
						  quando a condicao anterior
						  e falsa*/
						printf("Esta mal .  \n\n");
					} 
			//Adiciona 1 a variavel cont			
			cont++;
			}
	}
	/*Imprime no ecra o contador do score, ou seja o numero de respostas 
	  dadas coretamente*/
	printf("Pronto conseguiste %d. \n Estas feliz ????????? \n", score);
	//Devolve o valor 0 ao sistema
	return 0;

}

	
