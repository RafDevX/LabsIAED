/*
Exercício 7
(Divisores) Escreva um programa que pede ao utilizador um inteiro positivo N e imprima o número de divisores de N. Recorde que os números primos têm 2 divisores.
*/

#include <stdio.h>

int main() {
	int n, i, divs;
	scanf("%d", &n);
	divs = 0;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			divs++;
		}
	}
	printf("%d\n", divs);
	return 0;
}