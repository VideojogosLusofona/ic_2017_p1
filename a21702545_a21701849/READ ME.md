# Convertingame

>Pedro Inácio a21702545/Xavier Ferreira a21701849


## Descrição da solução
----

	![Fluxograma](fluxograma.svg)

O programa pede o número de perguntas a que o utilizador deseja responder.
Após ter obtido esse valor, o programa pede aleatoriamente uma conversão de uma base 
(decimal, octal, hexadécimal) para outra que não a mesma (sendo o número
também aleatóriamente gerado).
O utilizador responde então à pergunta, sendo atribuído o valor de 
correcta ou errada à resposta.
Após o resultado da pergunta ser mostrado ao utilizador, o programa gera outra pergunta aleatoriamente.
Depois de responder a todas as perguntas, aparece o resultado, que é o número de perguntas acertadas do número total de perguntas.
a que se respondeu correctamente seguido de: *Carrega no Enter para fechar o programa*.


Tivemos alguns problemas com o input quando o programa pede o número de perguntas a serem respondidas e com o input dos números 8 e 9 em perguntas de hexadecimal/decimal para octal: 

Input de números negativos quando o programa pede o número de perguntas a serem respondidadas:
Se o input fosse um número negativo o programa aceitava esse número, mas não pode ser feito um número negativo de perguntas.
Este problema foi resolvido ao fazer um _loop do-while_ que faz a pergunta repetidamente até o input ser um número positivo (indicado nos comentários do código).

Input dos números superiores ao da base octal em perguntas de hexadecimal/decimal para octal: 
Se o input fosse um número maior do que a base octal, a pergunta era marcada errada e o programa respondia automaticamente a várias perguntas seguidas, sem dar ao utilizador uma oportunidade de responder a essas perguntas.
Este problema foi resolvida ao limpar o input da pergunta, para não passar para as outras perguntas e marcá-las como erradas sem o utilizador ter uma oportunidade de responder.

Input de letras quando o programa pede o número de perguntas a serem respondidas:
Se o input for uma letra, essa letra é convertida num número e pede esse número de perguntas para serem respondidas (que costuma ser um número bastante elevado). Tentámos resolver este problema de várias maneiras, mas nenhuma delas funcionou.

### Conclusão


Este projecto, melhorou bastante a nossa compreensão do funcionamento de várias instruções em [C](https://en.wikipedia.org/wiki/C_(programming_language)).
Talvez a parte mais difícil tenha sido fazer as bases do programa e corrigir os seus erros.
Aprendemos a utilizar [Markdown]( https://guides.github.com/features/mastering-markdown/), a construir fluxogramas e a utilizar de forma correcta instruções de C como por exemplo o do-while


##### Referências
* Discussão com Nuno Figueiredo sobre "if" e "else"
* Discussão com João Duarte sobre loops em "do-while"
* [https://stackoverflow.com/questions/1406421/press-enter-to-continue-in-c](https://stackoverflow.com/questions/1406421/press-enter-to-continue-in-c)
* [https://codebeautify.org/c-formatter-beautifier](https://codebeautify.org/c-formatter-beautifier)
* [https://guides.github.com/features/mastering-markdown/](https://guides.github.com/features/mastering-markdown/)
* [http://markdownlivepreview.com/](http://markdownlivepreview.com/)