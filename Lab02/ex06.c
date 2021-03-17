/*
Exercício 6
(Maior e Menor) Escreva um programa que determine o maior e o menor número de N números reais dados pelo utilizador. Considere que N é um valor pedido ao utilizador. O resultado deve ser impresso com o comando printf("min: %f, max: %f\n", min, max).
*Sugestão:* inicialize o maior e o menor com o primeiro valor lido.
*/

#include <stdio.h>

int main() {
	int n, i;
	float k, min, max;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%f", &k);
		if (i == 0) {
			min = max = k;
		} else if (k < min) {
			min = k;
		} else if (k > max) {
			max = k;
		}
	}
	printf("min: %f, max: %f\n", min, max);
	return 0;
}