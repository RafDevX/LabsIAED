#include <stdio.h>
#include <stdlib.h>

typedef struct stru_node {
	struct stru_node *next;
	int v;
} node;

node *pop(node *head)
{
	node *n = head->next;
	free(head);
	return n;
}

node *push(node *head, int e)
{
	node *new = (node *)malloc(sizeof(node));
	new->v = e;
	new->next = head;
	return new;
}

node *destroy(node *head)
{
	while (head) {
		head = pop(head);
	}
	return NULL;
}

void print(node *head)
{
	while (head) {
		printf("%d\n", head->v);
		head = head->next;
	}
}

int main()
{
	int d;
	node *head = NULL;
	while (scanf("%d", &d) && d != 0)
		head = push(head, d);
	print(head);
	head = destroy(head);
	return 0;
}