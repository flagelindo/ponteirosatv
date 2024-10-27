#include <stdio.h>

int f(int a, int *pb, int **ppc) {
    int b, c;
    **ppc += 1; 
    c = **ppc;  
    
    *pb += 2;   
    b = *pb;    
    
    a += 3;     
    
    return a + b + c; // Retorna a soma de a + b + c
}

int main() {
    int c, *b, **a;
    c = 5;      // Inicializa c com 5
    b = &c;     // b aponta para c
    a = &b;     // a aponta para b
    
    printf("%d\n", f(c, b, a)); 
    getchar();
    
    return 0;
}
 /*Esse programa usa ponteiros para alterar o valor de uma variável de maneira indireta. 
 Começamos com a variável c valendo 5. A função f recebe três parâmetros: um valor de a, um ponteiro pb que aponta para c, e um ponteiro duplo ppc que também acaba acessando c. 
 Dentro da função, **ppc += 1 aumenta c de 5 para 6, depois *pb += 2 aumenta c de 6 para 8. O parâmetro a também é incrementado em 3, passando de 5 para 8. 
 No final, a função retorna a soma de a, b (que recebe o valor de c após o segundo incremento, ou seja, 8), e c (que, após o primeiro incremento, é 6). 
 Portanto, a soma final é 8 + 8 + 6, resultando em 22*/






