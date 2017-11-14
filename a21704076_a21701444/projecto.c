#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gerador(unsigned int *n ,unsigned int *b ,unsigned int *c); 				// Protótipo da função gerador.

int main(){
	
int q; 														       				// q = número de questões que o jogador quer responder.
int sum=0;																		// sum = soma do número de respostas certas.
	
	do{
        printf ("Digite o numero de questoes que quer responder?\n");
        scanf ("%d" , &q);
      } while (q==0);
	
	for (int i=0 ; i < q ; i++){												// Ciclo for que tem como condição de paragem o número de questões que o jogador quer responder (q). 
		
	unsigned int n, b, c, r;													// n = número aleatório a ser apresentado ao jogador. ||| b = base em que o número (n) será apresentado ao jogador.
																				// c = base na qual o jogador terá que converter o número (n) de base (b). ||| r = resposta do jogador. 
		gerador (&n, &b, &c);
		
		if (b==0){																// b == 0 -> Número (n) em base decimal.
			if (c==0) {printf ("Converta o numero %u em base 8 \n" , n);        // c == 0 -> Conversão de número (n) em base octal .   
				       scanf ("%o" , &r);                                            
		  } else {printf ("Converta o numero %u em base 16 \n" , n);            // c == 1 -> Conversão de número (n) em base hexadecimal.   
				         scanf ("%x" , &r);}   
	}	if (b==1){																// b == 1 -> Número (n) em base octal.
			if (c==0) {printf ("Converta o numero 0%o em base 10 \n" , n);		// c == 0 -> Conversão de número (n) em base decimal.
				       scanf ("%u" , &r);
		  } else {printf ("Converta o numero 0%o em base 16 \n" , n);			// c == 1 -> Conversão de número (n) em base hexadecimal.
				         scanf ("%x" , &r);}  
	}   if (b==2){																// b == 2 -> Número (n) em base hexadecimal.
			if (c==0) {printf ("Converta o numero 0x%x em base 8 \n" , n);      // c == 0 -> Conversão de número (n) em base octal.
				       scanf ("%o" , &r);
		  } else {printf ("Converta o numero 0x%x em base 10 \n" , n);			// c == 1 -> Conversão de número (n) em base decimal.
				         scanf ("%u" , &r);}
    }
			if (r==n){ 															// Se (r == n) ou (número em base pedida for equivalente ao número na base dada), a resposta está certa.
				printf ("Certo!!! \n");									        
			    sum++;															// Se a resposta estiver correcta, adiciona 1 à variável (sum) que é o contador de respostas certas.
		 } else {printf ("Errado!!! \n");
			  }
}
	   
				printf("Acertaste %d de %d. \n" , sum , q );						
				
	   	   if (sum == q){ 																			// Se o número de respostas certas for igual ao número de perguntas (100%).			
				printf ("Conseguiste, acertaste-as todas!!! \n");									        														
         } else if(sum >= (q/4)+(q/2)){																// Se o número de respostas certas for maior ou igual a 3/4 do número de perguntas (75%).	
				printf ("Boa, quase que conseguias! \n");
	     } else if(sum >=(q/2)){																	// Se o número de respostas certas for maior ou igual a 1/2 do número de perguntas (50%).
			    printf ("Bom, podia ser melhor. \nVamos tentar novamente? \n");
	     } else if(sum >=(q/2)-(q/4)){																// Se o número de respostas certas for maior ou igual a 1/4 do número de perguntas (25%).
			    printf ("Acabaste de acordar? \nAnda la, vai molhar a cara e volta. \n");
	     } else{																					// Se o número de respostas certas for inferior a 1/4 do número de perguntas (0%).
			    printf ("Olha, vamos fazer de conta que isto nao aconteceu. \nPrime o botao rapido e volta a tentar! \n");
	     }
	   
	   
return 0;	
}

void gerador(unsigned int *n ,unsigned int *b ,unsigned int *c)										
{
        srand((unsigned int) time(NULL));
        *n=rand()%256;																				// n será um número entre 0 (0000 0000) e 255 (1111 1111), porque o problema pede um unsigned int 
        *b=rand()%3;			// b == 0/Decimal ou b == 1/Octal ou b == 2/Hexadecimal                (8 bits) e como queremos o número 255 como fim de tabela, teremos que obter o resto da divisão inteira
        *c=rand()%2;		    // c == 0 ou c == 1                                                     do número 256. 
}
