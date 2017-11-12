#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*criacao de var globais*/
//criacao da funcao "verificar()" para a verificacao de repostas.
void verificar(); 
/*criacao de var inteiras 
 * pNumero = numero aleatorio gerado para utilizar na pergunta
 * 
 * pBase = array que recebe 2 valores, o primeiro valor sera o valor 
 * que pNumero sera convertido, o segundo valor sera o valor pelo o qual
 * o utilizador tera de responder na pergunta
 * 
 * rCertas = contador de repostas correctas
 * 
 * nPerguntas = numero de perguntas que o utilizador pretende responder
 * */
int pNumero, pBase[2], rCertas=0, nPerguntas=0;
//criacao de var para receber resposta do utilizador
unsigned int pResposta;


int main() { 
	
	/*criacao de vars 
	* nRespostasDadas = contador que verifica se o utilizador ja deu 
	* todas as respostas as perguntas solicitadas
	* 
	* i = contador que verifica se as repostas ja foram todas 
	* perguntadas 
	* 
	* sair = variavel que pede ao utilizador se pretende sair do jogo*/
	int nRespostasDadas=0, i, sair;
	//var que verifica a percentagem das repostas correctas
	float percCorretas = 0.00;
	//var que guarda o nome do utilizador
	char nome[50];
	//semente responsavel pela a geracao de numeros aleatorios
	srand((unsigned int) time(NULL));
	
	//inicio do jogo	
	do {
		rCertas=0;
		nRespostasDadas=0;
		//frase de inicio de jogo
		printf("\n\n\nBEM VINDO AO JOGO DE CONVERSOES DE BASES\n");
		//escreve no ecra 
		printf("\nInsere o teu nome:\n");
		//pede o nome ao utilizador e guarda na var nome
		fgets(nome,50,stdin);
		//pergunta quantas rondas o utilizador pretende jogar
		printf("\nOla %sEntao, quantas rondas vais jogar?\nRondas: "
		, nome);
		//pede o numero de perguntas e guarda em "nPerguntas"
		scanf("%d", &nPerguntas);

		do {
			/*repetir o ciclo ate o numero de perguntas ser igual ao 
			 * numero de repostas dadas*/
			for(i=0;i<nPerguntas;i++) {
				//grava na var pNumero um numero aleatorio entre 0-255
				pNumero = rand()%256;
				/*grava no primeiro espaco do array pBase uma base 
				 * aleatoria do qual pNumero vai ser convertido */
				pBase[0] = rand()%3;
				
				/*efectua uma verificacao para que o segundo espaco do
				 * array pBase nao seja igual ao primeiro espaco*/ 
				do {
					/*grava no segundo espaco do array pBase uma base 
					 * aleatoria do qual o utilizador tem de responder*/
					pBase[1] = rand()%3;
				}while(pBase[0]==pBase[1]);
				
				printf("\nPERGUNTA %d de %d\n", i+1, nPerguntas);
				/*verifica qual a base em que pNumero tem de ser 
				 * convertido*/
				if(pBase[0]== 0) { // 0 = decimal
					printf("\nQuanto e %d decimal em ", pNumero);
				}else if(pBase[0]== 1) { // 1 = hexadecimal
					printf("\nQuanto e %x hexadecimal em ", 
					pNumero);
				}else if(pBase[0]== 2) { // 2 = octal
					printf("\nQuanto e %o octal em ", pNumero);  
				}
					
				/*verifica a base em que o utilizador tem de 
				 * responder e pede a reposta ao utilizador */
				if(pBase[1] == 0) { // 0 = decimal
					printf("decimal (Base 10)?\nResposta: ");
					scanf("%u", &pResposta);
				}else if(pBase[1] == 1){  // 1 = hexadecimal
					printf("hexadecimal (Base 16)?\nResposta: ");
					scanf("%x", &pResposta);
				}else if(pBase[1] == 2){ // 2 = octal
					printf("octal (Base 8)?\nResposta: ");
					scanf("%o", &pResposta);
				}
				//limpa os dados inseridos do teclado
				fflush(stdin);
				//chama a funcao verificar() 
				verificar();
				//incrementa + 1 a var
				nRespostasDadas++;	
			}
		//para de gerar perguntas 	
		}while(nPerguntas>nRespostasDadas);
		
		//calcula a percentagem de respostas correctas
		percCorretas=(rCertas*100)/nPerguntas;
		//informa o desempenho do utilizador
		printf("\nConseguiste acertar %d em %d! | %.2f%% | Parabens!\n",
		rCertas, nPerguntas, percCorretas);
		//pergunta ao utilizador se prentende iniciar um novo jogo
		printf("\nQueres jogar outra vez? (Escreve '1' para jogar outra" 
		" vez ou clica noutra tecla para sair)\n");
		//pede ao utilizador se pretende abandonar o jogo	
		scanf("%1d", &sair);
		//obtem o "ENTER" do scanf acima para corrigir bug do fgets
		getchar();
		
	//fim do jogo
	}while(sair==1);
	printf("\n\nOBRIGADO POR JOGARES!\n Made by: Andre Santos e Gabriel"
	" Nunes\n");
	return 0;
}

//verifica se a resposta se encontra correcta e informa o utilizador
void verificar(void) {
	if((signed)pResposta==pNumero) {
		printf("\nCorrecto!\n");
		rCertas++;
	}else if(pBase[1]== 0) {
		printf("\nIncorrecto! A resposta e %d.\n", pNumero);
	}else if(pBase[1]== 1) {
		printf("\nIncorrecto! A resposta e %x.\n", pNumero);
	}else if(pBase[1]== 2) {
		printf("\nIncorrecto! A resposta e %o.\n", pNumero);
	}
}
