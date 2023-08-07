# Lista 03 - Funções

## Ex01: Função Soma Fatorial

Escreva uma função somaFat, que recebe dois números inteiros x e y e retorna o
resultado de x! + y!. Faça também uma função auxiliar fatorial, que recebe um
número n e retorna o resultado de n!. A função somaFat deve chamar a função fatorial
para fazer o cálculo do fatorial de um número

---

## Ex02: Corrida de Lesmas (com função)

A corrida de lesmas é um esporte que vem crescendo nos últimos anos, fazendo com que
várias pessoas dediquem suas vidas tentando capturar lesmas rápidas. A captura de
lesmas não é uma tarefa fácil, visto que quase todas as lesmas são muito lentas. Com
o objetivo de categorizar as lesmas, uma classificação da lesma é feita com base em
sua velocidade:

Level 1: Se a velocidade é menor que 10 cm/h.

Level 2: Se a velocidade é maior ou igual a 10 cm/h e menor que 20 cm/h.

Level 3: Se a velocidade é maior ou igual a 20 cm/h.

Sua tarefa é identificar qual o maior level de velocidade de um determinado grupo de
lesmas. Crie um programa que recebe um inteiro N que indica quantas lesmas o grupo
possui, em seguida o programa irá receber N valores inteiros positivos, que
representam a velocidade de cada lesma do grupo. Seu programa deve possuir uma função
que, dada uma velocidade, retorna um inteiro que indica o level em que a lesma se
encontra. Sua saída deve ser o maior level encontrado no grupo.

---

## Ex03: Médias

Antigamente, o cálculo da média na UFRN era calculado através da seguinte fórmula:

Média = ((nota01 x 4) + (nota02 x 5) + (nota03 x 6)) / 15

Exemplo, se uma aluno tirou as notas 8.00, 7.00 e 6.00, sua média é 6.87.

((8.00 x 4) + (7.00 x 5) + (6.00 x 6)) / 15 = 6.87

Atualmente, o cálculo da média na UFRN é uma média aritmética das notas obtidas em
cada unidade.

Você deve implementar um programa que tenha 3 funções. A primeira função deve receber
como parâmetro qual o tipo de média que deve ser calculado ('A' para a média antiga e
'N' para a média nova) e as 3 notas do aluno e deverá retornar a média calculada. para
calcular a média essa função deverá chamar outra função de acordo com o parâmetro do
tipo da média. Se o parâmetro for 'A' deverá fazer o cálculo antigo da média. Se for
'N' deverá fazer o cálculo novo da média.

Observações: as notas deverão conter duas casas decimais.