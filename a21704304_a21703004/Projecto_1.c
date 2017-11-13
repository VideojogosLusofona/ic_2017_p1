#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
srand((unsigned int) time(NULL));
unsigned int N_perguntas, Resposta, Respostas_certas = 0;

		
printf("Quantas perguntas queres responder?: ");
scanf("%u", &N_perguntas);
	
	for(unsigned int questoes = 1; questoes <= N_perguntas; questoes++) {
	unsigned int Tipo_questao= rand() % 6; //atribui numeros aleatorios de 0 a 5
	unsigned int Valor_perguntas=rand() % 256; //atribui numeros aleatorios de 0 a 255
		
		if(Tipo_questao == 0) {
		printf("Converte %d de base 10 para base 16: " , Valor_perguntas);
		scanf("%x",&Resposta);// recebe valor em hexadecimal
			if(Valor_perguntas == Resposta){
				Respostas_certas++;
				printf("Certo!\n");
			}else{
				printf("Errado!\n");
			}	
		} else if(Tipo_questao == 1){
		printf("Converte %d de base 10 para base 8: " , Valor_perguntas);
		scanf("%o", &Resposta);// recebe valor em octal
			if(Valor_perguntas == Resposta){
				Respostas_certas++;
				printf("Certo!\n");
			}else{
				printf("Errado!\n");
			}	
		}else if(Tipo_questao == 2){
		printf("Converte %x de base 16 para base 10: " , Valor_perguntas);
		scanf("%u", &Resposta);// recebe valor em decimal
			if(Valor_perguntas == Resposta){
				Respostas_certas++;
				printf("Certo!\n");
			}else{
				printf("Errado!\n");
			}	
		}else if(Tipo_questao == 3){
		printf("Converte %x de base 16 para base 8: " , Valor_perguntas);
		scanf("%o", &Resposta);// recebe valor em octal
			if(Valor_perguntas == Resposta){
				Respostas_certas++;
				printf("Certo!\n");
			}else{
				printf("Errado!\n");
			}	
		}else if(Tipo_questao == 4){
		printf("Converte %o de base 8 para base 16: " , Valor_perguntas);
		scanf("%x", &Resposta);// recebe valor em hexadecimal
			if(Valor_perguntas == Resposta){
				Respostas_certas++;
				printf("Certo!\n");
			}else{
				printf("Errado!\n");
			}	
		}else {
		printf("Converte %o de base 8 para base 10: " , Valor_perguntas);
		scanf("%u", &Resposta);// recebe valor em decimal
			if(Valor_perguntas == Resposta){
				Respostas_certas++;
				printf("Certo!\n");
			}else{
				printf("Errado!\n");
			}	
		}
	}
printf("Você acertou %d em %d\n",Respostas_certas,N_perguntas);	
return 0;
}

