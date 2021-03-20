/*
Exercício 8
(Maior) Escreva um programa que leia dois números inteiros em representação decimal e imprime o maior desses dois números. Podem assumir que os dois números têm o mesmo número de algarismos e no máximo 100 carácteres.

Nota: Os números podem ser demasiado grandes para ser guardados numa variável do tipo long long, por exemplo 9988888888888888888887 e 9988888888888888888888.
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
	char n1[MAX], n2[MAX];
	int i, n1maior = 1;
	scanf("%s%s", n1, n2);

	for (i = 0; i < MAX; i++) {
		if (n1[i] == '\0') {
			break;
		} else if (n2[i] > n1[i]) {
			n1maior = 0;
			break;
		}
	}

	printf("%s\n", n1maior ? n1 : n2);
	return 0;
}