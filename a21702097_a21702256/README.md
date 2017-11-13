# Jogo Bases Numéricas - 1º Projecto de Introdução à Computação (17/18)

## Nomes dos autores

* Carlos Berthoud
  - a21702256
* João Duarte
  - a21702097

## Descrição da solução

Foi necessário estruturar as ideias, de modo a conseguir representar de forma clara e objetiva a forma de chegar à solução do problema.
Seguindo as indicações dadas pelo professor Nuno Fachada, foi convertido para código o processo enunciado.
De seguida está uma breve demonstração da resolução, juntamente com os fluxogramas correspondentes.

O jogo inicia, através da função `main()`:

![Função main()](Funcao_main.svg "Função main()")

Começa por chamar a função:

* `perguntaNums()` - pergunta ao jogador **quantas perguntas quer responder**, entrando em loop enquanto não for introduzido um número positivo;

![Função perguntaNums()](Funcao_perguntaNums.svg "Função perguntaNums()")

De seguida, executa 3 funções, por ordem, até o número de perguntas declarado ser igual ao número de perguntas respondidas:

* `geraValor()` - gera um **valor aleatório** positivo e limitado a 8 bits ( unsigned char, que vai de 0 a 255 em decimal);

![Função geraValor()](Funcao_geraValor.svg "Função geraValor()")

* `geraBases()` - gera a **base original**, que está armazenada num array, e de seguida, usa um ciclo for para remover essa mesma base, para que a **base convertida** que for gerada não seja igual, enviando depois ambas as bases para a função main() para que possam ser utilizadas por outra função;

![Função geraBases()](Funcao_geraBases.svg "Função geraBases()")

* `perguntaEVerifica()` - tendo como argumentos as bases previamente geradas, **faz a pergunta** conforme a base original, e **lê** a resposta conforme a base convertida, retornando o **valor da resposta** (Verdadeiro ou Falso), para que possa ser dado o feedback ao jogador se acertou ou não na pergunta;

![Função perguntaEVerifica()](Funcao_perguntaEVerifica.svg "Função perguntaEVerifica()")

Após serem feitas as perguntas definidas, mostra **quantas estavam corretas**.

## Conclusões e matéria aprendida

Com este Projeto foi interiorizada a importância da forma como a informação é tratada, de forma a ser melhor apresentada e lida pelo utilizador e para a utilizar o mínimo de recursos possíveis, algo que será muito útil para projetos futuros relacionados com Videojogos, onde o desempenho é fundamental.

Relativamente à matéria aprendida, este Projeto serviu para relembrar e aprofundar conhecimentos da linguagem C e da utilização do Git e GitHub (João), e para ambientar e introduzir as práticas e os conceitos leccionados nas aulas de Introdução à Computação (Carlos).

## Referências

Utilização das bibliotecas:

* `stdio.h` - biblioteca standard C de input/output

* `stdlib.h` - biblioteca standard C que possuí funções de alocação de memória e conversões

* `time.h` - biblioteca standard C para manipulação de datas e horários

Documentação online:

* https://www.gnu.org/software/libc/manual/html_mono/libc.html

* https://msdn.microsoft.com/en-us/library/fw5abdx6.aspx

* https://www.tutorialspoint.com/cprogramming/

* https://stackoverflow.com/