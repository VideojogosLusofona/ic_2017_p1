#1º Projeto de Introdução à Computação 2017/2018
---
Por Nuno Carriço (a21701393) e Tiago Alves (a21701031)

---
###Descrição da Solução
1. Criação da função "main";
2. Estabelecer variáveis:
* r2, r
3. Chamar a função "pergunta";
4. Ver se o utilizador acertou alguma resposta e se sim, quantas;
5. Criação da função "respostasCorretas":
* Estabelecer a função random
* r2 = RNG para a escolha da pergunta
* r = Números aleatórios a converter
6. Criação da função "pergunta";
7. Ver quantas perguntas o utilizador quer responder;
8. Fazer com que o ciclo continue até o utilizador ter todas as perguntas que escolheu;
9. Chamar a função "random";
10. Estabelecer variáveis:
* resposta0, resposta1, resposta5
* resposta2, resposta3, resposta4
11.  Escolha aleatória de perguntas através de switch do RNG (*r2);
* Cada um guarda a resposta na variável "resposta" correspondente
12. Ver se a resposta está certa ou errada se a variável "resposta" corresponder ao número aleatório "r";
13. Imprimir se a resposta está correta ou errada;
14. Retornar "0";

---

###Fluxograma
![Fluxograma](https://preview.ibb.co/k46Dsb/Fluxograma_Transparente.png)

---
###Conclusões

Programar em C é um processo complicado e demorado, visto que tudo tem de ser transmitido no código, pois C é muito pouco automatizado. No entanto é uma linguagem muito poderosa, visto que oferece ao programador controlo total.

###Referências e Fontes

Fonte do código utilizado para limpar o ecrã do terminal/cmd:
https://stackoverflow.com/questions/18154579/how-do-i-clear-the-screen-in-c
```
#ifdef _WIN32
	system("cls");
#elif defined(unix) || defined(__unix__) || defined(__unix) || \
	defined(unix) || (defined(__APPLE__) && defined(__MACH__))
	system("clear");
#else
#error "Sistema Operativo não suportado!"
#endif
```

Fonte da informação utilizada na inserção de cores no programa:
https://stackoverflow.com/questions/3585846/color-text-in-terminal-applications-in-unix
```
#define DEFAULT "\x1B[0m"
#define VERMELHO "\x1B[31m"
#define VERDE "\x1B[32m"
#define AMARELO "\x1B[33m"
#define AZUL "\x1B[36m"
#define BRANCO "\x1B[37m"
```

Outras fontes:
https://www.tutorialspoint.com/cprogramming/c_basic_syntax.htm
https://www.tutorialspoint.com/cprogramming/c_functions.htm
https://www.tutorialspoint.com/cprogramming/c_decision_making.htm
https://www.tutorialspoint.com/cprogramming/c_variables.htm
https://www.tutorialspoint.com/cprogramming/c_operators.htm
https://www.tutorialspoint.com/cprogramming/c_recursion.htm
https://www.tutorialspoint.com/cprogramming/c_pointers.htm

Bibliotecas usadas:

```
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
```