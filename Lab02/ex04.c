/*
Exercício 4
(Ordena 3) Escreva um programa que leia três inteiros e imprima-os por ordem na mesma linha separados por um espaço em branco. O menor dos números deve aparecer como primeiro.
*/

#include <stdio.h>

int main() {
	int a, b, c;
	int n1, n2, n3;
	scanf("%d%d%d", &a, &b, &c);
	n1 = (a <= b && a <= c) ? a : ((b <= a && b <= c) ? b : c);
	n3 = (a >= b && a >= c) ? a : ((b >= a && b >= c) ? b : c);
	if (n1 == a || n3 == a) {
		if (n1 == b || n3 == b) {
			n2 = c;
		} else {
			n2 = b;
		}
	} else {
		n2 = a;
	}
	printf("%d %d %d\n", n1, n2, n3);
	return 0;
}