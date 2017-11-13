#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int perguntaNums(); //Função que pergunta o nº de perguntas que quer responder
int geraValor(); //Função que gera valor aleatório, positivo e limitado a 8bits
void geraBases(int* baseOrig, int* baseConv); //Função que gera a base  
                                              //original e a base a converter
int perguntaEVerifica(int val, int baseOrig, int baseConv); //Função que 
                                        //pergunta e verifica se está correto

int main() {
    srand(time(NULL)); //Inicializador para a função rand()
    int numPerguntas; //Nº de perguntas que o utilizador quer responder
    int val; //Valor gerado / valor a converter
    int baseOrig, baseConv; //Base original e base a converter
    int resposta; //Valor da resposta (booleano)
    int nresposta = 0; //Contador de respostas
    
    
    printf("Bem-vindo ao jogo 'Bases Numéricas'\n");
    numPerguntas = perguntaNums(); //Chama a função perguntaNums()
    
    for (int i = 0; i < numPerguntas; i++) { //Corre até chegar ao nº dado
        val = geraValor(); //Chama a função geraValor()
        geraBases(&baseOrig, &baseConv); //Chama a função geraBases() e 
                        //indica o local onde estão guardadas as variáveis
        resposta = perguntaEVerifica(val, baseOrig, baseConv); //Chama a função
                        //perguntaEVerifica() e envia as variáveis necessárias
        
        if (resposta == 1) { //Mostra o output conforme o valor retornado
            nresposta++; //Caso esteja correto adiciona 1 resposta correta
            printf("Certo !\n\n");
        } else {
            printf("Errado !\n\n");
        }
    }

    printf("\nAcertaste %d vez(es)\n", nresposta);
   
    return 0;
}

int perguntaNums() {
    int numPerguntas; //Número de perguntas
    int valorInv = 0; //Valor Inválido
    
    do { //Vai pedir um input ao utilizador até que seja um número e seja positivo
        printf("Introduza o número de perguntas a que deseja responder: ");
        if (scanf("%d", &numPerguntas) != 1) { //Verifica se o input é um número
            printf("Por favor introduza um valor numérico\n\n");
            while ((getchar()) != '\n'); // Apaga o input
            valorInv = 1;
        } else {
            valorInv = 0;
            if (numPerguntas < 1) { //Mostra o print caso o número seja menor que 1
                printf("Por favor introduza um valor positivo\n\n");
            }
        }
    } while (numPerguntas < 1 || valorInv == 1);
    
    return numPerguntas;
}

int geraValor() {
    int r = rand() % 256; //Gera um valor semi-aleatório entre 0 e 255 
                            // (8 bits - unsigned char)
    return r;
}

void geraBases(int* baseOrig, int* baseConv) {
    int bases[3] = {8, 10, 16}; //Array que tem as bases possíveis
    int geraBO, geraBC; //Base original e base convertida geradas
    int baseO; //Auxiliar que guarda em string para alterar para int
    int l = 3; //tamanho do array
    geraBO = rand() % 3; //Gera a base original
    geraBC = rand() % 2; //Gera a base convertida
    
    baseO = bases[geraBO];
    *baseOrig = bases[geraBO]; //Envia o valor da base original para 
                               //o apontador respetivo 
    
    for (int i = 0; i < l; i++) { //Remove a base original do array para que 
        while (i < l && bases[i]==baseO) {  //não possa aparecer conversão de
            for (int j = i; j < l; j++) {   //de 10>10 / 8>8 / 16>16
                bases[j] = bases[j+1];
            }
            l--; //Diminui o tamanho do array
        }
    }
    
    *baseConv = bases[geraBC]; //Envia o valor da base a converter para
                               //o apontador respetivo 
}

int perguntaEVerifica(int val, int baseOrig, int baseConv) {
    unsigned int resposta; //Resposta dada pelo utilizador à conversão
    unsigned int valor = val; //Converte o valor original para comparar
    int x;
    
    switch(baseOrig) { //Faz a pergunta ao utilizador seguindo o caminho
        case 8:        //mais indicado conforme a base original
            printf("\nConverte 0%o em base %d: ", val, baseConv);
            break;
        case 10:
            printf("\nConverte %d em base %d: ", val, baseConv);
            break;
        case 16:
            printf("\nConverte 0x%x em base %d: ", val, baseConv);
            break;
    }
    
    switch(baseConv) { //Recebe o valor introduzido seguindo o caminho
        case 8:        //mais indicado conforme a base a converter
            scanf("%o", &resposta);
            break;
        case 10:
            scanf("%u", &resposta);
            break;
        case 16:
            scanf("%x", &resposta);
            break;
    }

    if (valor == resposta){ //Caso a resposta esteja correta altera o valor 
        x = 1;              //a retornar para 1, senão envia 0
    }
    
    return x;
}