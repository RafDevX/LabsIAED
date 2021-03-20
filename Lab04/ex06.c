/*
Exercício 6
(Manipulação de Strings: Maiúsculas) Escreva um programa que leia uma linha do terminal (use a função do exercício anterior) e que escreve no terminal o mesmo texto, mas com as letras minúsculas substituídas pelas respectivas letras maiúsculas. Implemente a função void maiusculas(char s[]).

Nota: Recorde que a string s é alterada pela função maiusculas.
*/

#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[]);
void maiusculas(char s[]);

int main()
{
	int i, len;
	char s[MAX];

	len = leLinha(s);
	maiusculas(s);

	for (i = 0; i < len; i++) {
		putchar(s[i]);
	}
	putchar('\n');

	return 0;
}

int leLinha(char s[])
{
	int len = 0;
	char c;

	while ((c = getchar()) != EOF && c != '\n' && len < MAX - 1) {
		s[len++] = c;
	}
	s[len] = '\0';

	return len;
}

void maiusculas(char s[])
{
	int i, len = strlen(s);
	for (i = 0; i < len; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = s[i] - 'a' + 'A';
		}
	}
}