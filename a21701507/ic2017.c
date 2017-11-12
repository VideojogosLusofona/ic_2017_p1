#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXRANDOMNUMBER 256 // limitando o numero máximo do rand()

int main(){
  unsigned int nPerguntas,numero,resposta,nAcertos; // declaração das variáveis
  srand((unsigned int)time(NULL));
  printf("Digite a quantidade de perguntas que pretendes responder:");
  scanf("%u", &nPerguntas); // recebendo a quantidade de questões que o utilizador deseja responder
  for (unsigned int i = 0;i < nPerguntas;i++)
  {
    numero = rand() % MAXRANDOMNUMBER;
    switch(rand() % 6) // switch para a escolha de conversão
     {
      // oct to dec -----------------------------------------------------------------------------------
      case 0:
        printf("Converta 0%o para a base decimal:", numero);
        scanf("%u", &resposta);
      break;
      // oct to hex -----------------------------------------------------------------------------------
      case 1:
        printf("Converta 0%o para a base hexadecimal:", numero);
        scanf("%x", &resposta);
      break;
      // dec to oct -----------------------------------------------------------------------------------
      case 2:
        printf("Converta %d para a base octal:", numero);
        scanf("%o", &resposta);
      break;
      // dec to hex ------------------------------------------------------------------------------------
      case 3:
        printf("Converta %d para a base hexadecimal:", numero);
        scanf("%x", &resposta);
      break;
      //hex to oct ------------------------------------------------------------------------------------
      case 4:
        printf("Converta 0x%x para a base octal:", numero);
        scanf("%o", &resposta);
      break;
      //hex to dec ------------------------------------------------------------------------------------
      case 5:
        printf("Converta 0x%x para a base decimal:", numero);
        scanf("%u", &resposta);
      break;
     }
     if(numero== resposta) // checando se a respota foi correta
        {
          printf("Acertou \n");
          nAcertos++;
        }
     else
          printf("Errou \n");
       
  }
  printf("\n Voce obteve %d acertos de %d questoes.", nAcertos, nPerguntas); // apresentando a quantidade de acertos do utilizador
  
  
  return 0;
}
