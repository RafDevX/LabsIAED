/*
Exercício 4 (Tabelas bidimensionais - jogo do galo)
Considere um tabuleiro de jogo do galo de tamanho DxD, D<=MAXDIM, com MAXDIM=100. Um jogador ganha se prencher 3 em linha, diagonal ou coluna. Implemente um programa que decida qual dos dois jogadores ganhou.

O input é dado no standard input da seguinte forma: um número inteiro positivo D - a dimensão do tabuleiro, um número inteiro positivo N - o número de entradas preenchidas, e N triplos H V C, onde H é a coordenada horizontal, V a coordenada vertical, com H e V números inteiros no intervalo 0..D-1, e C o carácter 'x' ou 'o'.

O programa deve imprimir o carácter 'x' se ganhou o jogador 'x', o carácter 'o' se ganhou o jogador 'o', ou o carácter '?' se os jogadores empataram.

Sugestão: Guarde o tabuleiro numa matriz char tab[MAXDIM][MAXDIM] e implemente a função int ganha(int dim, char tab[MAXDIM][MAXDIM], char jogador) que devolve 1 se jogador ganha, e que devolve 0 no caso contrário.
*/

#include <stdio.h>

#define MAXDIM 100

int ganha(int dim, char tab[MAXDIM][MAXDIM], char jogador);

int main()
{
	int D, N, i, H, V, xG, oG;
	char C, tab[MAXDIM][MAXDIM];

	scanf("%d%d", &D, &N);

	for (i = 0; i < N; i++) {
		scanf("%d %d %c", &H, &V, &C);
		tab[V][H] = C;
	}

	xG = ganha(D, tab, 'x');
	oG = ganha(D, tab, 'o');

	printf("%c\n", (xG && !oG) ? 'x' : ((oG && !xG) ? 'o' : '?'));

	return 0;
}

int ganha(int dim, char tab[MAXDIM][MAXDIM], char jogador)
{
	int i, j, streakLinha = 0, streakCol = 0, streakDiag1 = 0, streakDiag2 = 0;

	for (i = 0; i < dim; i++) {
		for (j = 0; j < dim; j++) {
			if (tab[i][j] == jogador) {
				streakLinha++;
				if (i == j) {
					streakDiag1++;
				}
				if (i + j == dim - 1) {
					streakDiag2++;
				}
			} else {
				streakLinha = 0;
				if (i == j) {
					streakDiag1 = 0;
				}
				if (i + j == dim - 1) {
					streakDiag2 = 0;
				}
			}

			if (tab[j][i] == jogador) {
				streakCol++;
			} else {
				streakCol = 0;
			}

			if (streakLinha == 3 || streakCol == 3 || streakDiag1 == 3 || streakDiag2 == 3) {
				return 1;
			}
		}
	}

	return 0;
}