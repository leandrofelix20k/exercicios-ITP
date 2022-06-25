# Lista 01 - Conceitos Básicos e Condicionais em Cs

## Ex01: Conversor de temperaturas - Configurável

Escreva um programa em que o usuário informe a temperatura (em números reais), a
escala utilizada (Celsius, Farenheit ou Kelvin) e a escala em que o resultado deve
aparecer.

|A saída do programa deve ser a temperatura na escala escolhida, com duas casas
decimais de precisão.

Considere que as escalas serão informadas como uma única letra:

C = Temperatura em graus Celsius (ºC)

F = Temperatura em graus Farenheit (*F)

K - Temperatura em graus Kelvin (K)

.A conversão entre as escalas pode ser feita com as seguintes equações:

K=C+273.15

F=C*1.8+32

---

## Ex02: Tabela Verdade

A tabela verdade é um mecanismo que nos ajuda a visualizar o resultado de
operações lógicas. Uma tabela verdade pode ter qualquer quantidade de variáveis e
ser usada para ajudar a visualizar o resultado de qualquer operação lógica, mas a
tabela básica usa apenas dois (ou mesmo um) operandos.

Escreva um programa que lê do usuário uma operação lógica e constrói sua tabela
verdade. Para simplificar um pouco, nossas tabelas sempre usarão duas variáveis
que nunca são a mesma. As operações que devem ser realizadas, bem como
exemplos de entrada possíveis são mostradas na tabela abaixo:

Operação | Símbolo | Exemplo de entrada
:---: | --- | :---:
a and   b | & | a & b
b or c | \ | b \ c
((not(z) and k) or (z and not(k)) | ^ | z ^ k

## Ex03: Aluno na Prova Final ? - Pesos variáveis

Um aluno terminou o semestre e quer saber se foi aprovado ou quanto precisa tirar
na prova final para passar. A nota de um aluno é calculada como sendo a média
ponderada entre suas notas em 3 unidades e os pesos de cada nota. O problema é
que o professor não usa os pesos fixos, para cada aluno os pesos são diferentes,
assim o cálculo da nota necessária varia de aluno para aluno.
Pra ajudar todo mundo a descobrir seu resultado na disciplina e quanto precisa de
nota, você deve escrever um programa que recebe as três e os três pesos de cada
unidade. Usando as notas e os pesos, você deve calcular a média do aluno e
imprimir a saída de acordo com a média. O estado do aluno é definido pelas relações
abaixo:
* Caso a média seja menor do que 3.0, o programa deve imprimir: "O aluno foi
REPROVADO com média <media>"
* Caso a média seja maior ou igual a 7.0, o programa deve imprimir: "O aluno
foi APROVADO com média <media>".
* Caso a média esteja no intervalo [3.0, 7[ o programa deve imprimir: "O aluno
foi ficou em RECUPERAÇÃO com média <media> precisando de <valor>".
* Onde valores de <media> e <nota> são os valores da média e o valor
necessário para o aluno ser aprovado, respectivamente.
A entrada do programa consiste 3 pares, contendo a nota e o peso de cada unidade.
