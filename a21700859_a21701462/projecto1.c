#include <stdio.h>
#include <time.h> // para usar a função time()
#include <stdlib.h> // Para usar a função rand()
int main()
{
	int nperguntas; /* var que recebe nr de perguntas definidas pelo user */
	unsigned int resposta; /* var que recebe o input do user */
	int rcertas = 0; /* variável que obtém o número de respostas certas */ 
	printf("Número de perguntas:"); /* Apresenta texto no ecrã */
	scanf("%d", &nperguntas); /* Recebe input do user p/ a var nperguntas */
	
	/*
	rand() gera uma sequência de valores sempre igual pois tem a semente default 1
	Com srand() mudamos a semente para produzir números pseudo-aleatórios
	Para que o user não tenha de introduzir a semente, usamos a função time()
	que retorna o valor do relógio do computador em segundos
	*/
	srand((unsigned int) time(NULL));
	
	/* Ciclo for executado consoante o nr de perguntas que o user introduz */
	for (int i=1; i<=nperguntas; i++)
	{
		/* var que recebe um nr random de 1 a 255 */
		unsigned char perguntas = (rand()%255)+1;
		
		/* var que recebe um nr random de 1 a 6 */
		int naleatorio = (rand()%6)+1;
		
		/* switch com 6 possíveis opcoes, escolhidas aleatoriamente
		Cada opcao mostra um nr numa base e pede para converter para outra
		O scanf recebe input do user para a variavel resposta
		O if verifica se o input do user e igual ao da variavel perguntas
		Caso acerte, rcertas incrementa 1 valor e "Certo!" aparece no ecra
		Se errar, aparece "Errado!" */
		switch(naleatorio)
		{
			/* Apresenta nr em octal e pede para converter em base 10 */ 
			case 1:
				printf("\nConverte 0%o em base 10:", perguntas);
				scanf("%u", &resposta);
				if (resposta == perguntas)
				{
					rcertas++;
					printf("Certo!");										
				}
				else
				{
					printf("Errado!");						
				}
				break;
			/* Apresenta nr em octal e pede para converter em base 16 */ 
			case 2:
				printf("\nConverte 0%o em base 16:", perguntas);
				scanf("%x", &resposta);
				if (resposta == perguntas)
				{
					rcertas++;
					printf("Certo!");										
				}
				else
				{
					printf("Errado!");						
				}
				break;
			/* Apresenta nr em decimal e pede para converter em base 8 */ 
			case 3:
				printf("\nConverte %d em base 8:", perguntas);
				scanf("%o", &resposta);
				if (resposta == perguntas)
				{
					rcertas++;
					printf("Certo!");										
				}
				else
				{
					printf("Errado!");						
				}
				break;
			/* Apresenta nr em decimal e pede para converter em base 16 */ 
			case 4:
				printf("\nConverte %d em base 16:", perguntas);
				scanf("%x", &resposta);
				if (resposta == perguntas)
				{
					rcertas++;
					printf("Certo!");										
				}
				else
				{
					printf("Errado!");						
				}
				break;
			/* Apresenta nr em hexadecimal e pede para converter em base 8 */ 
			case 5:
				printf("\nConverte 0x%x em base 8:", perguntas);
				scanf("%o", &resposta);
				if (resposta == perguntas)
				{
					rcertas++;
					printf("Certo!");										
				}
				else
				{
					printf("Errado!");						
				}
				break;
			/* Apresenta nr em hexadecimal e pede para converter em base 10 */ 
			case 6:
				printf("\nConverte 0x%x em base 10:", perguntas);
				scanf("%u", &resposta);
				if (resposta == perguntas)
				{
					rcertas++;
					printf("Certo!");										
				}
				else
				{
					printf("Errado!");						
				}
				break;	
		}
	}
	/* Apresenta o nr de vezes que o user acertou atraves da variavel rcertas */
	printf("\nAcertaste %d vez(es)!", rcertas);
	return 0;
}