#include <stdio.h>
#include <time.h>



unsigned long state;
unsigned int n1;
int valor;
unsigned int resposta;
unsigned int my_random();
unsigned int base1();
unsigned int base2();
unsigned int base3();
unsigned int nrandom();
unsigned int nCertas = 0;    
/* nCertas -> Variavel que verifica o numero de respostas certas */


int main() {
	

    /* Pedir inteiro, colocar em valor */
    printf("Quantas perguntas quer? ");
    scanf("%d", &valor); 
    
	state = (unsigned long) time(NULL);
	for (int i = 0; i < valor; i++) {
		nrandom();
	}
	printf("Acertaste %u! \n", nCertas);
	return 0;

}

/* funcao que gera o numero aleatorio */
unsigned int my_random() {

	/* Atualiza estado */
	state ^= (state << 21);
	state ^= (state >> 35);
	state ^= (state << 4);

	/* Devolver valor. */
	return (unsigned int) state;

}

/* Funcao que vai gerar os primeiros numeros para converter e escolher
 * a base no qual vão comecar inicialmente */
unsigned int nrandom() {  
	
	n1 = my_random() % 1000;
	unsigned int j;
	j = my_random() % 3;
	if (j == 0) { 
		printf(" Converte o numero %o", n1);
		printf(" em base Octal para");
		base1();
	} else if (j == 1) {
		printf(" Converte o numero 0x%x", n1);
		printf(" em base Hexadecimal para");
		base2();
	} else {
		printf(" Converte o numero %u", n1);
		printf(" em base Decimal para");
		base3();
	}
	return (unsigned int) n1;
}

/* As bases 1, 2, 3 geram para qual base o numero vai ser convertido*/
unsigned int base1() { 
	
	unsigned int j;
	j = my_random() % 2;
	if (j == 0) { 
		printf(" base Hexadecimal. \n");
		scanf("%x", &resposta);
		if (resposta == n1) {
			printf("Correto! \n");
			nCertas += 1;
		} else { 
			printf("Errado! \n");
		}
	} else {
		printf(" base Decimal. \n");
		scanf("%u", &resposta);
		if (resposta == n1) {
			printf("Correto! \n");
			nCertas += 1;
		} else { 
			printf("Errado! \n");
		}
	}
	return 0;
}

unsigned int base2() {
	
	unsigned int j;
	j = my_random() % 2;
	if (j == 0) { 
		printf(" base Octal. \n");
		scanf("%o", &resposta);
		if (resposta == n1) {
			printf("Correto! \n");
			nCertas += 1;
		} else { 
			printf("Errado! \n");
		}
	} else {
		printf(" base Decimal. \n");
		scanf("%u", &resposta);
		if (resposta == n1) {
			printf("Correto! \n");
			nCertas += 1;
		} else { 
			printf("Errado! \n");
		}
	}
	return 0;
}

unsigned int base3() {
	
	unsigned int j;
	j = my_random() % 2;
	if (j == 0) { 
		printf(" base Octal. \n");
		scanf("%o", &resposta);
		if (resposta == n1) {
			printf("Correto! \n");
			nCertas += 1;
		} else { 
			printf("Errado! \n");
		}
	} else {
		printf(" base Hexadecimal. \n");
		scanf("%x", &resposta);
		if (resposta == n1) {
			printf("Correto! \n");
			nCertas += 1;
		} else { 
			printf("Errado! \n");
		}
	}
	return 0;
}



