#include <stdio.h>
#include <stdlib.h>

typedef struct str_node {
	struct str_node *next, *previous;
	char c;
} node;

typedef struct {
	struct str_node *head, *last;
} list;

list *mk_list()
{
	list *lst = (list *)malloc(sizeof(list));
	lst->head = NULL;
	lst->last = NULL;
	return lst;
}

void free_list(list *l)
{
	free(l);
}

void add_last(list *l, char c)
{
	node *new = (node *)malloc(sizeof(node));
	new->c = c;
	new->previous = NULL;
	new->next = NULL;
	if (!l->head) {
		l->head = new;
	} else {
		(l->last)->next = new;
		new->previous = l->last;
	}
	l->last = new;
}

int is_paly(const list *ls)
{
	node *left = ls->head, *right = ls->last;
	while (left != right) {
		if (left->c != right->c)
			return 0;
		left = left->next;
		right = right->previous;
	}
	return 1;
}

int main()
{
	char c;
	list *lst = mk_list();
	while ((c = getchar()) != '\n')
		add_last(lst, c);
	printf("%s\n", is_paly(lst) ? "yes" : "no");
	return 0;
}