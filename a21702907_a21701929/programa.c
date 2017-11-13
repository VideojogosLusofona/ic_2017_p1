#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){ 
	/* numero_perguntas - numero de perguntas que o utilizador deseja 
	responder*/
	int contador=0, numero_perguntas;

	/* certas - numero de respostas corretas*/
    int certas=0;

    /* resp_oct_dec - resposta da conversão de octal para decimal
       resp_oct_hex - resposta da conversão de octal para hexadecimal
       resp_dec_oct - resposta da conversão de decimal para octal
       resp_dec_hex - resposta da conversão de decimal para hexadecimal
       resp_hex_oct - resposta da conversão de hexadecimal para octal
       resp_hex_dec - resposta da conversão de hexadecimal para decimal*/
    unsigned int resp_oct_dec, resp_oct_hex, resp_dec_oct;
    unsigned int resp_dec_hex, resp_hex_oct, resp_hex_dec;

    srand(time(NULL));


    /* Perguntar ao utilizador o numero de perguntas a  que deseja responder*/
    printf("Número de perguntas: ");
    scanf("%d", &numero_perguntas);

    	/*se o utilizador inserir numero_perguntas menor ou igual 0 ou entao 
    	maior ou igual a 255, o programa vai continuar a pedir numeros ate que 
    	seja diferente desses valores */
    	while (numero_perguntas >= 256 || numero_perguntas <= 0 ){
		printf("Número inválido, insira outro número: ");
		scanf("%d", &numero_perguntas);
			if (numero_perguntas >= 256 || numero_perguntas <=0){
				printf("\n");
				return 0;
			}
    	}

    	/* o ciclo repete-se enquanto o contador for menor ou igual ao 
    	numero_perguntas*/
    	for(contador=1; contador <= numero_perguntas; contador++){
    	/* gerar valores aleatórios para as variáveis*/
    	unsigned int oct_dec = rand() % 255;
    	unsigned int oct_hex = rand() % 255;
    	unsigned int dec_oct = rand() % 255;
    	unsigned int dec_hex = rand() % 255;
    	unsigned int hex_oct = rand() % 255;
    	unsigned int hex_dec = rand() % 255;

    	/* Gerar valores aleatorios entre 0 e 5 para decidir que pergunta faz*/
    	unsigned int pergunta = rand() % 5;

    		switch (pergunta){
				/* caso pergunta = 0, fazer a conversão de octal para decimal*/
    			case 0:
    				printf("Converte 0" "%o" " em base 10: ", oct_dec);
					scanf("%d", &resp_oct_dec);
						if(oct_dec == resp_oct_dec) {
							printf("Certo\n\n");
							certas++;
						}
						else {
							printf("Errado\n\n");
						}
				break;
    			
				/* caso pergunta = 1, fazer a conversão de octal para 
				hexadecimal*/
    			case 1:
    				printf("Converte 0" "%o" " em base 16: ", oct_hex);
					scanf("%x", &resp_oct_hex);
						if(oct_hex == resp_oct_hex) {
							printf("Certo\n\n");
							certas++;
						}
						else {
							printf("Errado\n\n");
						}
				break;

				/* caso pergunta = 2, fazer a conversão de decimal para octal*/
				case 2:
    				printf("Converte " "%d" " em base 8: ", dec_oct);
					scanf("%o", &resp_dec_oct);
						if(dec_oct == resp_dec_oct) {
							printf("Certo\n\n");
							certas++;
						}
						else {
							printf("Errado\n\n");
						}
				break;

				/* caso pergunta = 3, fazer a conversão de decimal para 
				hexadecimal*/
				case 3:
    				printf("Converte " "%d" " em base 16: ", dec_hex);
					scanf("%x", &resp_dec_hex);
						if(dec_hex == resp_dec_hex) {
							printf("Certo\n\n");
							certas++;
						}
						else {
							printf("Errado\n\n");
						}
				break;

				/* caso pergunta = 4, fazer a conversão dehexadecimal para 
				octal*/
				case 4:
    				printf("Converte 0x" "%x" " em base 8: ", hex_oct);
					scanf("%o", &resp_hex_oct);
						if(hex_oct == resp_hex_oct) {
							printf("Certo\n\n");
							certas++;
						}
						else {
							printf("Errado\n\n");
						}
				break;

				/* caso pergunta = 5, fazer a conversão de hexadecimal para 
				decimal*/
				case 5:
    				printf("Converte 0x" "%x" " em base 10: ", hex_dec);
					scanf("%d", &resp_hex_dec);
						if(hex_dec == resp_hex_dec) {
							printf("Certo\n\n");
							certas++;
						}
						else {
							printf("Errado\n\n");
						}
				break;
			}	
    	}

	/*Dizer em quantas perguntas é que o utilizador acertou*/
    printf("Acertaste em %d resposta(s) num total de %d pergunta(s).\n", certas,
    		numero_perguntas); 
    /* Dizer adeus */
	return 0;
}
