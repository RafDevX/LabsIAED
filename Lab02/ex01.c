/*
 *	Exercício 1
 *	(Maior de Três) Escreva um programa que determine e imprima o maior de
 *três números inteiros dados pelo utilizador.
 */

#include <stdio.h>

int main() {
	int n1, n2, n3;
	int maior;
	scanf("%d%d%d", &n1, &n2, &n3);

	if (n1 >= n2 && n1 >= n3) {
		maior = n1;
	} else if (n2 >= n1 && n2 >= n3) {
		maior = n2;
	} else {
		maior = n3;
	}
	printf("%d\n", maior);
	return 0;
}