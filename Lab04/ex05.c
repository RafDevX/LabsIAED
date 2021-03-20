/*
Exercício 5
(Manipulação de Strings: Leitura e Escrita de Linhas de Texto) Escreva uma programa que leia caracteres do teclado, carácter a carácter, até encontrar o carácter \n ou EOF e escreve a linha lida no terminal. Implemente a função int leLinha(char s[]) que lê a linha para a string s e devolve o número de caracteres lidos.

Dica: Depois de resolver este exercício, experimente utilizar o comando fgets.
*/

#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main()
{
	int i, len;
	char s[MAX];

	len = leLinha(s);

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