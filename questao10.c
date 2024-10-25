#include <stdio.h>

int main() {
    int vet[] = {4, 9, 13};
    int i;
    for (i = 0; i < 3; i++) {
        printf("%d ", *(vet + i));  // Acessa os valores de vet[i] via ponteiro
    }
    return 0;
}
/* esse programa ele acessa os elementos do array vet, utilizando a aritmética de ponteiros
a expressão *(vet + i) é equivalente a vet[i], daí ele acessa os valores diretamente e imprime os números 4,9 e 13*/

#include <stdio.h>

int main() {
    int vet[] = {4, 9, 13};
    int i;
    for (i = 0; i < 3; i++) {
        printf("%p ", (void*)(vet + i));  // Imprime os endereços de vet[i]
    }
    return 0;
}
/* já esse pograma imprime os endereços dos elementos do array vet[] utilizando a mesma aritmética de ponteiros. 
A expressão vet + i retorna o endereço do elemento vet[i]. 
O endereço é impresso no formato hexadecimal, utilizando %p, que é o especificador de formato para ponteiros.
que imprimiu os endereços 0x7ffc1e3030a0 0x7ffc1e3030a4 0x7ffc1e3030a8*/
