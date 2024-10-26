#include <stdio.h>

int main() {
    char x_char[4];
    int x_int[4];
    float x_float[4];
    double x_double[4];

    printf("x declarado como char: %ld %ld %ld %ld\n", (long)&x_char[0], (long)&x_char[1], (long)&x_char[2], (long)&x_char[3]);
    printf("x declarado como int: %ld %ld %ld %ld\n", (long)&x_int[0], (long)&x_int[1], (long)&x_int[2], (long)&x_int[3]);
    printf("x declarado como float: %ld %ld %ld %ld\n", (long)&x_float[0], (long)&x_float[1], (long)&x_float[2], (long)&x_float[3]);
    printf("x declarado como double: %ld %ld %ld %ld\n", (long)&x_double[0], (long)&x_double[1], (long)&x_double[2], (long)&x_double[3]);

    return 0;
}
/*o código imprimiu os quatro endereços dos quatro elementos do vetor char, int, float e double*/ 

/*nessa situação dada temos um vetor de 4 elementos que tipo x[4]. então por exemplo, os tamanhos dos dados são 
char: 1 byte; int: 2 bytes; float: 4 bytes; double: 8bytes. então o que eu esperei para as saídas em decimal seguiam a seguinte lógica:
x declarado como char: Endereço de x+1 = 4092 + 1 = 4093, x+2 = 4092 + 2 = 4094
x declarado como int : Endereço de x+1 = 4092 + 2 = 4094, x+2 = 4092 + 4 = 4096
x declarado como float:Endereço de x+1 = 4092 + 4 = 4096, x+2 = 4092 + 8 = 4100
x declarado como double:Endereço de x+1 = 4092 + 8 = 4100,x+2 = 4092 + 16 = 4108*/