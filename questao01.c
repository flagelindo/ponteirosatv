#include <stdio.h>

int main() {
    int i = 3, j = 5;
    int *p, *q;

    // Atribui o endereço de 'i' a 'p' e o endereço de 'j' a 'q'
    p = &i;
    q = &j;

    // 1. Verifica se o ponteiro 'p' aponta para o endereço de 'i'
    printf("p == &i: %d\n", p == &i); // Resultado: 1 (Verdadeiro)

    // 2. Subtrai o valor apontado por 'q' do valor apontado por 'p'
    printf("*p - *q: %d\n", *p - *q); // Resultado: -2

    // 3. Obtem o valor apontado pelo endereço de 'p' (que é o valor de 'i')
    printf("**&p: %d\n", **&p); // Resultado: 3

    // 4. Calcula 3 - *p/(*q) + 7
    printf("3 - *p/(*q) + 7: %d\n", 3 - *p/(*q) + 7); // Resultado: 10

    return 0;
}
