#include <stdio.h>

int main() {
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i = 3;

    aloha[2] = value;         // Válido: atribuição de float para elemento de array float
    scanf("%f", &aloha);      // Válido, mas uso não recomendado. Melhor seria &aloha[0].
    // aloha = "value";       // Inválido: não podemos atribuir uma string a um array float
    // printf("%f", aloha);   // Inválido: %f espera um float, mas aloha é um ponteiro
    coisas[4][4] = aloha[3];  // Válido: atribuição de float para float
    // coisas[5] = aloha;     // Inválido: não podemos atribuir um array a outro array
    // pf = value;            // Inválido: não podemos atribuir um float a um ponteiro para float
    pf = aloha;               // Válido: ponteiro pf recebe o endereço do primeiro elemento de aloha

    return 0;
}
/* no código, temos floats que são declarados então vamos analisar cada comando.
aloha[2] = value é válido, pois é uma atribuição de float para elemento de array float;
scanf("%f", &aloha) também é válido, pois estamos buscando endereço do primeiro elemento do array
porém seria melhor especificar qual elemento nós queremos buscar, tipo &aloha[0];
aloha = "value" não é valido, pois não podemos atribuir uma string a um array float;
printf("%f", aloha); é invalido porque %f espera um float, mas aloha é um ponteiro Portanto, mesmo que aloha seja um ponteiro para float
o %f não consegue interpretá-lo corretamente porque espera um valor float e não um endereço de memória;
coisas[4][4] = aloha[3] é válido, temos atribuição de float para float
coisas[5] = aloha é invalido, não podemos atribuir um array a outro array;
pf = value é inválido também, não podemos atribuir um float a um ponteiro para float;
pf = aloha é válido, já que ponteiro pf recebe o endereço do primeiro elemento de aloha*/
