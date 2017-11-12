#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void aleatorios(int *count);
int typeresposta (int bas2);

int main(){

	int perguntas;
	
	int count = 0;	

	printf("Quantas perguntas queres? ");

	scanf("%d", &perguntas);

	//Criar o numero de perguntas com dado que insire o user
	for (int i=0; i < perguntas; i++){

		aleatorios(&count);

	}

	if(count == 1){

		printf("Acertaste %d vez!\n", count);

	}else{

		printf("Acertaste %d vezes!\n", count);
	}

	return 0;
}

//Funçao que cria numeros aleatorios para fazer as perguntas do jogo.
void aleatorios(int *count) {

	int bas2;

	int resposta;

	srand((unsigned int) time(NULL));

	int num = rand()%256;

	int base1 = rand()%3;

	int base2 = rand()%3;

	//A base(hexa, deci ou octal) do 1º numero nao pode ser igual a do 2º, pelo que troco a 2ª se sao iguais.
	while(base1 == base2){
	
		base2 = rand()%3;

	}

	//Switch para dar valor o numero aleatorio, neste caso vai a ser a base(hexa, deci ou octal) do 2º numero da pergunta
	switch(base2){

		case 0:
			bas2 = 16;
		break;

		case 1:
			bas2 = 8;
		break;

		case 2:
			bas2 = 10;
		break;

        	default:

            		printf("Erro");

	}
	
	//Switch para eleger a base(hexa, deci ou octal) do 1º numero da pergunta. 
	switch(base1) {

        	case 0:
			printf("Converte %#x em base %d: ", num, bas2);

			resposta = typeresposta(bas2);

			//Se a resposta do user for igual ao numero da pergunta somo o contador dos acertos totais.
			if(resposta == num){
				printf("Certo\n"); 
				(*count)++;
			}else{
				printf("Errado\n"); 
			}

		break;

        	case 1:
			printf("Converte %#o em base %d: ", num, bas2);

			resposta = typeresposta(bas2);

			if(resposta == num){
				(*count)++;
			}else{
				printf("Errado\n"); 
			}


		break;

        	case 2:
			printf("Converte %d em base %d: ", num, bas2);

			resposta = typeresposta(bas2);

			if(resposta == num){

				printf("Certo\n"); 
				(*count)++;
			}else{
				printf("Errado\n"); 
			}


		break;

        	default:

            		printf("Erro");
    	}
	

}

//Funçao que vai a devolver a resposta do user se e hexadecimal, decimal ou octal.
int typeresposta (int bas2) {

	int resposta;
	
	if(bas2 == 16){

		scanf("%x", &resposta);

	}else if (bas2 == 8){

		scanf("%o", &resposta);

	}else{

		scanf("%d", &resposta);

	}
	return resposta;

}
