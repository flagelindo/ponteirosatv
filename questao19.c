#include <stdio.h>
#include <stdlib.h>
void contagem(float* valor, int n)
{
	float temp;
	int i;
	int j;
	for(i=0; i<n-1; i++) {

		for(j=0; j<n-i-1; j++) {

			if (valor[j]>valor[j+1]) {
				temp=valor[j];
				valor[j]=valor[j+1];
				valor[j+1]=temp;
			}


		}
	}
	for(i=0; i<n; i++) {
		printf("%f, ",valor[i]);
	}

}
int main() {
	int n;
	int i;
	int j;
	float *valor;
	printf("quantos valores vocC* quer denifir?\n");
	scanf("%d", &n);
	valor=(float*)malloc(n*sizeof(float));
	if (valor==NULL) {
		printf("erro de alocaC'C#o de memC3ria\n");

	}
	printf("coloque os valores aqui:\n");
	for (i=0; i<n; i++)
	{
		scanf("%f",&valor[i]);
	}
	contagem(valor,n);
	free(valor);
	return(0);



}