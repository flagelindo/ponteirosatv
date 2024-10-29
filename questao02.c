#include <stdio.h>

int main() {
    int i = 5, *p;

    // Atribui o endereço de 'i' a 'p'
    p = &i;

    // Imprime os valores solicitados
    printf("%p %p %d %d %d %d\n", 
           p,          // Endereço de 'i', assumido como 4094
           p + 1,      // Próximo endereço, que seria 4096 pois p é int (2 bytes)
           *p + 2,     // Valor de 'i' (5) mais 2, que dá 7
           **&p,       // Valor apontado por 'p', que é 5
           3 * *p,     // 3 vezes o valor de 'i', ou seja, 3 * 5 = 15
           **&p + 4);  // Valor de 'i' (5) mais 4, que dá 9

    return 0;
}
