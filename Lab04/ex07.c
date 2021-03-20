/*
Exercício 7
(Manipulação de Strings: Apaga Carácter) Escreva um programa que leia uma linha e um carácter e escreve no terminal a mesma linha onde todas as ocorrências do carácter foram removidas. Implemente a função void apagaCaracter(char s[], char c) que apague o carácter c da string s.
*/

#include <stdio.h>
#include <string.h>

#define MAX 80

void apagaCaracter(char s[], char c);

int main()
{
	char c, s[MAX];

	fgets(s, MAX, stdin);
	scanf("%c", &c);
	apagaCaracter(s, c);

	printf("%s", s);
	return 0;
}

void apagaCaracter(char s[], char c)
{
	int i, j = 0, len = strlen(s);

	for (i = 0; i < len; i++) {
		if (s[i] != c) {
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}