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

int is_eq(node *h1, node *h2)
{
	while (h1 && h2) {
		if (h1->v != h2->v)
			return 0;
		h1 = h1->next;
		h2 = h2->next;
	}
	return !h1 && !h2;
}

node *rev(node *head)
{
	node *new = NULL;
	while (head) {
		new = push(new, head->v);
		head = head->next;
	}
	return new;
}

int main()
{
	char c;
	node *head1 = NULL, *head2 = NULL;
	while (scanf("%c", &c) && c != '\n')
		head1 = push(head1, c);
	head2 = rev(head1);
	printf("%s\n", is_eq(head1, head2) ? "yes" : "no");
	head1 = destroy(head1);
	head2 = destroy(head2);
	return 0;
}