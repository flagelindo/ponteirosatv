#include <stdio.h>

int main(void) {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; // Inicialização do array de floats
    float *f;  // Declaração de um ponteiro para float
    int i;     // Contador para o loop

    f = vet;   // O ponteiro f aponta para o início do array vet
    printf("Contador/valor/endereco/endereco\n");

    // Loop que percorre o array vet de 0 a 4
    for (i = 0; i <= 4; i++) {
        // Imprime o índice atual (i)
        printf("i = %d", i);

        // Acessa o valor do array diretamente (vet[i])
        printf(" vet[%d] = %.1f\n", i, vet[i]);

        // Acessa o valor do array via o ponteiro f com deslocamento *(f + i)
        printf(" *(f + %d) = %.1f\n", i, *(f + i));

        // Imprime o endereço do elemento vet[i]
        printf(" &vet[%d] = %p\n", i, (void*)&vet[i]);

        // Imprime o endereço via o ponteiro f + i (que corresponde ao endereço de vet[i])
        printf(" (f + %d) = %p\n", i, (void*)(f + i));

        printf("\n"); // Nova linha para separar a saída de cada iteração
    }
/* O ponteiro f aponta para o início do array vet, então o deslocamento *(f + i) acessa os mesmos valores que vet[i].
&vet[i] retorna o endereço de cada elemento do array, que corresponde ao valor de (f + i) porque o ponteiro está sendo deslocado ao longo do array.
O código imprime, a cada iteração do loop, o valor do índice i, o valor do elemento do array diretamente e via ponteiro, além do endereço dos elementos no array e via ponteiro.
*/
    return 0;
}
