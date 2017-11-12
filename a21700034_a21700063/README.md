Relatório do 1º projecto de Introdução à computação
=====================================================

# Introdução

Trata-se de um programa que testa o conhecimento dos autores em bases numéricas. Criámos um software que realiza um jogo de conversões de bases, que tem também interação com o utilizador. Pede ao mesmo o nome e o número de perguntas que o mesmo pretende jogar, dando feedback de acordo com a reposta dada, ou seja, se errou ou acertou, mostrando no final o desempenho do jogador.
Neste relatório falaremos das bibliotecas e tipos de variáveis que utilizámos, as funções e as estruturas de repetição de todos os procedimentos que fazem parte deste projecto, explicando passo a passo o que foi utilizado. Incluimos um fluxograma que explica o funcionamento deste projecto e explicaremos excertos do código fonte utilizado. 
  
  
  ## _**Caracteristicas e funcionamento do programa**_ 
  
   #### _**Bibliotecas**_
    
   O programa é composto pelas seguintes bibliotecas descritas abaixo, tendo como objectivo principal a entrada, saída e a leitura dos comandos/instruções ao longo do nosso programa.
 ```C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```
   Usámos esta para exibir ao utilizador as nossas perguntas e efectuar a leitura de dados por ele inseridos.
```C
#include <stdio.h>
```
Esta é responsavél pela conversão de strings para números, que nos permitiu o uso das variáveis que utilizamos ao longo deste projecto.
```C
#include <stdlib.h>
``` 
Já esta foi utilizada para se poder gerar perguntas aleatórias, utilizando recursos que só a mesma nos fornece, por exemplo: `Csrand((unsigned int) time(NULL));`
```C
#include <time.h>
```  
    
  #### _**Variáveis**_
  
  Foram utilizados vários tipos de variáveis, `int, char, unsigned int, float`.  Criaram-se dois tipos de variáveis globais `int, unsigned int`,  pois foram necessárias para desempenhar duas funções distintas. As variáveis `int` são `pNumero, pBase[2], rCertas=0, nPerguntas=0;` e a nossa variável `unsigned int` é a `pResposta;`.  Para se conseguir entender o propósito de cada variável, deixamos um excerto do código utilizado com a explicação de cada uma em forma de comentário.
  
  ```C
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
```
As variáveis locais são, `int, float, char;` que se encontram na função principal `main();`.  As variáveis `int` são `nRespostasDadas=0, i, sair;`, em que `nRespostasDadas=0`é responsavél por contar a quantidade de respostas que o utilizador vai respondendo. É dado um valor inicial de 0 para efectuar uma verificação, quando esta variável ficar igual a `nPerguntas` o programa deixa de gerar perguntas. A variável `i` é utilizada no nosso ciclo `for` como podemos ver através do código `for(i=0;i<nPerguntas;i++) {`.  Por fim, a última variável `int` local `sair`, tem a função de o utilizador, se o mesmo pretender, abandonar o jogo após premir qualquer tecla, excepto 1 que lhe permite voltar ao início.
A variável `float`, que corresponde apenas a  `percCorretas = 0.00;`, irá revelar ao utilizador o desempenho conseguido de 0% a 100%.
Por último, temos a variável `char` com a tarefa de guardar o nome inserido pelo o utilizador, com um limite máximo de 50 caracteres, `char nome[50];`.
    
  #### _**Estruturas de Repetição**_
  
  No programa foram utilizadas estruturas de condições, em duas funções do programa respetivamente, `void verificar();` e `int main() {`. Na primeira, o utilizador obtém o feedback da reposta dada, a nossa condição `if((signed)pResposta==pNumero) {`, vai analisar se o mesmo acertou ou errou, através do `if`e respectivos `else if`. As restantes estruturas são elaboradas através de `do..while` e `if..else if` na função `int main() {`, pois ao longo da mesma é validado o input dado pelo o jogador, repetindo partes do código até ser gerado o número de perguntas a ser respondidas e finalizar o jogo.
      
  #### _**Funções**_
  
  Este programa possui duas funções, em que cada uma delas tem actividade especificas a desempenhar. A função `void verificar(void) {`, como verificamos abaixo o código fonte e respectiva explicação.
  ```C
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
```
Primeiramente, esta foi declarada globalmente, pois irá ser utilizada na função `int main() {`. O objectivo é efectuar uma verificação das respostas que o utilizador vai fornecendo e informa-o dos resultados obtidos. Após o jogador acertar uma reposta, o feedback dado pelo o programa é acrescentado na váriavel `rCertas`, relembro que `rCertas`trata-se de uma variável que contabiliza a quantidade de repostas correctas face ao número de perguntas. Seguidamente, os três `else if` são aplicados somemente se a reposta se encontrar incorrecta, dando a respectiva correção, ou seja, `%d, %n, %o, decimal, hexadecimal, octal`.

