/*
(Calculadora) Escreva um programa que receba uma sequência de números e operadores (+, -) representando uma expressão aritmética e retorna o resultado dessa expressão aritmética.

A sequência no input termina com \n.

Pode supor que cada dois números são sempre separados por espaço, operador, espaço, ie, ' op ', para qualquer um dos 2 operadores acima.

Exemplo: No input 70 + 22 - 3 deverá retornar 89.

Dica: Deverá começar por converter uma sequência de algarismos (carácteres) para um número inteiro.
*/

#include <stdio.h>

int main()
{
	int r = 0, n = 0, sum = 1;
	char c;
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			n = n * 10 + (c - '0');
		} else {
			if (c == '+') {
				sum = 1;
			} else if (c == '-') {
				sum = 0;
			}
			r = sum == 1 ? r + n : r - n;
			n = 0;
		}
	}
	r = sum == 1 ? r + n : r - n;
	printf("%d\n", r);
	return 0;
}