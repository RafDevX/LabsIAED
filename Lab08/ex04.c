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

char closer(char opener)
{
	switch (opener) {
	case '(':
		return ')';
	case '[':
		return ']';
	case '{':
		return '}';
	default:
		return ' ';
	}
}

int main()
{
	stack *s = build();
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '(' || c == '[' || c == '{') {
			push(s, c);
		} else if (c == ')' || c == ']' || c == '}') {
			if (c != closer(pop(s))) {
				break;
			}
		}
	}
	printf("%s", is_empty(s) ? "VALID" : "INVALID");
	return 0;
}