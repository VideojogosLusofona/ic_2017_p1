<!--
1º Projecto de Introdução à Computação 2017/2018 (c) by Nuno Fachada

1º Projecto de Introdução à Computação 2017/2018 is licensed under a
Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.

You should have received a copy of the license along with this
work. If not, see <http://creativecommons.org/licenses/by-nc-sa/4.0/>.
-->

# 1º Projecto de Introdução à Computação 2017/2018

## Descrição do problema

Pretende-se que os alunos implementem um jogo para testar o seu conhecimento de bases numéricas.

## Material a entregar

* Código devidamente comentado e indentado:
    - Deve implementar as funcionalidades pedidas.
    - Deve compilar sem erros no compilador [GCC] e/ou [Clang] com as opções
      `-std=c99 -Wall -Wextra -Wpedantic`.
* Fluxograma em formato SVG
* Relatório em formato [Markdown], contendo as seguintes secções:
    - Cabeçalho:
        - Deve conter título, bem como nomes e números de aluno dos autores.
    - Introdução
    - Metodologia:
        * Fluxograma em formato SVG
    - Resultados
    - Conclusões

## Forma de trabalho e data de entrega

A forma de obter, editar e submeter o trabalho será através do [GitHub]. O GitHub é uma plataforma de alojamento de código baseada em [Git], que por sua vez é um sistema de gestão de código fonte, essencial para desenvolver qualquer tipo de projetos.

* [Aprender Git em 15 minutos][git-tutorial]
* [GitHub Hello World](https://guides.github.com/activities/hello-world/)

O procedimento para este trabalho é o seguinte:

1. Criar uma conta no [GitHub](https://github.com/join), caso ainda não tenhas uma.
2. Ir até ao [repositório] do projeto e criar uma ramificação  (*fork*) do mesmo na tua conta (botão **Fork** no canto superior direito).
3. Obter uma cópia local (no teu PC) da tua ramificação do projeto com o comando `git clone https://github.com/OTeuUserName/ic2017p1.git` (substituir `OTeuUserName` pelo teu nome de utilizador no GitHub).
4. Dentro da pasta do projeto, chamada *ic2017p1*, criar uma sub-pasta com os números de aluno que constitutem o grupo, por exemplo *a21700000_a21700001*.
5. Será dentro desta sub-pasta que deverão ser colocados os três ficheiros pedidos (código C, fluxograma em formato SVG e relatório em formato Markdown).
6. Cada edição minimamente significativa de código deve inserida na árvore git.
7. Após o projeto estar terminado deve ser carregado na tua conta GitHub, e deve ser solicitado um *pull request* (pedido de integração)  à árvore original do projecto (VideojogosLusofona/ic2017p1).

Atenção que a entrega do projeto (*pull request*) deverá ser feita até às **23h de 5 de novembro de 2017**.

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
* [Git] ([tutorial](https://try.github.io/levels/1/challenges/1))
    - Ubuntu: instalar com comando `sudo apt install git`
    - macOS: incluido no XCode
    - Windows: [download](https://git-scm.com/download/win)

## Honestidade académica

Nesta disciplina, espera-se que cada aluno siga os mais altos padrões de
honestidade académica. Isto significa que cada ideia que não seja do
aluno deve ser claramente indicada, com devida referência ao respectivo
autor. O não cumprimento desta regra constitui plágio.

O plágio inclui a utilização de ideias, código ou conjuntos de soluções
de outros alunos ou indivíduos, ou quaisquer outras fontes para além
dos textos de apoio à disciplina, sem dar o respectivo crédito a essas
fontes. Os alunos são encorajados a discutir os problemas com outros
alunos e devem mencionar essa discussão quando submetem os projectos.
Essa menção **não** influenciará a nota. Os alunos não deverão, no
entanto, copiar códigos, documentação e relatórios de outros alunos, ou dar os
seus próprios códigos, documentação e relatórios a outros em qualquer
circunstância. De facto, não devem sequer deixar códigos, documentação e
relatórios em computadores de uso partilhado. 

Nesta disciplina, a desonestidade académica é considerada fraude, com
todas as consequências legais que daí advêm. Qualquer fraude terá como
consequência imediata a anulação dos projectos de todos os alunos envolvidos
(incluindo os que possibilitaram a ocorrência). Qualquer suspeita de
desonestidade académica será relatada aos órgãos superiores da escola
para possível instauração de um processo disciplinar. Este poderá
resultar em reprovação à disciplina, reprovação de ano ou mesmo
suspensão temporária ou definitiva da ULHT [(2)](#ref2).

## Referências

<a name="ref1"></a>

* (1) Pereira, A. (2017). C e Algoritmos, 2ª edição. Sílabo.

<a name="ref2"></a>

* (2)  Texto adaptado da disciplina de	[Algoritmos e Estruturas de Dados][aed] do [Instituto Superior Técnico][ist].

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
