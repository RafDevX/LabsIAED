/*
Exercício 2
(Ordena 2) Escreva um programa que leia dois inteiros N, M e imprima o menor deles na primeira linha e o maior na segunda.
*/

#include <stdio.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if (n < m) {
		printf("%d\n%d\n", n, m);
	} else {
		printf("%d\n%d\n", m, n);
	}
	return 0;
}