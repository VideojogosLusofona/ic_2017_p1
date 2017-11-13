Jogo de Conversões
================
-----------------------------------------------------------------------------------------

Autores
-----------
José Miguel Pires - a21701444
Caetano Lourenço - a21704076

-------------------------------------------------------------------------------------------------------

Objectivos
---------------
 - 1 - Objectivos
	 - 1.1 - Criar um código de um jogo em C focalizado em conversões de bases numéricas.
	 - 1.2 - Criar um fluxograma em ficheiro **.svg** para mostrar a arquitectura do programa. 
	 - 1.3 - Criar um ficheiro de texto **README.md** onde deverá ser exposto o projecto e seus objectivos, ser explicado o código em C em partes isoladas e a apresentação do fluxograma, previamente feito.
		 - 1.3.1 - Apresentação do problema.
		 - 1.3.2 - Apresentação de possíveis soluções.
		 - 1.3.3 - Análise explicativa em parcelas, do código em C.
		 - 1.3.4 - Observação do fluxograma do problema resolvido.
		 - 1.3.5 - Observações e considerações do projecto global.  
	 - 1.4-  Expandir o resultado final para um repositório master final no **GitHub**.

-------------------------------------------------------------------------------------------------------

Descrição do problema
-----------------------------------

Pretende-se que os alunos, em grupos de dois, implementem um jogo para testar o seu conhecimento de bases numéricas. O jogo deve começar por pedir ao utilizador o número de questões a que deseja responder. Cada questão consiste em perguntar ao utilizador para converter um número numa base numérica noutra base numérica. Após cada resposta, o jogo deve indicar se o utilizador respondeu ou não correctamente à questão. No final, o jogo deve indicar quantas respostas corretas foram dadas.

O jogo tem os seguintes requisitos:

Os valores a converter devem ser aleatórios, positivos e limitados a 8 bits (unsigned char).
As bases aceites para conversão devem ser octal, decimal e hexadecimal, ou seja, as questões podem solicitar aleatoriamente as seguintes conversões:
Octal => Decimal
Octal => Hexadecimal
Decimal => Octal
Decimal => Hexadecimal
Hexadecimal => Octal
Hexadecimal => Decimal
###### Autoria de Nuno Fachada

Pré-análise/solução do problema do probrema
-------------------------------------------------------------------------

 1. Pedir ao jogador o número de questões ao qual quer responder.
 
 2.  Criar uma função com o número de iterações igual ao número de questões. 
	 2.1 Neste caso deverá ser utilizada uma função (for) uma vez que conhecemos quantas iterações a função irá ter.
	 
 3. Criar três geradores para: números que serão pedidos ao jogador para converter; 3 números para saber em que base será dado o número para o jogador converter; 2 números para saber em que base o jogador terá que converter o número dado.
 
 4. Arranjar uma maneira de converter os números gerados aletóriamente nas diversas bases para que seja possível a sua comparação.
 
 5. Após a comparação digitar quantas respostas o jogador acertou face ao número de perguntas que requisitou.
 
 6. Desenvolver o programa para que se asseme-lhe mais a um jogo.
 
 7. Optimizar o programa/jogo final.

Código em C
------------------
Pedido ao utilizador um valor para o (q) em inteiro decimal.  
```c 				
do{
        printf ("Digite o numero de questoes que quer responder?\n");
        scanf ("%d" , &q);
      } while (q==0);
```
Criação do ciclo (For) com o número de iterações igual a o número de perguntas (q) escolhidas pelo jogador. Chamada do gerador de número aleatórios.  É dada a questão ao utilizador com base no resultado  do gerador.

```
for (int i=0 ; i < q ; i++){												
													
		gerador (&n, &b, &c);
		
		if (b==0){																
			if (c==0) {printf ("Converta o numero %u em base 8 \n" , n);      
				       scanf ("%o" , &r);                                            
		  } else {printf ("Converta o numero %u em base 16 \n" , n);            
				         scanf ("%x" , &r);}   
	}	if (b==1){																
			if (c==0) {printf ("Converta o numero 0%o em base 10 \n" , n);		
				       scanf ("%u" , &r);
		  } else {printf ("Converta o numero 0%o em base 16 \n" , n);			
				         scanf ("%x" , &r);}  
	}   if (b==2){																
			if (c==0) {printf ("Converta o numero 0x%x em base 8 \n" , n);     
				       scanf ("%o" , &r);
		  } else {printf ("Converta o numero 0x%x em base 10 \n" , n);			
				         scanf ("%u" , &r);}
    }
```
Comparação do (r)(resposta) com o (n)(questão).

```
if (r==n){ 															
		printf ("Certo!!! \n");									        
		 sum++;															
	} else {printf ("Errado!!! \n");
		   }
}
```
Mensagem de conclusão após ter respondido a todas as questões

```
printf("Acertaste %d de %d \n" , sum , q );						
```
Mensagem final, dependendo da diferença entre o (sum) e o (q).

```				
if (sum == q){ 																					
				printf ("Conseguiste, acertaste-as todas!!! \n");									        														
         } else if(sum >= (q/4)+(q/2)){																
				printf ("Boa, quase que conseguias! \n");
	     } else if(sum >=(q/2)){																	
			    printf ("Bom, podia ser melhor. \nVamos tentar novamente? \n");
	     } else if(sum >=(q/2)-(q/4)){																
			    printf ("Acabaste de acordar? \nAnda la, vai molhar a cara e volta. \n");
	     } else{																					
			    printf ("Olha, vamos fazer de conta que isto nao aconteceu. \nPrime o botao rapido e volta a tentar! \n");
	     }	 
```

Gerador de números aleatórios atribuídos ao (n), (b), (c). Usando os diferentes limites.
```
void gerador(unsigned int *n ,unsigned int *b ,unsigned int *c)										
{
        srand((unsigned int) time(NULL));
        *n=rand()%256;																				
        *b=rand()%3;			
        *c=rand()%2;		                                                        
}
```


Fluxograma
------------------

[Fluxograma]![enter image description here](https://lh3.googleusercontent.com/-eIAwci-SPm0/Wgi5CBFRpYI/AAAAAAAAAiE/OjQx6P82ra4YSxx4Gup8-R1qfX8wIPttACLcBGAs/s0/Untitled+Diagram.jpg "Untitled Diagram.jpg")

----------
Referências
------------------

 1. Código C
	 1.1. Geany/Ubunto
	 1.2. Biblioteca de C
	 
 2. Markdown
	 2.1. Stackedit.io
	 
 3. Fluxograma
	 3.1. Draw.io 