A segunda função `int main() {`, encontra-se encarregue de executar todos os comandos do jogo como a inserção de nomes, respostas e ciclos de validação e repetição, como se pode verificar através do código fonte e respectivos comentários.
```C
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
```
O programa começa por questionar o nome do utilizador e o número de perguntas que o mesmo pretende jogar. Guarda o input deste nas variáveis declaradas nafunção e de seguida atráves `do...while`, repete um ciclo que só ira parar quando o número de perguntas for igual ao número de repostas respondidas. Ao longo do ciclo é efectuada uma constante verificação utilizando o array `pBase[0]` de modo a que o primeiro espaço do `array` nunca seja igual ao segundo, assim a pergunta é sempre convertida para uma base diferente da outra questão. Logo após esta verificação, chama a função `void verificar(void) {`. Quando o ciclo conclui, são apresendatos os resultados em valores quantitativos e em percentagem.
  
  
  ## _**Fluxogramas**_
  
  Aqui podemos observar o fluxograma do programa.![Fluxograma](https://github.com/twinventur/ic2017p1/blob/master/fluxograma.png)
  
  O fluxograma abaixo representa a função `verificar();` do programa.
  
  ![Fluxograma Verificar](https://github.com/twinventur/ic2017p1/blob/master/fluxograma_verificar.png)
  
# Conclusão

Concluimos com este projecto que a linguagem C# é muito vasta e complexa, mas que nos ajudou a aprofundar os nossos conhecimentos. Na realização deste foi necessário uma constante pesquisa para fazer face às dificuldades com que nos fomos deparando. Todo o conhecimento que adquirimos ao longo das aulas foi aplicado neste projecto.
A primeira dificuldade com que nos deparamos, foi a aceitação de dois nomes por parte do utilizador, em que após verificarmos o que foi lecionado na aula 3, se resolveu a questão. Seguidamente, foi nas conversões, algo simples, mas que apenas ficou claro depois de verificada a aula 6. Outras dificuldades foram aparecendo, mas após uma leitura mais atenta do material fornecido pelo o docente Nuno Fachada, foram solucionadas rapidamente. O principal objectivo foi utilizar o conhecimento adquirido ao longo das aulas e implementar o mesmo de forma correcta como ajuda na conclusão do processo. Foi assim possivel aperfeiçoar o programa de modo esteja 100% funcional.

# Referências

* (1) Damas, L. (2007). Linguagem C, 10ª edição. LTC editora.
* (2) Material de apoio da disciplina de [Introdução à Computação][IC] da [Universidade Lusófona][ULHT]

# Metadados

* Autores: [André Santos nº 21700034][andre] e [Gabriel Nunes nº 21700063][gabriel]

* Curso:  [Licenciatura em Aplicações Multimédia e Videojogos][lamv]
* Instituição: [Universidade Lusófona de Humanidades e Tecnologias][ULHT]

[andre]:https://github.com/Snigy24
[gabriel]:https://github.com/twinventur
[lamv]:https://www.ulusofona.pt/licenciatura/aplicacoes-multimedia-e-videojogos
[IC]:https://secure.grupolusofona.pt/ulht/moodle/course/view.php?id=17571
[ULHT]:https://www.ulusofona.pt/
