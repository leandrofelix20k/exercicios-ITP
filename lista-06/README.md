# Lista 06 - Strings

## Ex01: Contador e localizador de substrings

Escreva um programa que recebe duas strings de até 40 caracteres, A e B, e informa
quantas vezes A aparece dentro de B. O programa deve ignorar diferenças de maiúsculas
e minúsculas e deve apontar as posições onde cada repetição inicia.

---

## Ex02: Contador de palavras

Escreva um programa em C que conta o número de palavras dentro de um texto longo digitado pelo usuário. Algumas regras nesta contagem de palavras:

1. Qualquer caractere diferente de um espaço, mesmo que sozinho pode ser considerado
uma palavra;
2. Lembre-se que o usuário pode digitar mais de um espaço entre as palavras;
3. Caso algum sinal de pontuação esteja junto de uma palavra, o mesmo pode ser
acrescido a esta.

---

## Ex03: Inserir e Remover strings

Uma operação corriqueira e útil quando lidamos com strings é inserir e remover partes
em uma/de uma string. Nesta questão vamos implementar essas duas operações úteis
atráves de funções, assim implemente duas funções: strinsert e strremove, que
funcionam da forma descrita abaixo.

strremove: recebe como argumento duas strungs **s1** e **s2** e uma string **res**
para guardar o resultado. A função deve remover a primeira ocorrencia de **s1**
em **s2**, e armazenar o resiltado em res. As strings **s1** e **s2** devem
armazenar o resultado em **res**. As strings **s1** e **s2** devem manter seu valor
original ao fim da função.

Usanso as funções strinsert e strremove implemente um progama que leia a entrada,
os parâmetros e execute a função correspondente como é mostrado nos exemplos de
entrada e saída. para esta questão considere que o tamanho das strings s1 e s2
são no máximo 50.


---

## Ex04: Concatenando strings

Implemente um programa que solicite ao usuário que insira várias linhas de texto,
sendo que cada linha contém uma string. O programa deve concatenar todas as stringsinseridas em uma única string, preservando a ordem em que foram digitadas. O
programa deve parar de ler as linhas quando uma linha em branco for inserida. Após a
leitura, o programa deve exibir na tela a string resultante da concatenação das
strings inseridas.

---

## Ex05: Função para dividir strings (strsplit)

Implemente a função strsplit, que deve dividir uma string de entrada e armazenar o
resultado em duas strings de saída, de acordo com um caractere separador. Por exemplo,
se a string de entrada for "aula!lip" e o caractere separador for '!', a função deve
armazenar na primeira string de saída a string "aula" (todos os caracteres do começo
da string até o anterios ao separador) e na segunda a string "lip" (todos os
caracteres seguintes ao separador). Assuma que a string de entrada terá sempre uma
única ocorrência do caractere separador.

Implemente também a função main, que deve ler do usário uma string possivelmente
contendo espaços em branco e um caractere separador. A função main deve mostra em
seguida as strings produzidas por uma chamada à função solicitada.

As strings do programa têm tamanho máximo igual a 30.