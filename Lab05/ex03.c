/*
Exercício 3 (Portfólio financeiro - estruturas)
Considere uma estrutura representando um título financeiro (Stock) composta por um nome (máximo 10 caracteres sem espaços), valor (float), e percentagem de rendimento anual (float). Implemente um programa que leia uma sequencia de títulos e imprima o título com o maior rendimento.

O input é dado no standard input da seguinte forma: um número inteiro positivo N, e N triplos Nome Valor Taxa. O título deve ser impresso numa única linha em que os atributos do título são separados por espaços e os números do tipo float são impressos usando "%.2f". Pode assumir que o portfólio não tem mais do que 1000 títulos, e que não é vazio.


*/

#include <stdio.h>

#define MAX_NAME_SIZE 11
#define MAX_TITULOS 1000

struct Stock {
	char nome[MAX_NAME_SIZE];
	float valor;
	float taxa;
};

int main()
{
	int N, i;
	struct Stock vec[MAX_TITULOS];
	struct Stock melhor;
	float rend, melhorRend = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%s%f%f", vec[i].nome, &(vec[i].valor), &(vec[i].taxa));
	}

	for (i = 0; i < N; i++) {
		rend = vec[i].valor * (1 + vec[i].taxa);
		if (rend > melhorRend) {
			melhor = vec[i];
			melhorRend = rend;
		}
	}

	printf("%s %.2f %.2f\n", melhor.nome, melhor.valor, melhor.taxa);

	return 0;
}