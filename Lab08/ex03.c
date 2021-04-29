#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *v;
	int cap;
	int sz;
} stack;

stack *build()
{
	stack *s;
	s = malloc(sizeof(stack));
	s->cap = 4;
	s->sz = 0;
	s->v = (int *)malloc(sizeof(int) * s->cap);
	return s;
}

void push(stack *s, int e)
{
	if (s->cap >= s->sz) {
		s->cap = s->sz + 1;
		s->v = (int *)realloc(s->v, sizeof(int) * s->cap);
	}
	s->v[s->sz++] = e;
}

int top(stack *s)
{
	return s->v[s->sz - 1];
}

int pop(stack *s)
{
	return s->v[--s->sz];
}

int is_empty(stack *s)
{
	return !s->sz;
}

void destroy(stack *s)
{
	free(s->v);
	free(s);
}

int main()
{
	stack *s = build();
	printf("is empty: %d = 1\n", is_empty(s));
	push(s, 3);
	push(s, 4);
	push(s, 5);
	push(s, 6);
	push(s, 7);
	push(s, 8);
	push(s, 9);
	printf("%d = 9\n", pop(s));
	printf("%d = 8\n", top(s));
	printf("%d = 8\n", pop(s));
	printf("%d = 7\n", pop(s));
	printf("is empty: %d = 0\n", is_empty(s));
	destroy(s);
	return 0;
}