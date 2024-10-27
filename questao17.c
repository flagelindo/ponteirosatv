/* o que é um memory leak? memory leak é um vazamento de memória que ocorre quando a gente aloca uma memória 
dinamicamente, geralmente usando malloc e em seguida perdemos a referência para essa memória sem liberar
o espaço alocado a memória alocada não é mais acessível pelo programa, mas também não é devolvida ao sistema 
operacional. nesse caso, o programa pode consumir muita memória desnecessária causando problemas de 
desempenho ou até mesmo falhas por falta de espaço disponível. para projetos maiores, e até mesmo menores
é importantíssimo fazer bom uso dessa ferramenta*/ 

//código que é feito para usar memory leak:
#include <stdio.h>
#include <stdlib.h> // biblioteca que usamos para usar malloc 

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 5); // Aloca memória para 5 inteiros

    if (ptr == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Supostamente, o programa faz algo com 'ptr'
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2;
        printf("%d ", ptr[i]);
    }
    printf("\n"); //<-- aqui está o problema, a memória não foi liberada e o programa termina

   
    // Memory leak: a memória alocada por 'ptr' não foi liberada 
    return 0;
}

//agora um código para corrigir e conseguir liberar memória, vou dar CTRL C e CNTRL V do outro código e fazer a alteração 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 5); // Aloca memória para 5 inteiros

    if (ptr == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Supostamente, o programa faz algo com 'ptr'
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2;
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(ptr); // aqui corrigimos o memory leak de forma simples
    return 0;
}

