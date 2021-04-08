/* I */

#define LISTA_DESIGN_MAX 101
#define LISTA_SIGLA_MAX 11
#define LISTA_CANDIDATOS_MAX 50
#define LISTA_NOME_CANDIDATOS_MAX 101
#define DISTRITO_NOME_MAX 101
#define DISTRITO_LISTAS_MAX 30
#define MAXDISTRITOS 20

typedef struct {
	char designacao[LISTA_DESIGN_MAX];
	char sigla[LISTA_SIGLA_MAX];
	unsigned long votos;
	char candidatos[LISTA_CANDIDATOS_MAX][LISTA_NOME_CANDIDATOS_MAX];
	int numCandidatos;
} ListaPartidaria;

typedef struct {
	char nome[DISTRITO_NOME_MAX];
	int numAEleger;
	ListaPartidaria listas[DISTRITO_LISTAS_MAX];
	int numListas;
} Distrito;

Distrito distritosEleitorais[MAXDISTRITOS];

/* II */

void primeirosEleitos(Distrito d[], int n, char nomes[MAXDISTRITOS][])
{
	unsigned long votosMais = 0;
	int i, j, k = 0;
	ListaPartidaria mais;
	for (i = 0; i < n; i++) {
		votosMais = 0;
		for (j = 0; j < d[i].numListas; j++) {
			if (d[i].listas[j].votos > votosMais) {
				mais = d[i].listas[j];
				votosMais = mais.votos;
			}
		}
		strcpy(nomes[k++], mais.candidatos[0]);
	}
}