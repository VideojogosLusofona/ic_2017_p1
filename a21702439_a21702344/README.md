# Quiz de Conversão de Bases

<br />**Autores do Trabalho**

* António Louro - 21702439

* Flávio Santos - 21702344

<br />**Descrição da Solução**
<p> O programa começa por pedir o número de perguntas ao qual o utilizado pretende responder (entre 1 a 5); se o utilizador der um valor inválido (0 ou inferior OU superior a 5) o programa é terminado. No caso do utilizador dar um valor correto de perguntas este dispõem-nas uma a uma conforme o utilizador vai respondendo. Abaixo de cada resposta o programa apresenta o valor de respostas corretas até ao momento seguidas do nº total de perguntas; isto repete-se o número de vezes necessárias.
<p>Existe uma variável que define a base do valor original de um certo número e outra que define a base pretendida na resposta. Ambas as bases são dadas aleatoriamente assim como o número pretendido para conversão (que vai de 1 a 255).O valor introduzido pelo utilizador é depois comparado pelo programa com a resposta.
<p> No final, o programa verifica o número de perguntas feitas, depois o número de respostas corretas dadas pelo utilizador e imprime uma resposta dependendo dos valores que obtém.

* Representação em Fluxograma

![Fluxograma](fluxograma.svg)

<br />**Conclusão**
<p>Este 1º projeto dá a perceber que a linguagem C é complexa, e que, até para fazer um simples programa com variáveis pseudo-aleatórias, no qual existe interação com o utilizador, é necessário ter muita cautela, paciência e documentação do que se está a fazer. Escrever em C ou qualquer outra linguagem não é mais do que ter um problema e termos as ferramentas para o resolver, só é preciso saber utilizá-las; onde, quando e como.

* O Que Aprendemos
 * Escrever código pouco a pouco, de forma a identificar bugs mais rapidamente;
 * Os comentários ajudam numa melhor identificação do conteúdo no código, especialmente para aqueles que não o escreveram;
 * Código bem identado e formatado fornece uma melhor legibilidade deste;
 * O "scanf" não é a melhor ferramenta para retirar dados para bases específicas pois o programa não lê os seguintes (ou seja, passa à frente o input do utilizador).

<br />**Referências**

* Webgrafia
 * [Função srand()](https://www.dcc.fc.up.pt/~nam/aulas/0001/pi/slides/slipi0009/node17.html)


* Software Utilizado
 * [Draw.io](https://www.draw.io/)
 * [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/)
 * [Atom](https://atom.io/)
 * [Code::Blocks](http://www.codeblocks.org/)


* Bibliotecas Usadas
 * [stdio](https://www.tutorialspoint.com/c_standard_library/stdio_h.htm)
 * [time](https://www.tutorialspoint.com/c_standard_library/time_h.htm)
 * [stdlib](https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm)
