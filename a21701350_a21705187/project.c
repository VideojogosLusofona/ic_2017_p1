#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

	//Definir variáveis
	srand(time(NULL));
	int numberQuestions = 0, input, aux=0;
	unsigned int number = 0, question, score = 0, answer = 0;
	char string[100]= "0";

	//Número de questões
	printf("\nInsira o número de questões a que deseja responder: ");

	fgets(string, 100, stdin);
	sscanf(string, "%d", &numberQuestions);
	printf("Número de questões: %d\n\n", numberQuestions);

	printf("As suas respostas devem ter um valor máximo de 8 bits.\n\n");

	//Imprime o número solicitado de questões
	for (int i = 0; i < numberQuestions; ++i){

		//Gerar um número aleatório entre 0 e 255.
		number = (rand()%0xFF);
		//Gerar um número aleatório entre 0 e 5 que selecciona uma das questões.
		question = (rand()%6);

		//Cada case imprime uma pergunta, recebe o input e confirma se é válido.
		switch(question){

			case 0:

				do{ //Loop para validar a resposta
					printf("Converte o número octal %o para base 10: ", number); //Octal => Decimal
					
					fgets(string, 100, stdin);
					aux = sscanf(string, "%d", &input);
					
					if (input >= 0x0 && input <= 0xFF){
						break;
					}
					else{
						printf("\nNúmero inválido, tente novamente.\n\n");
						aux = 0;
						
					}
				}while(aux != 1);

				sscanf(string, "%d", &answer);

				break;

			case 1:
				do{
					printf("Converte o número octal %o para base 16: ", number); //Octal => Hexadecimal
					fgets(string, 100, stdin);
					
					aux = sscanf(string, "%d", &input);
					
					if (input >= 0x0 && input <= 0xFF){
						break;
					}
					else{
						printf("\nNúmero inválido, tente novamente.\n\n");
						aux = 0;
						
					}
				}while(aux != 1);

				sscanf(string, "%x", &answer);

				break;

			case 2:
				do{
					printf("\nConverte o número decimal %d para base 8: "
																	  , number); //Decimal => Octal
					fgets(string, 100, stdin);
					
					aux = sscanf(string, "%d", &input);
					
					if (input >= 0x0 && input <= 0xFF){
						break;
					}
					else{
						printf("\nNúmero inválido, tente novamente.\n\n");
						aux = 0;
						 
					}
				}while(aux != 1);

				sscanf(string, "%o", &answer);
				
				break;

			case 3:
				do{
					printf("\nConverte o número decimal %d para base 16: "
																	  , number); //Decimal => Hexadecimal
					fgets(string, 100, stdin);	
					
					aux = sscanf(string, "%d", &input);
					
					if (input >= 0x0 && input <= 0xFF){
						break;
					}
					else{
						printf("\nNúmero inválido, tente novamente.\n\n");
						aux = 0;
						 
					}
				}while(aux != 1);	

				sscanf(string, "%x", &answer);

				break;

			case 4:
				do{
					printf("\nConverte o número hexadecimal %x para base 8: "
																	  , number); //Hexadecimal => Octal
					fgets(string, 100, stdin);
					
					aux = sscanf(string, "%d", &input);
					
					if (input >= 0x0 && input <= 0xFF){
						break;
					}
					else{
						printf("\nNúmero inválido, tente novamente.\n\n");
						aux = 0;
						 
					}
				}while(aux != 1);
			
				sscanf(string, "%o", &answer);

				break;

			case 5:
				do{
					printf("\nConverte o número hexadecimal %x para base 10: "
																	  , number); //Hexadecimal => Decimal
					fgets(string, 100, stdin);
					
					aux = sscanf(string, "%d", &input);
					
					if (input >= 0x0 && input <= 0xFF){
						break;
					}
					else{
						printf("\nNúmero inválido, tente novamente.\n\n");
						aux = 0;
						 
					}
				}while(aux !=  1);

				sscanf(string, "%d", &answer);

				break;

			default:
				printf("Erro no programa\n.");
				
		}

		//Confirma se a resposta está correcta. Se estiver, incrementa a pontuação do utilizador.
		if (number == answer){
			printf("\nCerto!\n\n");
			score++;

		}else{
			printf("\nErrado!\n\n");
		
		}
		
	}

	//Imprime a pontuação do jogador.
	printf("Número de respostas correctas: %d\n", score);

	return 0;
}

