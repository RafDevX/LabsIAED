/*
Exercício 2 (Números complexos - estruturas)
Implemente um programa que leia dois números complexos e imprima a soma deles. Os números devem ser lidos no formato x+yi (ex: 5+3i). Os números do tipo float devem ser impressos usando "%.2f". Sugestão: Consultar os slides da aula teórica sobre estruturas.
*/

#include <stdio.h>

struct complexo {
	float real;
	float imag;
};

int main()
{
	struct complexo c1, c2, s;

	scanf("%f%fi", &(c1.real), &(c1.imag));
	scanf("%f%fi", &(c2.real), &(c2.imag));

	s.real = c1.real + c2.real;
	s.imag = c1.imag + c2.imag;

	printf("%.2f%s%.2fi", s.real, s.imag < 0 ? "" : "+", s.imag);
	return 0;
}