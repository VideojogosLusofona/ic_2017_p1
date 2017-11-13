//Bibliotecas de funções
#include <stdio.h>   //Fornece funções para ações de entrada e saida de dados
#include <stdlib.h>  //Define funções e macros genéricas
#include <time.h>    //Fornece funções para gestão de tempo e datas

int main() { 

    srand(time(NULL));       //Implementa a semente do gerador aleatório
   
    unsigned int pergunta;
    unsigned int pontos=0;
    unsigned int valor;
    unsigned int resposta=0;
    int aux=0;

        //Loop para validar a resposta
        do {
            //Pedir número de perguntas
            printf("\nEscolhe o número de perguntas: ");
            scanf("%d", &valor);

            if (valor >=1 && valor <= 100) {
                aux=1;
                break;
            }
            else {
                printf("Número inválido, tente novamente.\n");
                aux=0;
            }
        }
        while(aux != 1);

    for(int i=0; i<valor; i++) {
        pergunta= rand()%6;      //Limita o número de cases
        resposta= rand()%255;    //Limita a números de 8bits
            
        //Gerador de perguntas em modo aleatório
        switch(pergunta) {
             
            case 0:
            //Octal - décimal
                printf("Converte %o (8) em base 10: ",resposta);
                scanf("%u", &pergunta);
            if (pergunta == resposta) {
                pontos++;
                printf("Certo!\n\n");
            }
            else {
                printf("Errado!\n\n");
            }

            break;
            
            case 1:
            //Octal - hexadécimal
                printf("Converte %o (8) em base 16: ",resposta);
                scanf("%x", &pergunta);
            if (pergunta == resposta) {
                pontos++;
                printf("Certo!\n\n");
            }
            else {
                printf("Errado!\n\n");
            }

            break;

            case 2:
            //Décimal - octal
                printf("Converte %u (10) em base 8: ",resposta);
                scanf("%o", &pergunta);
            if (pergunta == resposta) {
                pontos++;
                printf("Certo!\n\n");
            }
            else {
                printf("Errado!\n\n");
            }

            break;

            case 3:
            //Décimal - hexadécimal
                printf("Converte %u (10) em base 16: ",resposta);
                scanf("%x", &pergunta);
            if (pergunta == resposta) {
                pontos++;
                printf("Certo!\n\n");
            }
            else {
                printf("Errado!\n\n");
            }

            break;

            case 4:
            //Hexadécimal - décimal
                printf("Converte %x (16) em base 10: ",resposta);
                scanf("%u", &pergunta);
            if (pergunta == resposta) {
                pontos++;
                printf("Certo!\n\n");
            }
            else {
                printf("Errado!\n\n");
            }

            break;

            case 5:
            //Hexadécimal - octal
                printf("Converte %x (16) em base 8: ",resposta);
                scanf("%o", &pergunta);
            if (pergunta == resposta) {
                pontos++;
                printf("Certo!\n\n");
            }
            else {
                printf("Errado!\n\n");
            }

            break;
        }
  }

  printf("Tiveste %d perguntas corretas de %d!\n", pontos, valor);
    return 0;
}
