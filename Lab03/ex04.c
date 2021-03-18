/*
Exercício 4
(Números) Escreva um programa que leia uma sequência de números separados por espaços e novas linhas, e imprima a mesma sequência, mas os números no output não deverão conter 0 no início, por exemplo, 007 deverá imprimir 7.

A excepção é o número 0, que se deverá imprimir como 0. A sequência no input termina com EOF.

Atenção: Os valores dos números poderão ser superiores ao valor máximo do tipo int ou qualquer tipo primitivo em C.

Dica: a função int getchar() pode ser usada para ler um carácter.
*/

#include <stdio.h>

int main()
{
	int n = 0;
	char c;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == ' ') {
			if (n == 0) {
				putchar('0');
			}
			n = 0;
			putchar(c);
		} else {
			if (c != '0' || n == 1) {
				n = 1;
				putchar(c);
			}
		}
	}
	if (n == 0) {
		putchar('0');
	}
	return 0;
}