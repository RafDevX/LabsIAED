/*
Exercício 10
(Dígitos) Escreva um programa que pede ao utilizador um valor positivo N. No output, deverá mostrar o número de dígitos que compõem N (na primeira linha), assim como a soma dos dígitos de N (na segunda linha). Por exemplo, o número 12345 tem 5 dígitos e a soma desses dígitos é 15.
*/

#include <stdio.h>

int main() {
	int n, d, digitos, soma;
	scanf("%d", &n);
	digitos = soma = 0;
	while (n != 0) {
		d = n % 10;
		n /= 10;
		digitos++;
		soma += d;
	}
	printf("%d\n%d\n", digitos, soma);
	return 0;
}