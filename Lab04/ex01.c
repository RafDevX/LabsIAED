/*
Exercício 1
(Gráfico horizontal) Escreva um programa que peça ao utilizador um número inteiro positivo n < VECMAX, onde VECMAX=100. Depois, leia n números inteiros positivos. No final o programa deverá escrever uma representação gráfica dos valores lidos como o que se segue. O gráfico apresentado é o exemplo para n = 3 e valores 1 3 4.
*/

#include <stdio.h>

#define VECMAX 100

int main()
{
	int n, i, j;
	int vec[VECMAX];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < vec[i]; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}