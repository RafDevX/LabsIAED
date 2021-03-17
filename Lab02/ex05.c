/*
Exercício 5
(Ciclo) Escreva um programa que leia um inteiro positivo N e imprima os números 1..N, um por linha.
*/

#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("%d\n", i);
	}
	return 0;
}