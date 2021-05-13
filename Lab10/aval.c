#include <stdlib.h> /* nao tinha isto */

typedef struct no
{
	char *text;
	struct no *proximo;
	struct no *anterior;
} Ligacao;

typedef struct
{
	Ligacao *primeiro;
	Ligacao *ultimo;
} DList;

DList *copiaLista(DList *lst)
{
	DList *new;
	Ligacao *cur, *last = NULL, *no;
	new = (DList *)malloc(sizeof(DList));
	new->primeiro = NULL;
	cur = lst->primeiro;
	while (cur)
	{
		no = (Ligacao *)malloc(sizeof(Ligacao));
		no->anterior = last;
		last->proximo = no; /* isto da erro */
		no->proximo = NULL;
		no->text = (char *)malloc(sizeof(char) * strlen(cur->text));
		strcpy(no->text, cur->text);
		last = no;
		if (!(new->primeiro))
			new->primeiro = no;
		cur = cur->proximo; /* nao tinha isto */
	}
	new->ultimo = last;
	return new;
}