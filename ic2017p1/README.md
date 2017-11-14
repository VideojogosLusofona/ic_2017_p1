<!--
1º Projeto de Introdução à Computação 2017/2018 (c) by Nuno Fachada

1º Projeto de Introdução à Computação 2017/2018 is licensed under a
Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.

You should have received a copy of the license along with this
work. If not, see <http://creativecommons.org/licenses/by-nc-sa/4.0/>.
-->

# 1º Projeto de Introdução à Computação 2017/2018

## Descrição do problema

Pretende-se que os alunos, em **grupos de dois**, implementem um jogo para testar o seu conhecimento de bases numéricas. O jogo deve começar por pedir ao utilizador o número de questões a que deseja responder. Cada questão consiste em perguntar ao utilizador para converter um número numa base numérica noutra base numérica. Após cada resposta, o jogo deve indicar se o utilizador respondeu ou não corretamente à questão. No final, o jogo deve indicar quantas respostas corretas foram dadas.

O jogo tem os seguintes requisitos:

* Os valores a converter devem ser **aleatórios**, positivos e limitados a 8 bits (`unsigned char`).
* As bases aceites para conversão devem ser octal, decimal e hexadecimal, ou seja, as questões podem solicitar **aleatoriamente** as seguintes conversões:
    - Octal => Decimal
    - Octal => Hexadecimal
    - Decimal => Octal
    - Decimal => Hexadecimal
    - Hexadecimal => Octal
    - Hexadecimal => Decimal

## Exemplo de execução

```
Numero de perguntas: 3

Converte 0115 em base 16: 4d
Certo!
Converte 28 em base 16: c1
Errado!
Converte 0x9b em base 8: 233
Certo!

Acertaste 2 vez(es)!
```

## Material a entregar

* Ficheiro `.c` com código devidamente comentado e indentado:
    - Deve implementar as funcionalidades pedidas.
    - Deve compilar sem erros e/ou avisos no compilador [GCC] e/ou [Clang] com as opções
      `-std=c99 -Wall -Wextra -Wpedantic`.
* Ficheiro `fluxograma.svg` contendo o fluxograma do projeto em formato SVG.
* Ficheiro `README.md` em formato [Markdown], contendo as seguintes secções:
    - Título
    - Nomes dos autores (primeiro e último) e respectivos números de aluno
    - Descrição da solução
        * Deve mostrar o fluxograma
    - Conclusões e matéria aprendida
    - Referências
        * Incluindo trocas de ideias com colegas, código aberto reutilizado e bibliotecas utilizadas

## Forma de trabalho e data de entrega

A forma de obter, editar e submeter o trabalho será através do [Moodle] e do [GitHub]. Os três ficheiros devem ser entregues no Moodle até às **23h de 12 de novembro de 2017**, e depois desta data os ficheiros devem ser carregados (_pushed_) no GitHub e deve ser solicitada uma integração dos mesmos (*pull request*) no [repositório] principal do projeto até às **23h de 13 de novembro de 2017**. Os ficheiros submetidos no Moodle devem ser exactamente os mesmos cuja integração será posteriormente solicitada no GitHub.

O procedimento para este trabalho é o seguinte:

