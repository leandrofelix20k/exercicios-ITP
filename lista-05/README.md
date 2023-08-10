# Lista 05 - Matrizes

## Ex01: Desenhando em uma matriz de pixels

Em processamento de imagens, a estrutura de dados de uma imagem é na forma de uma
matriz de pixels, onde cada célula da matriz possui o valor da cor do pixel naquela
posição da imagem. Neste exercício trabalharemos com uma imagem de 7 por 7 pixels
para representar os dígitos (0 a 9) em preto e branco. Assim, os valores dos pixels
assumem apenas dois valores, 1 para preto e 0 para branco. As coordenadas (linha,
coluna) da imagem correspondem aos índices da matriz, isto é, a célula (0,0) da
matriz reflete a coordenada superior esquerda, e (6,6) a coordenada inferior direita
da imagem.

Crie uma programa que trace linhas pretas horizontais ou verticais na imagem a partir
de comandos de movimentação de um cursor pincel imaginário. Por exemplo, para
'desenharmos' o dígito 2 a partir da coordenada (0,0) devemos informar:

0 0

0 6

3 6

3 0

6 0

6 6

O programa deve parar a movimentação do pincel imaginário quando o usuário informar a
coordenada: -1 -1. Assim, para desenhar o dígito 1 no centro da imagem, o usuário
informa:

0 3

6 3

-1 -1

Após a movimentação do cursor o programa deve imprimir a imagem colocando um
tracejado ('_') quando o pixel for branco e um jogo da velha ('#') quando o pixel for
preto. Use pelo menos uma função para imprimir a imagem passando a matriz como
argumento.

---

## Ex02: Expressão com matrizes e funções

Escreva um programa para resolver a expressão

    R = M1 * M2 + M2 * M3 + M3 * M4

Onde M1, M2, M3 e M4  são matrizes de números inteiros, que serão fornecidas ao
programa.

Um ponto importante a notar é que expressão de multiplicação se repete 3 vezes e a de
adição se repete duas vezes. Assim esse caso é um bom exemplo em que podemos aplicar
funções para deixar o programa muito mais claro bem como muito mais fácil de corrigir
no caso de erros.

Para resolver escreva, **pelo menos**, duas funções:

//multiplica duas matrizes A e B e guarda o resultado em R:

void mult_mat()

//soma duas matrizes A e B e guarda o resultado em R:

void add_mat()

A entrada do programa é composta por duas partes:
1. A primeira linha é o tamanho da matriz L C;
2. As linhas que seguem são os valores da matriz;
3. As informações 1 e 2 se repetem 4 vezes, 1 para cada matriz di problema;

A sáida do programa é dividida em dois tipos:

1. O valor de R, no formato similar ao formato da entrada;
2. Uma mensagem se a expressão não pode ser calculada, que pode ser uma das
condições abaixo:
    * Alguma das multiplicações não pode ser realizada. Neste caso o programa imprime:
"Valor de alguma das multiplicações não pode ser calculado";
    * Alguma das três matrizes resultado das multiplicações tem tamanho diferente das
demais. Neste caso o programa imprime: "Valor da soma não pode ser calculado".

---

## Ex03: Giro da matriz

Criar um algoritmo que entre com valores inteiros para uma
matriz m 3 x 3 e imprima a matriz final, conforme mostrado
a seguir:

    [ 1 8 9
      4 5 6
      7 2 3 ]

A matriz fira 90°

    [ 7 4 1
      2 5 8
      3 6 9 ]

---

## Ex04: Matriz Vetor

Leia valores inteiros para formar a matriz A<sub>3x5</sub>. . Gerar e imprimir uma
matriz (vetor) SL (soma das 3 linhas), onde cada elemento é a soma dos elementos de
uma linha da matriz A.

## Ex05: Matriz Transposta

Escreva  um programa que recebe o número de linhas  l e colunas c, onde l, c < 30, de
uma matriz A e cria uma matriz B, que é a matriz transposta de A.

O seu programa deve imprimir a matriz resultante B.