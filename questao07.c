int main(void) {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");
    for(i = 0; i <= 4; i++) {
        printf("%d/%f/%f/%p/%p\n", i, vet[i], *(f+i), &vet[i], f+i);
 /* foi mostrado o seguinte na saída:
 contador/valor/valor/endereco/endereco
0/1.100000/1.100000/(endereço de vet[0])/(endereço de vet[0])
1/2.200000/2.200000/(endereço de vet[1])/(endereço de vet[1])
2/3.300000/3.300000/(endereço de vet[2])/(endereço de vet[2])
3/4.400000/4.400000/(endereço de vet[3])/(endereço de vet[3])
4/5.500000/5.500000/(endereço de vet[4])/(endereço de vet[4])
*/ justificar
    }
    return 0;
}
