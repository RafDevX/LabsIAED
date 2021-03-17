/*
Exercício 9
(Conversão) Escreva um programa que pede ao utilizador um valor N correspondente a um certo período de tempo em segundos. O programa deverá apresentar no output esse período de tempo no formato `HH:MM:SS`.
*Sugestão:* utilize o operador que calcula o resto da divisão (`%`).
*/

#include <stdio.h>

int main() {
	int h, m, s;
	scanf("%d", &s);
	s -= 3600 * (h = s / 3600);
	s -= 60 * (m = s / 60);
	printf("%02d:%02d:%02d\n", h, m, s);
	return 0;
}