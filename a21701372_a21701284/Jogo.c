#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand( time(NULL) );	//Retira informações da hora do sistema para a criação de numeros random.
	int num, ba, rep, nu, cont = 0; //Declarar 5 variaveis int
	
	printf("Jogo: Converter Bases!\n");	//Introdução ao jogo
	printf("\nQuantas perguntas desejas responder?\n");	//Pergunta ao utilizador quantas perguntas dezeja responder
    scanf("%d", &num);	//Le o input do utilizador
	while (num <= 0) { //Ciclo while enquanto o valor introduzido não for aceite
		printf("\nIntroduz um  valor valido: ");
		scanf("%d", &num);
	}
	for (int p=0; p<num; p++) {	//Ciclo for que usa o input do utilizador para fazer um certo numero de perguntas random
		nu=rand()% 100; //Da a variavel "nu" um valor random entre 0-99
		ba=rand()% 6;	//Da a variavel "nu" um valor random entre 0-5

		if (ba == 0) {	//Verifica o valor da variavel ba para saber se deve executar os proximos comandos
			printf("\nConverte %d de base Decimal para base Octal\n", nu);	//Pede ao utilizador para converter um numero "nu" (random) para uma base diferente
			scanf("%o", &rep);	//Recolhe para a variavel "rep" a resposta introduzida pelo utilizador
			if (nu == rep) {	//Verifica se a resposta intruduzida coresponde a resposta certa
				printf("Correto!\n"); //Informa o utilizador de que a resposta esta correta
				cont++;	//Adiciona 1 valor ao contador "cont"
			} else	//Caso o utilizador tenha errado executa o proximo comando
				printf("Errado!\n");	//Informa o utilizador de que a resposta esta incorreta
		} else if (ba == 1) {
			printf("\nConverte %d de base Decimal para base Hexadecimal\n", nu);
			scanf("%x", &rep);
			if (nu == rep) {
				printf("Correto!\n");
				cont++;
			} else
				printf("Errado!\n");
		} else if (ba == 2) {
			printf("\nConverte %o de base Octal para base Decimal\n", nu);
			scanf("%d", &rep);
			if (nu == rep) {
				printf("Correto!\n");
				cont++;
			} else
				printf("Errado!\n");
		} else if (ba == 3) {
			printf("\nConverte %o de base Octal para base Hexadecimal\n", nu);
			scanf("%x", &rep);
			if (nu == rep) {
				printf("Correto!\n");
				cont++;
			} else
				printf("Errado!\n");
		} else if (ba == 4) {
			printf("\nConverte %x de base Hexadecimal para base Decimal\n", nu);
			scanf("%d", &rep);
			if (nu == rep) {
				printf("Correto!\n");
				cont++;
			} else
				printf("Errado!\n");
		} else { //Só é executado se nenhuma das condições acima forem verdadeiros
			printf("\nConverte %x de base Hexadecimal para base Octal\n", nu);
			scanf("%o", &rep);
			if (nu == rep) {
				printf("Correto!\n");
				cont++;
			} else
				printf("Errado!\n");
		}
	}
	printf("\nDas %d perguntas, acertas-te %d.", num, cont);	//Informa ao utilizador o numero de perguntas que ele respondeu e quantas acertou
	return 0;
}