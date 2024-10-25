#include <stdio.h>

int main() {
    int mat[4] = {10, 20, 30, 40};
    int *p;
    int x;

    // Expressão válida, mat recebe o endereço de ma[1]
    p = mat + 1;
    
    // Expressão inválida, arrays são imutáveis em relação ao seu endereço inicial
     p = mat++;

    // Expressão inválida, a mesma coisa da questão anterior, mat não é uma variável, mas sim um bloco de memória constante
     p = ++mat;

    // Expressão válida, *mat desreferencia o ponteiro mat, que aponta para o primeiro elemento do array.
    x = (*mat);

    return 0;
}
