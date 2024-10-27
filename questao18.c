/* Um ponteiro para função em C permite armazenar o endereço de uma função, possibilitando chamá-la indiretamente. 
podemos usar por exemplo para selecionar dinamicamente funções a serem executadas*/

// código feito:
#include <stdio.h>

// Função que será apontada
void saudacao(int vezes) {
    for (int i = 0; i < vezes; i++) {
        printf("Olá!\n");
    }
}

int main() {
    // Declaração do ponteiro para função
    void (*ptr_funcao)(int);
    
    // Atribuindo a função ao ponteiro
    ptr_funcao = saudacao;
    
    // Chamando a função usando o ponteiro
    ptr_funcao(3); // "Olá!" será impresso 3 vezes
    
    return 0;
}

