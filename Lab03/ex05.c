/*
Exercício 5
(Mensagens) Escreva um programa que leia uma sequência de mensagens e imprima-as, uma por linha. Cada mensagem é delimitada pelas aspas (carácter "). A mensagem pode conter uma "escape sequence" - o carácter perde significado especial se for precedido pelo caracter \ (backslash). Por exemplo, o input "a\"foo\\bar\"" corresponde à mensagem a"foo\bar". Assim o backslash permite incluir aspas na mensagem tal como a própria backslash.

Dica: utilize o conceito de estado como fizemos no contador de palavras na aula teórica.
*/

#include <stdio.h>

int main()
{
	int dentro = 0, escape = 0, setesc = 0;
	char c;
	while ((c = getchar()) != EOF) {
		setesc = 0;
		if (!escape) {
			setesc = c == '\\';
			if (c == '"') {
				dentro = !dentro;
				if (!dentro) {
					putchar('\n');
				}
			}
		}
		if (dentro && (escape || (c != '\\' && c != '"'))) {
			putchar(c);
		}
		escape = setesc;
	}
	return 0;
}