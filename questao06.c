#include <stdio.h>

void funcao(char **p) {
    char *t;
    t = (p += sizeof(int))[-1];
    printf("%s\n", t);
}

int main() {
    char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
   /* O ponteiro p é incrementado em 4 posições (porque um inteiro tem 4 bytes) e passa a apontar para a string "ij". 
   Em seguida, p[-1] acessa o elemento anterior, que é a string "gh", e esta string é impressa.*/
   
    funcao(a);
    
    return 0;
}
