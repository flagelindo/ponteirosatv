#include <stdio.h>
int main() {
	int a, b;
	int x, y, z;
	scanf("%d %d", &a, &b);
	x = a;
	y = b;
	z = a + b;
	while (a) {
		x = x | b;
		y = y ^ a;
		z = z & (a+b);
		a = a >> 1;
		b = b << 1;
	}
	printf ("%d %d %d\n", x, y, z);
	return 0;
}
/*
O cC3digo comeC'a lendo dois nC:meros inteiros, a e b. Em seguida, as variC!veis x, y, e z sC#o inicializadas: x recebe o valor de a, y o de b, e z a soma de a + b.
Um loop while executa enquanto a for diferente de zero. Dentro do loop, x C) atualizado com o valor x | b (OR entre x e b), y C) atualizado com y ^ a (XOR entre y e a),
e z C) atualizado com z & (a + b) (AND entre z e a + b).ApC3s cada operaC'C#o, a e b sC#o deslocados: a C) dividido por 2 (a >> 1), e b C) multiplicado por 2 (b << 1). A cada
iteraC'C#o, isso muda os valores de a e b. Por exemplo, comeC'ando com a = 10 e b = 1, no primeiro loop temos x = 11, y = 11, e z = 11, com a e b atualizados para 5 e 2.
No segundo loop, x, y, e z mudam para 15, 14, e 7, e os valores de a e b mudam novamente. Esse processo continua atC) a se tornar zero, encerrando o loop.*/
