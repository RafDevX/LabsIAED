/*

I) 

#include <stdio.h>
#include <stdlib.h>

#define BUFFERSIZE 1000

int main()
{
	int i = 0, n = 0, m;
	int *values;

	scanf("%d", &n);
	values = (int *)malloc(n * sizeof(int));

	for (i = 0; i <= n - 1; i++) {
		scanf("%d", values + n - i - 1);
	}
	m = *values;
	for (i = n - 1; i > 0; i--)
		if ((*(values + 1)) > m)
			m = values[i];
	printf("%d\n", m);
	return 0;
}*/

/* II) */

#include <stdio.h> /* só para testar, não tinha */
#include <stdlib.h>

char *trocaLetras(char *str)
{
	char *new;
	int len = 0, i = 0;
	char c;

	while (*(str + len) != '\0')
		len++;

	new = malloc(sizeof(char) * (len + 1));

	for (i = 0; i <= len; i++) {
		c = *(str + i);
		if (c >= 'a' && c <= 'z') {
			*(new + i) = c - 'a' + 'A';
		} else if (c >= 'A' && c <= 'Z') {
			*(new + i) = c - 'A' + 'a';
		} else {
			*(new + i) = c;
		}
	}

	return new;
}

int main() /* testar */
{
	printf("%s\n", trocaLetras("leic IAED")); /* >> LEIC iaed */
	return 0;
}