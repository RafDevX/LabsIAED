/*
Exercício 1
(Quadrado de Números) Escreva um programa que desenhe um quadrado de números como o que se segue utilizando a função void quadrado(int N);. O valor de N, dado pelo utilizador, deverá ser obrigatoriamente maior ou igual 2. O tab (carácter '\t') deve ser usado como o separador. O quadrado apresentado é o exemplo para N = 5.

Nota: Em cada linha, após o último número apenas deve existir um '\n'.
*/

#include <stdio.h>

void quadrado(int N);

int main()
{
	int N;
	scanf("%d", &N);
	quadrado(N);
	return 0;
}

void quadrado(int N)
{
	int i, j;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			printf("%d", j + i - 1);
			putchar(j == N ? '\n' : '\t');
		}
	}
}