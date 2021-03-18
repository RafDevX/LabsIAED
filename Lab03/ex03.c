/*
Exercício 3
(Cruz diagonal) Escreva um programa que desenhe uma cruz nas diagonais utilizando a função void cruz(int N);. O asterisco (carácter '*') deve ser usado para desenhar a cruz; hífen (carácter '-') deve ser usado como o separador. As cruzes apresentadas são os exemplos para N = 3 e N=8.

Nota: Em cada linha, após o último caracter apenas deve existir um '\n'.
*/

#include <stdio.h>

void cruz(int N);

int main()
{
	int N;
	scanf("%d", &N);
	cruz(N);
	return 0;
}

void cruz(int N)
{
	int i, j;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= 2 * N - 1; j++) {
			if (j % 2 != 0) {
				int s = (j + 1) / 2;
				if (s == i || s == N - i + 1) {
					putchar('*');
				} else {
					putchar('-');
				}
			} else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
}