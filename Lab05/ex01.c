/*
Exercício 1 (Tabelas bidimensionais)
Considere constantes ALUNOS=10 e DISCIPLINAS=5. Cada aluno é identificado por um número 0..ALUNOS-1 e cada disciplina é identificada por um número 0..DISCIPLINAS-1. Implemente um programa que calcule a disciplina mais popular (na média) e o aluno que na média mais gosta de estudar.

O input é dado no standard input da seguinte forma: um número inteiro positivo N, e N triplos A D V, onde A é um número de um aluno, D um número de uma disciplina, e V um número inteiro entre -100..100, representando o nível de entusiasmo do aluno A pela disciplina D. Se uma certa combinação de A, D não aparece no input, então V deve assumir-se com valor 0.

O resultado deve ser impresso com a disciplina mais popular na primeira linha e o aluno mais entusiástico na segunda linha. Caso existam duas disciplinas/alunos com o mesmo score, deverá ser impresso o que tiver menor identificador.

Sugestão: Guardar os valores numa matriz int valores[ALUNOS][DISCIPLINAS] e implementar funções long score_disciplina(int disciplina, int valores[ALUNOS][DISCIPLINAS]) e long score_aluno(int aluno, int valores[ALUNOS][DISCIPLINAS]).
*/

#include <stdio.h>

#define ALUNOS 10
#define DISCIPLINAS 5

long score_disciplina(int disciplina, int valores[ALUNOS][DISCIPLINAS]);
long score_aluno(int aluno, int valores[ALUNOS][DISCIPLINAS]);

int main()
{
	int N, i, A, D, V, melhorDisc = -1, melhorAluno = -1;
	int valores[ALUNOS][DISCIPLINAS] = {{0}};
	long sc, scoreMelhorDisc, scoreMelhorAluno;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d %d", &A, &D, &V);
		valores[A][D] = V;
	}

	for (i = 0; i < DISCIPLINAS; i++) {
		sc = score_disciplina(i, valores);
		if (melhorDisc < 0 || sc > scoreMelhorDisc) {
			melhorDisc = i;
			scoreMelhorDisc = sc;
		}
	}

	for (i = 0; i < ALUNOS; i++) {
		sc = score_aluno(i, valores);
		if (melhorAluno < 0 || sc > scoreMelhorAluno) {
			melhorAluno = i;
			scoreMelhorAluno = sc;
		}
	}

	printf("%d\n%d\n", melhorDisc, melhorAluno);

	return 0;
}

long score_disciplina(int disciplina, int valores[ALUNOS][DISCIPLINAS])
{
	long score = 0;
	int i;
	for (i = 0; i < ALUNOS; i++) {
		score += valores[i][disciplina];
	}
	return score;
}

long score_aluno(int aluno, int valores[ALUNOS][DISCIPLINAS])
{
	long score = 0;
	int i;
	for (i = 0; i < DISCIPLINAS; i++) {
		score += valores[aluno][i];
	}
	return score;
}