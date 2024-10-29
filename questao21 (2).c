#include <stdio.h>
#include <stdlib.h>
int crescente(const void* valor_x, const void* valor_y)
{
	int x = *(int*) valor_x;
	int y = *(int*) valor_y;
	return x-y;


}
int decrescente(const void* valor_x, const void* valor_y ) {
	int x = *(int*) valor_x;
	int y = *(int*) valor_y;
	return y-x;

}

void troca(int *valor, int n, int (*compara) (const void*, const void*)) {
	int temp, i,j;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-i-1; j++) {
			if(compara(&valor[j], &valor[j+1])>0) {
				temp = valor[j];
				valor [j] = valor [j+1];
				valor [j+1] = temp;

			}
		}

	}
}

int main() {
	int i, n;
	int *valor;
	char escolha;
	printf("quantos elementos vocC* quer?");
	scanf("%d", &n);
	valor = (int*)malloc(n*sizeof(int));
	printf("quais elementos vocC* quer?");
	for (i=0; i<n; i++) {
		scanf("%d",&valor[i]);
	}
	printf("\n");
	getchar();
	printf("Digite A para crescente ou B para decrescente:\n");
	scanf("%c", &escolha);
	switch(escolha) {
	case 'A':
		troca(valor, n, crescente);
		for(i=0; i<n; i++) {
			printf("%d,", valor[i]);
		}
		break;
	case 'B':
		troca(valor, n, decrescente);
		for(i=0; i<n; i++) {
			printf("%d,", valor[i]);
		}
		break;

	}
	free(valor);
	return 0;
}
