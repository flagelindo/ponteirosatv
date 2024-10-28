#include <stdio.h>
#include <stdlib.h>
int ordem(const void *valor_x, const void *valor_y ){
    float x = *(float*) valor_x;
    float y = *(float*) valor_y;
    
    return x-y; 
}

int main(){
int i, n;
float *vetor;
printf("quantos elementos você quer?\n");
scanf("%d",&n);
vetor=(float*)malloc(n*sizeof(float));
printf("quais elementos você quer ordernar\n");
for(i=0;i<n;i++)
{
 scanf("%f", &vetor[i]);
} 
qsort(vetor,n, sizeof(float),ordem);
for(i=0;i<n;i++){
printf("%.2f", vetor[i]);    
}
return 0;
}
   