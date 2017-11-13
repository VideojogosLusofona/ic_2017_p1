#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //-------Variaveis-------------
    unsigned int perguntas; // Valor correto da resposta das perguntas colocadas
    int answer; // Valor de resposta itroduzido pelo utilizador
    int respostas = 0; // Contador de respostas corretas
    int x; // Numero de perguntas a efetuar ao utilizator
    //-----------------------------
    printf("Numero de perguntas?\n");
    scanf("%d", &x);                                   
    printf("\n");
    //-----------------------------
    srand((unsigned) time(NULL)); //Funçao Random em funçao to tempo
    //-----------------------------
    for (int i=1; i <= x; i++){ //contagem do numero de perguntas introduzido
        perguntas = (rand() % 255) + 1; //randomiza o de valores a converter      
        int r2 = (rand() % 6) + 1; //randomiza o de perguntas 
	
		//Diferentes opcoes de perguntas a ser randomizadas:
        switch(r2){
            case 1:
                printf("Traduza o Decimal %d para Octal\n", perguntas); 
                printf("Resposta: ");
                scanf("%o", &answer);
            break;
            case 2:
                printf("Traduza o Decimal %d para Hexadecimal\n", perguntas);     
                printf("Resposta: ");
                scanf("%x", &answer);
            break;
            case 3:
                printf("Traduza o Octal O%o para Decimal\n", perguntas);   
                printf("Resposta: ");
                scanf("%u",&answer);
            break;
            case 4:
                printf("Traduza o Octal O%o para Hexadecimal\n", perguntas);     
                printf("Resposta: ");
                scanf("%x", &answer);
            break;
            case 5:
                printf("Traduza o Hexadecimal 0x%x para Decimal\n", perguntas);
                printf("Resposta: ");
                scanf("%u",&answer);
            break;
            case 6:
                printf("Traduza o Hexadecimal 0x%x para Octal\n", perguntas);    
                printf("Resposta: ");
                scanf("%o", &answer);
            break;
        }
		//Compara o da resposta introduzida pelo utilizador com a resposta correta...
		//... para cada um dos casos de perguntas acima
        switch(r2){
            case 1:
                if(perguntas == answer){
                    respostas++;  //incremento para contagem de respostas corretas
                    printf("Correto!\n");
                } else {
                    printf("Errado, a resposta correta seria %d\n", perguntas);
                }
            break;
            case 2:
                if(perguntas == answer){
                   respostas++;
                   printf("Correto!\n");
                } else {
                   printf("Errado, a resposta correta seria %x\n", perguntas);
                }
            break;
            case 3:
                if(perguntas == answer){
                  respostas++;
                  printf("Correto!\n");
                } else {
                  printf("Errado, a resposta correta seria %d\n", perguntas);
                }
            break;
            case 4:
                if(perguntas == answer){
                   respostas++;
                   printf("Correto!\n");
                } else {
                  printf("Errado, a resposta correta seria %x\n", perguntas);
                }
            break;
            case 5:
                if(perguntas == answer){
                  respostas++;
                  printf("Correto!\n");
                } else {
                  printf("Errado, a resposta correta seria %d\n", perguntas);
                }
            break;
            case 6:
                if(perguntas == answer){
                  respostas++;
                  printf("Correto!\n");
                } else {
                  printf("Errado, a resposta correta seria %o\n", perguntas);
                }
            break;
        }
    }
	//Conclusao e apresentacao de n de respostas corretas no total de perguntas
    printf("Acertou %d perguntas em %d\n", respostas, x);
    return 0;
}
