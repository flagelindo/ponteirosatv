#include <stdio.h>

int main() {
    int val = 2;
    int *p1, *p2;
    float temp;
    char ch1 = 'a';
    char *ch2 = "Ponteiros";
    int vet[5] = {1, 2, 3, 4, 5};
    int mat[2][2] = {{1, 2}, {3, 4}};
    int **pp;
    int a = 10;
    int b = 20;
    int *ida[2];
    int **dida;

    // (a) p1 aponta para 'val'
    p1 = &val;
    *p1 = 30;
    printf("val = %d\n", val);  // Saída esperada: val = 30

    // 'p1' aponta para 'val', então '*p1 = 30' altera o valor de 'val' para 30.

    // (b) temp recebe o valor de 'val'
    temp = val;
    printf("temp = %.1f\n", temp);  // Saída esperada: temp = 30.0

    //'temp' é um float e recebe o valor inteiro 'val' (30), que é convertido para 30.0.

    // (c) 'p1' aponta para o início de 'vet'
    p1 = vet;
    printf("*(p1 + 2) = %d\n", *(p1 + 2));  // Saída esperada: *(p1 + 2) = 3

    // '*(p1 + 2)' acessa o terceiro elemento de 'vet', que é 3.

    // (d) 'pp' aponta para 'p1', que aponta para o início de 'vet'
    pp = &p1;
    printf("**pp = %d\n", **pp);  // Saída esperada: **pp = 1

    // '**pp' acessa o valor apontado por 'p1', que é o primeiro elemento de 'vet' (1).

    // (e) 'p1' aponta para o segundo elemento de 'vet'
    p1 = &vet[1];
    printf("*p1 = %d\n", *p1);  // Saída esperada: *p1 = 2

    // '*p1' acessa o valor do segundo elemento de 'vet', que é 2.

    // (f) 'p1' aponta para o primeiro elemento de 'mat'
    p1 = &mat[0][0];
    printf("*p1 = %d\n", *p1);  // Saída esperada: *p1 = 1

    //'*p1' acessa o valor do primeiro elemento de 'mat', que é 1.

    // (g) Aritmética de ponteiros com 'p1'
    printf("*(p1 + 3) = %d\n", *(p1 + 3));  // Saída esperada: *(p1 + 3) = 4

    // Como 'mat' é uma matriz de inteiros contíguos na memória, '*(p1 + 3)' acessa o quarto elemento da matriz (mat[1][1]), que é 4.

    // (h) Ponteiros para ponteiros
    ida[0] = &a;
    ida[1] = &b;
    dida = ida;
    printf("**dida = %d\n", **dida);  // Saída esperada: **dida = 10

    // 'dida' aponta para 'ida', que contém o endereço de 'a'. '**dida' acessa o valor de 'a', que é 10.

    // (i) Acesso ao segundo elemento de 'ida' através de 'dida'
    dida++;
    printf("**dida = %d\n", **dida);  // Saída esperada: **dida = 20

    // Incrementar 'dida' faz com que ele aponte para 'ida[1]', que contém o endereço de 'b'. '**dida' acessa o valor de 'b', que é 20.

    return 0;
}
