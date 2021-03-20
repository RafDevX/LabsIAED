/*
Exercício 4
(Manipulação de Strings: Palíndromo) Escreva um programa que leia uma palavra do terminal e verifica se a palavra é um palíndromo ou não. Uma palavra é um palíndromo se se escrever da mesma maneira da esquerda para a direita e vice-versa (por exemplo, "AMA" é um palíndromo). Se a palavra é um palíndromo, o programa deverá imprimir o valor yes, e no, se não é.

Dica: Podem usar scanf("%s", s) para ler uma palavra. Reparem que a string s não pede & no scanf.
*/

#include <stdio.h>
#include <string.h>

#define MAX 80

int palindromo(char s[]);

int main()
{
	char s[MAX];
	scanf("%s", s);

	printf("%s\n", palindromo(s) ? "yes" : "no");

	return 0;
}

int palindromo(char s[])
{
	int i, len = strlen(s);
	for (i = 0; i <= len / 2; i++) {
		if (s[i] != s[len - 1 - i]) {
			return 0;
		}
	}
	return 1;
}