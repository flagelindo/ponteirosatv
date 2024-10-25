#include <stdio.h>

struct teste {
    int x = 3;
    char nome[] = "jose";
};

main() {
    struct teste *s;
    printf("%d", s->x);
    printf("%s", s->nome);
}
/*quando o ponteiro é declarado, ele não sabe automaticamente pra quem deve apontar, o código vai dar erro porque está solto. 
para resolver precisamos alocar memória dinamicamente para o ponteiro para fazer s apontar para um local válido na memória*/

//agora fazendo o código de forma corrijida
#include <stdio.h>
#include <stdlib.h>  // adicionei essa biblioteca para usar malloc 

struct teste {
    int x;
    char nome[20]; // Defini um tamanho fixo para o nome
};

int main() {
    struct teste *s;

    // aqui estou alocando memória para a struct e fazendo o ponteiro apontar para essa área
    s = (struct teste *)malloc(sizeof(struct teste));

    // agora, posso atribuir valores
    s->x = 3;
    sprintf(s->nome, "jose");

   
    printf("%d\n", s->x);
    printf("%s\n", s->nome);

    // liberação da memória alocada
    free(s);

    return 0;
}
