struct node
{
	int value;
	struct node *next;
};
typedef struct node Node;

/* I */

int checkExistsDuplicates(Node *head)
{
	int last, isFirst = 1;
	while (head)
	{
		if (!isFirst && head->value == last)
			return 1;
		isFirst = 0;
		last = head->value;
		head = head->next;
	}
	return 0;
}

/* II */

#include <stdlib.h>

Node *removeDivisors(Node *head, int val)
{
	Node *cur, *prev; /* NOTE: submitted version had no second *: Node *cur, prev; */
	cur = head;
	while (cur)
	{
		if (val % (cur->value) == 0)
		{
			if (cur == head)
				head = cur->next;
			else
				prev->next = cur->next;
			free(cur);
			cur = prev->next; /* this would break if prev isn't initialized */
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}