#include <stdio.h>

int main() {
	int i, j;
	int *p, *q;

	p = &i;      // VC!lido: 'p' aponta para 'i'

	*q = &j;     // Erro: '*q' C) um 'int', mas '&j' C) um endereC'o ('int*')

	p = *&j;     // VC!lido: '*&j' C) o valor de 'j', que C) um 'int'

	i = (*p)++;  // VC!lido: incrementa o valor apontado por 'p' apC3s atribuir a 'i'

	i = *p + *q; // VC!lido: soma dos valores apontados por 'p' e 'q'

	q = &p;      // Erro: 'q' C) 'int*', mas '&p' C) 'int**' (endereC'o de 'p')

	i = (*p)++ + *q; // VC!lido: soma o valor de '(*p)++' e '*q'

	return 0;
}
