/*
Exercício 8
(Média) Escreva um programa que calcule e imprima a média de N números reais dados pelo utilizador. O programa deverá primeiro pedir ao utilizador um inteiro N, representando a quantidade de números que vão ser introduzidos. Os números reais devem ser representados pelo tipo float.
O resultado deve ser impresso com o comando printf("%.2f\n", media);.
*/

#include <stdio.h>

int main() {
	int n, i;
	float k, soma, media;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%f", &k);
		soma += k;
	}
	media = soma / n;
	printf("%.2f\n", media);
	return 0;
}