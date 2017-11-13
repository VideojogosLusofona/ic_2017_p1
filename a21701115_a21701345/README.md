Jogo de Conversões
============

##Autores:
André Pedro,  nº **a21701115**
Diogo Martins,  nº **a21701345**

##Descrição da Solução:

O jogo consiste em enviar ao utilizador um número ao acaso numa certa base numérica, para que tente convertê-lo corretamente. 
Primeiramente, o programa pede ao utilizador para inserir o número de perguntas às quais pretende responder. De seguida, criámos um *loop* que permite gerar o número de questões introduzido. Enquanto não se atingir a quantidade de conversões préviamente digitada, o *loop* repete-se. Dentro deste, encontra-se um gerador de números aleatórios ente 0 e 5. O propósito deste gerador é conseguir um desses números para que seja atribuído a uma variável. Para cada valor que lhe possa ser atribuída, é pedida uma conversão específica ao utilizador (por exemplo: hexadecimal -> octal). Para além dessa conversão, também o número pedido é gerado aleatoriamente. Após cada resposta, é comunicado ao jogador se esta está correta ou errada. Quando o número de perguntas feitas corresponder ao escolhido, o *loop* termina e é apresentado número total de conversões corretas e, mediante esse valor, é revelada uma mensagem de acordo com a porcentagem de sucesso no jogo. 
 
>**Fluxograma:**

>* ![fluxograma](fluxograma.svg)



##Conclusões e Matéria Aprendida

Face a realização deste projecto, concluímos que o grau de complexidade que a programação possui merece ser reconhecida, pois é necessária a atenção, dedicação e paciência do(s) programador(es) para que o código possa ser compilado e executado de forma correta e constante. Através da aprendizagem em aula, aplicámos controlos de fluxo (for, ifs/elseifs) de forma a alcançar o objetivo pretendido. O resultado foi um jogo onde o utilizador insere um determinado número de questões, nas quais lhe é pedido para efetuar uma conversão. Dependendo do número de conversões corretas, uma de 7 mensagens finais é apresentada, juntamente com a quantidade de acertos. 

##Referências:

* **Código Reutilizado e/ou Adaptado:**
    - http://coolconversion.com/math/binary-octal-hexa-decimal/_octal__340_in_decimal_
    - http://www.keil.com/support/docs/1265.htm
    - https://stackoverflow.com/questions/14146434/using-scanf-for-reading-an-unsigned-char
    - https://www.tutorialspoint.com/cprogramming/c_data_types.html
    - https://stackoverflow.com/questions/822323/how-to-generate-a-random-number-in-c
    - https://stackoverflow.com/questions/3067364/generating-random-numbers-in-c
    - https://stackoverflow.com/questions/17846212/generate-a-random-number-between-1-and-10-in-c
    - https://stackoverflow.com/questions/111928/is-there-a-printf-converter-to-print-in-binary-format
    - https://stackoverflow.com/questions/1507294/how-to-end-a-loop-early-in-c

* **Bibliotecas Utilizadas:**

    - `<stdio.h>`
    - `<math.h>`
   - `<stdlib.h>`
   - `<time.h>`
   - `<setjmp.h>`