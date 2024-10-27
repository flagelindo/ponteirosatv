#include <stdio.h>
int main(){
  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
                         {7, 8, 9}, {10, 11, 12}};
  printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}
/* Nesse programa nós usamos um array com 4 linhas e 3 colunas e colocamos para imprimir valores
que serão endereços de memória em suas respectivas posições, por exemplo:
o X+3 é um ponteiro para a primeira linha do array, no caso x[0], e quando somamos 3, nós avançamos para a quarta linha (no caso, x[3])
pois a posição 0 que é inicial, é referente a primeira linha da matriz.

o *(x+3) desreferencia o ponteiro, o que torna diferente de apenas x+3. O que acontece aqui é que a gente acessa diretamente o conteúdo 
da quarta linha, que seria representado como x[3][0], portanto, ele será o endereço do primeiro elemento da quarta linha (no caso x[3][0]).

já o *(x + 2) + 3, é diferente x + 2 é o ponteiro para a terceira linha (x[2]) então *(x + 2) acessa o conteúdo da terceira linha,
que é o endereço de x[2][0]. quando somamos + 3 nesse endereço, movemos o ponteiro três posições adiante, que é o endereço de x[2][3]
porém como cada linha tem apenas 3 colunas, x[2][3] não existe, mas o código calcula o endereço como se fosse o próximo elemento na sequência linear de memória.

Os valores exibidos por printf serão os endereços de memória das posições x + 3, *(x + 3), e *(x + 2) + 3, exibidos como inteiros não-signados (%u).*/