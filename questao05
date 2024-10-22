#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char** str){
    (*str)++;
}

int main(){
    char *str = (void *)malloc(50 * sizeof(char));
    strcpy(str, "Agostinho");
    funcao(&str);
    puts(str);
    free(str);
    return 0;
/* ele não obteve "gostinho" porque o código original
só incrementa o ponteiro local dentro da função e não modifica o ponteiro original que está em main.
Para alcançar o resultado desejado, seria necessário desreferenciar
o ponteiro duplo e incrementar o valor apontado pelo ponteiro original, como mostrado na correção*/
}
