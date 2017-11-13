#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DEFAULT "\x1B[0m"
#define VERMELHO "\x1B[31m"
#define VERDE "\x1B[32m"
#define AMARELO "\x1B[33m"
#define AZUL "\x1B[36m"
#define BRANCO "\x1B[37m"

int respostasCorretas;

unsigned char random(unsigned int *r2, unsigned char *r)
{
	//Numeros aleatorios a converter
	srand((unsigned)time(NULL));
	*r = rand();

	//RNG para a escolha da pergunta
	srand((unsigned)time(NULL));
	*r2 = rand() % 6;

	return 0;
}

int pergunta(unsigned int *r2, unsigned char *r)
{
	//Quantas perguntas o utilizador quer responder
	int perguntas;
	printf("Número de perguntas: ");
	scanf("%d", &perguntas);

	//Ciclo que continua até o utilizador ter o nº de perguntas que escolheu
	for (int i = 0; i < perguntas; i++)
	{
		//Chama a função random
		random(r2, r);

		//Variáveis para as respostas octais e hexadecimais
		unsigned int resposta0, resposta1, resposta5;

		//Variáveis para as respostas inteiras
		int resposta2, resposta3, resposta4;

		//Escolha aleatória das perguntas atraves de RNG
		switch (*r2)
		{
		case 0:
			printf(DEFAULT "\nConverte %d em base 16: ", *r);
			//Guarda a resposta do utilizador na variável resposta0
			scanf("%x", &resposta0);
			//Condição que se resposta está certa ou errada
			//Se variável resposta1 for igual ao número aleatório r
			if (resposta0 == *r)
			{
				printf(VERDE "\nResposta Correta!\n");
				respostasCorretas++;
			}
			//Se variável resposta0 não for igual ao número aleatório
			else
			{
				printf(VERMELHO "\nResposta Incorreta.\n");
			}
			break;
		case 1:
			printf(DEFAULT "\nConverte %d em base 8: ", *r);
			//Guarda a resposta do utilizador na variável resposta1
			scanf("%o", &resposta1);
			//Condição que se resposta está certa ou errada
			//Se variável resposta1 for igual ao número aleatório r
			if (resposta1 == *r)
			{
				printf(VERDE "\nResposta Correta!\n");
				respostasCorretas++;
			}
			//Se variável resposta1 não for igual ao número aleatório
			else
			{
				printf(VERMELHO "\nResposta Incorreta.\n");
			}
			break;
		case 2:
			printf(DEFAULT "\nConverte 0%o em base 10: ", *r);
			//Guarda a resposta do utilizador na variável resposta2
			scanf("%d", &resposta2);
			//Condição que se resposta está certa ou errada
			//Se variável resposta1 for igual ao número aleatório r
			if (resposta2 == *r)
			{
				printf(VERDE "\nResposta Correta!\n");
				respostasCorretas++;
			}
			//Se variável resposta2 não for igual ao número aleatório
			else
			{
				printf(VERMELHO "\nResposta Incorreta.\n");
			}
			break;
		case 3:
			printf(DEFAULT "\nConverte 0%o em base 16: ", *r);
			//Guarda a resposta do utilizador na variável resposta3
			scanf("%d", &resposta3);
			//Condição que se resposta está certa ou errada
			//Se variável resposta3 for igual ao número aleatório r
			if (resposta3 == *r)
			{
				printf(VERDE "\nResposta Correta!\n");
				respostasCorretas++;
			}
			//Se variável resposta3 não for igual ao número aleatório
			else
			{
				printf(VERMELHO "\nResposta Incorreta.\n");
			}
			break;
		case 4:
			printf(DEFAULT "\nConverte 0x%x em base 10: ", *r);
			//Guarda a resposta do utilizador na variável resposta4
			scanf("%d", &resposta4);
			//Condição que se resposta está certa ou errada
			//Se variável resposta4 for igual ao número aleatório r
			if (resposta4 == *r)
			{
				printf(VERDE "\nResposta Correta!\n");
				respostasCorretas++;
			}
			//Se variável resposta4 não for igual ao número aleatório
			else
			{
				printf(VERMELHO "\nResposta Incorreta.\n");
			}
			break;
		case 5:
			printf(DEFAULT "\nConverte 0x%x em base 8: ", *r);
			//Guarda a resposta do utilizador na variável resposta5
			scanf("%o", &resposta5);
			//Condição que se resposta está certa ou errada
			//Se variável resposta5 for igual ao número aleatório r
			if (resposta5 == *r)
			{
				printf(VERDE "\nResposta Correta!\n");
				respostasCorretas++;
			}
			//Se variável resposta5 não for igual ao número aleatório
			else
			{
				printf(VERMELHO "\nResposta Incorreta.\n");
			}
			break;
		//Default
		default:
			printf(DEFAULT "\nErro! Operador incorrecto!");
		}
	}
	return 0;
}

int main()
{
/*
	Fonte: https://stackoverflow.com/questions/18154579/how-do-i-clear-the-screen-in-c
*/

#ifdef _WIN32
	system("cls");
#elif defined(unix) || defined(__unix__) || defined(__unix) || \
	defined(unix) || (defined(__APPLE__) && defined(__MACH__))
	system("clear");
#else
#error "Sistema Operativo não suportado!"
#endif

	printf(AZUL "Projeto 1 - Versão 1.1 - Por Nuno Carriço e Tiago Alves");
	printf("\n");
	printf("==============================================================");
	printf(DEFAULT "\n");
	printf("\n");

	unsigned int r2;
	unsigned char r;

	//Chama a função pergunta
	pergunta(&r2, &r);

	if (respostasCorretas == 0)
	{
		printf(DEFAULT "\nNão acertaste nenhuma resposta!\n\n");
	}
	else
	{
		printf(DEFAULT "\nAcertaste %d respostas!\n\n", respostasCorretas);
	}
	return 0;
}