1. Criar uma conta no [GitHub](https://github.com/join), caso ainda não tenhas uma.
2. Ir até ao [repositório] do projeto e criar uma cópia (*fork*) do mesmo na tua conta (botão **Fork** no canto superior direito).
3. Obter uma cópia local (no teu PC) da tua cópia do projeto com o comando `git clone https://github.com/OTeuUserName/ic2017p1.git` (substituir `OTeuUserName` pelo teu nome de utilizador no GitHub).
4. Já dentro da pasta do projeto, chamada *ic2017p1*, criar uma sub-pasta com os números de aluno que constitutem o grupo, por exemplo *a21700000_a21700001*.
5. Será dentro desta sub-pasta que deverão ser colocados os três ficheiros pedidos (código C, fluxograma em formato SVG e relatório em formato Markdown).
6. Cada edição minimamente significativa a algum dos três ficheiros deve inserida na árvore git com um _commit_, realizado pelo aluno que realizou a modificação, por exemplo:
    - `$ git add projeto.c`
    - `$ git commit`
7. Se os alunos que constitutem o grupo desejarem colaborar remotamente devem fazê-lo através de um repositório privado. Infelizmente os repositórios do [GitHub] são públicos, mas serviços alternativos como [GitLab], [NotABug] ou [BitBucket] oferecem repositórios Git privados.
8. Após e só após a data limite de submissão no Moodle (**23h de 12 de novembro de 2017**), o projeto deve ser carregado (_pushed_) na tua conta GitHub, e deve ser solicitado um *pull request* (pedido de integração) na árvore original do projeto (VideojogosLusofona/ic2017p1).

## Sobre o Git e GitHub

O GitHub é uma plataforma de alojamento de código baseada em [Git], que por sua vez é um sistema de gestão de código fonte, essencial para desenvolver qualquer tipo de projetos.

* [Aprender Git em 15 minutos][git-tutorial]
* [Learn Git](https://www.codecademy.com/learn/learn-git)
* [GitHub Hello World](https://guides.github.com/activities/hello-world/)
* [A Beginner’s Git and GitHub Tutorial](https://blog.udacity.com/2015/06/a-beginners-git-github-tutorial.html)

## Software necessário e/ou útil para elaboração do projeto

* Compilador C99:
    - [GCC]
    - [Clang]
* Editor de C e Markdown:
    - [Gedit]
    - [Geany]
    - [Code::Blocks]
    - [Atom] (suporta pré-visualização de Markdown)
    - [XCode] (só macOS)
    - [Notepad++] (só Windows)
    - [Remarkable] (só Markdown, com  pré-visualização)
    - ...
* [Git]
    - Linux: instalar a partir do *package manager*/centro de software
        * Ubuntu/Debian/Mint: instalar com comando `sudo apt install git`
    - macOS: incluido no XCode
    - Windows: [download](https://git-scm.com/download/win)
* Desenho de fluxogramas:
    - [Dia](http://dia-installer.de/)
        * Ubuntu/Debian/Mint: instalar com comando `sudo apt install dia`
    - [LibreOffice Draw](https://www.libreoffice.org/)
        * Ubuntu/Debian/Mint: instalar com comando `sudo apt install libreoffice-draw`
    - [Microsoft Visio](https://products.office.com/en/visio) (software pago, apenas Windows)
    - [draw.io](https://draw.io)
    - [Lucid Chart](https://www.lucidchart.com/)

## Peso na avaliação

O projeto vale 10% da nota final (2 valores) e a avaliação do mesmo será feita da seguinte forma:

* 1,1 valores - Código (funcionalidade, indentação, comentários e compilação sem erros/warnings).
* 0,5 valores - Relatório em formato Markdown, incluíndo fluxograma.
* 0,4 valores - Correcta utilização do Git e GitHub, incluindo haver *commits* de ambos os alunos do grupo.


## Honestidade académica

Nesta disciplina, espera-se que cada aluno siga os mais altos padrões de
honestidade académica. Isto significa que cada ideia que não seja do
aluno deve ser claramente indicada, com devida referência ao respectivo
autor. O não cumprimento desta regra constitui plágio.

O plágio inclui a utilização de ideias, código ou conjuntos de soluções
de outros alunos ou indivíduos, ou quaisquer outras fontes para além
dos textos de apoio à disciplina, sem dar o respectivo crédito a essas
fontes. Os alunos são encorajados a discutir os problemas com outros
alunos e devem mencionar essa discussão quando submetem os projetos.
Essa menção **não** influenciará a nota. Os alunos não deverão, no
entanto, copiar códigos, documentação e relatórios de outros alunos, ou dar os
seus próprios códigos, documentação e relatórios a outros em qualquer
circunstância. De facto, não devem sequer deixar códigos, documentação e
relatórios em computadores de uso partilhado. 

Nesta disciplina, a desonestidade académica é considerada fraude, com
todas as consequências legais que daí advêm. Qualquer fraude terá como
consequência imediata a anulação dos projetos de todos os alunos envolvidos
(incluindo os que possibilitaram a ocorrência). Qualquer suspeita de
desonestidade académica será relatada aos órgãos superiores da escola
para possível instauração de um processo disciplinar. Este poderá
resultar em reprovação à disciplina, reprovação de ano ou mesmo
suspensão temporária ou definitiva da ULHT [(2)](#ref2).

## Referências

<a name="ref1"></a>

* (1) Pereira, A. (2017). C e Algoritmos, 2ª edição. Sílabo.

<a name="ref2"></a>

* (2)  Texto adaptado da disciplina de [Algoritmos e Estruturas de Dados][aed] do [Instituto Superior Técnico][ist].

## Licenças

Todo o código neste repositório é disponibilizado através da licença [GPLv3].
O enunciado e restante documentação são disponibilizados através da licença [CC BY-NC-SA 4.0].

## Metadados

* Autor: [Nuno Fachada]
* Curso:  [Licenciatura em Aplicações Multimédia e Videojogos][lamv]
* Instituição: [Universidade Lusófona de Humanidades e Tecnologias][ULHT]



[GPLv3]:https://www.gnu.org/licenses/gpl-3.0.en.html
[CC BY-NC-SA 4.0]:https://creativecommons.org/licenses/by-nc-sa/4.0/
[lamv]:https://www.ulusofona.pt/licenciatura/aplicacoes-multimedia-e-videojogos
[Nuno Fachada]:https://github.com/fakenmc
[ULHT ]:https://www.ulusofona.pt/
[aed]:https://fenix.tecnico.ulisboa.pt/disciplinas/AED-2/2009-2010/2-semestre/honestidade-academica
[ist]:https://tecnico.ulisboa.pt/pt/
 [Markdown]:https://guides.github.com/features/mastering-markdown/
 [GCC]:https://gcc.gnu.org/
 [Clang]:https://clang.llvm.org/
[Gedit]:https://wiki.gnome.org/Apps/Gedit
[Geany]:https://www.geany.org/
[Code::Blocks]:http://www.codeblocks.org/
[Atom]:https://atom.io/
[XCode]:https://developer.apple.com/xcode/
[Notepad++]:https://notepad-plus-plus.org/
[Remarkable]:https://remarkableapp.github.io/
[Git]:https://git-scm.com/
[repositório]:https://github.com/VideojogosLusofona/ic2017p1
[GitHub]:https://github.com/
[git-tutorial]:https://try.github.io/levels/1/challenges/1
[Moodle]: https://secure.grupolusofona.pt/ulht/moodle/
[GitLab]: https://gitlab.com/
[BitBucket]: https://bitbucket.org/
[NotABug]: https://notabug.org/
