#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void soma (int *a, int *b, int*c, int n){
    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
    }
}
int main(){
int i, n;
int *a;
int *b;
int *c; 
printf("Digite o tamanho dos vetores:\n");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
b=(int*)malloc(n*sizeof(int));
c=(int*)malloc(n*sizeof(int));
printf("Coloque os valores para A\n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    
}
printf("Coloque os valores pra B\n");
for(i=0;i<n;i++){
    scanf("%d", &b[i]);
}
soma(a,b,c,n);
for(i=0;i<n;i++){
    printf("%d,", c[i]);
}
free(a);
free(b);
free(c);

return 0;
}