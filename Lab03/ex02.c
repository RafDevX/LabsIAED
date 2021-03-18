/*
Exercício 2
(Pirâmide de Números) Escreva um programa que desenhe uma pirâmide de números utilizando a função void piramide(int N);. O valor de N, dado pelo utilizador, deverá ser obrigatoriamente superior ou igual 2. O espaço (carácter ' ') deve ser usado como o separador. A pirâmide apresentada é o exemplo para N = 5.

Nota: Em cada linha, após o último número apenas deve existir um '\n'.
*/

#include <stdio.h>

void piramide(int N);

int main()
{
	int N;
	scanf("%d", &N);
	piramide(N);
	return 0;
}

void piramide(int N)
{
	int i, j, k, max;
	for (i = 1; i <= N; i++) {
		for (j = 0; j < (N - i) * 2; j++) {
			putchar(' ');
		}
		max = 2 * i - 1;
		for (k = 1; k <= max; k++) {
			printf("%d", k <= i ? k : max - k + 1);
			if (k < max) {
				putchar(' ');
			}
		}
		putchar('\n');
	}
}