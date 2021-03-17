/*
Exercício 3
(Divisor) Escreva um programa que leia dois inteiros positivos N, M e imprima "yes" se M é um divisor de N. Caso contrário, imprima "no".
*/

#include <stdio.h>

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	printf(n % m == 0 ? "yes\n" : "no\n");
	return 0;
}