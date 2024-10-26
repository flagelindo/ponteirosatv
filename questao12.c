#include <stdio.h>
void main() {
    int const *x = 3;
    printf("%d", ++(*x));
}
/* nesse código dará erro de compilação, pois int const *x na atribuição, não deveria ser 3, pois não é um endereço válido
mas sim um valor literal, que resulta em erro de compilação*/