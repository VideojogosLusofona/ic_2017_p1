#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int geraPergunta(int a);
int BinaryDecimal (int checked);
unsigned int HexDecimal (char * checked);
int geraBinary();
const char * geraHex();


int main (void)
{
	int questions;
	int a;
	int acertos=0;
	srand ( time(NULL) );

	printf("HOW MANY QUESTIONS?");
	scanf("%d", &questions);

	for(a=0; a<questions; a++)
	{
		acertos= acertos + geraPergunta(rand()%5);
	}

	printf("\n\nACERTOS TOTAIS: %d ", acertos); 
	return 0;
	
}



//only need to create binary to decimal and hex to decimal answer checks. the other 4 should just call the first 2 in different orders.
//if we convert the answer and the numbers to dec we can just compare them and check if they are the same regardless of their original base
int geraPergunta(int a)
{
	int decimal=0;
	int resposta;

	char hex[5];
	char respostaH[5];

	int binary;

	srand ( time(NULL) );
//////////////////////////////////////////////////////////////
	if(a==0)//decimal to binario
	{
		decimal=rand() % 255;

		printf("\nConvert this decimal number %d to Binary: ", decimal);
		scanf("%d", &resposta);

		if(decimal==BinaryDecimal(resposta))
		{
			printf("\n\nCerto!\n");
			return 1;
		}
		else
		{
			printf("\n\nErrado!\n");
			return 0;
		}
	}
////////////////////////////////////////////////////////////////
	if(a==1)//decimal to hex
	{
		decimal=rand() % 255;

		printf("\nConvert this decimal number %d to Hex: ", decimal);
		scanf("%s", &respostaH);

		if(decimal==HexDecimal(respostaH))
		{
			printf("\n\nCerto!\n");
			return 1;
		}
		else
		{
			printf("\n\nErrado!\n");
			return 0;
		}
	}
///////////////////////////////////////////////////////////////
	if(a==2)//binary to decimal
	{
		binary=geraBinary();

		printf("\nConvert this binary number %d to Decimal: ", binary);
		scanf("%d", &resposta);

		if(BinaryDecimal(binary)==resposta)
		{
			printf("\n\nCerto!\n");
			return 1;
		}
		else
		{
			printf("\n\nErrado!\n");
			return 0;
		}
	}

///////////////////////////////////////////////////////////////	
	if(a==3)//binary to hex
	{
		binary=geraBinary();

		printf("\nConvert this binary number %d to Hex: ", binary);
		scanf("%s", &respostaH);

		if(BinaryDecimal(binary)==HexDecimal(respostaH))
		{
			printf("\n\nCerto!\n");
			return 1;
		}
		else
		{
			printf("\n\nErrado!\n");
			return 0;
		}
	}
/////////////////////////////////////////////////////////////
	if(a==4)//Hex to decimal
	{
		strcpy(hex,geraHex()); 

		printf("\nConvert this Hex number %s to Decimal: ", hex);
		scanf("%d", &resposta);

		if(HexDecimal(hex)==resposta)
		{
			printf("\nCerto!\n");
			return 1;
		}
		else
		{
			printf("\n\nErrado!\n");
			return 0;
		}
	}
//////////////////////////////////////////////////////////////
	if(a==5)//Hex to binary
	{
		strcpy(hex,geraHex()); 

		printf("\nConvert this Hex number %s to Binary: ", hex);
		scanf("%d", &resposta);

		if(HexDecimal(hex)==BinaryDecimal(resposta))
		{
			printf("\n\nCerto!\n");
			return 1;
		}
		else
		{
			printf("\n\nErrado!\n");
			return 0;
		}
	}
}//fim da funcao gera resposta


//code from: http://www.sanfoundry.com/c-program-binary-number-into-decimal/
int BinaryDecimal (int checked)//receives a binary, returns that binary in dec then checks agains the answer the player got in the previous function
{
	int  num, binary_val, decimal_val = 0, base = 1, rem;

	//101001 == 41
	num=checked;
	binary_val=checked;

	while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }

	return decimal_val;

}//works 


//code from: https://stackoverflow.com/questions/10324/convert-a-hexadecimal-string-to-an-integer-efficiently-in-c
unsigned int HexDecimal (char * checked)//MAKE SURE THAT YOU CHECK UNSIGNED INT STUFF AND HOW TO COMPARE THOSE NUMBERS BECAUSE THIS COULD RUIN THE CODE
{
	int x;
	sscanf(checked, "%x", &x);

	return x;
}//works

int geraBinary()
{
	int a;
	int output=0;
	int z;
	srand ( time(NULL) );

	for(a=0; a<8; a++)
	{
		z=rand()%10;

		if(z>5)
			output=output+((int) pow((double)10, a));
	}

	return output;
}//works

const char * geraHex()
{
	int a, z, count=0;
	char output[5];
	srand ( time(NULL) );

	

	output[2]='/0';
	for(count=0; count<2 ; count++)
	{
		a=rand()%10;
		if(a<5)
		{
			z=rand()%9;
			output[count]=z+48;
		}
		else
		{
			z=rand()% 6;
			output[count]=z+65;
		}
	}
	output[2]=NULL;

	return output;
}//works