#include <stdio.h>
#define TAM 10

// Função que realiza uma busca linear no vetor
int funcao1(int vetor[], int vt) {
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == vt) {
            return i;  // Retorna o índice onde o valor foi encontrado
        }
    }
    return -1;  // Retorna -1 caso o valor não seja encontrado
}

// Função que realiza uma busca binária no vetor (recursiva)
int funcao2(int vetor[], int vi, int vt, int f) {
    int m = (vi + f) / 2;
    if (vi > f) {
        return -1;  // Retorna -1 caso o valor não seja encontrado
    }
    if (vetor[m] == vt) {
        return m;  // Retorna o índice onde o valor foi encontrado
    }
    if (vt < vetor[m]) {
        return funcao2(vetor, vi, vt, m - 1);  // Chama a função para a metade esquerda
    }
    return funcao2(vetor, m + 1, vt, f);  // Chama a função para a metade direita
}

int main() {
    int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    printf("%d\n", funcao1(vetor, 15));  // Esperado: 7
    printf("%d\n", funcao2(vetor, 0, 15, TAM - 1));  // Esperado: 7
    return 0;
}

/*
    Resposta das afirmativas:

    I. "O resultado da impressão na linha 24 é 7 e -7."
       -> INCORRETO. Ambas as funções retornam 7, já que o valor 15 está na posição 7 do vetor.

    II. "A função funcao1, por meio caso, é uma estratégia mais rápida do que a função funcao2."
       -> INCORRETO. funcao1 usa busca linear e funcao2 usa busca binária, que é geralmente mais rápida.

    III. "A função funcao2 implementa uma estratégia iterativa na concepção do algoritmo."
       -> INCORRETO. funcao2 é recursiva, pois chama a si mesma até encontrar o valor.

    Resumo: Nenhuma das afirmativas é verdadeira.
    Resposta correta: E. Nenhuma das afirmativas.
*/
