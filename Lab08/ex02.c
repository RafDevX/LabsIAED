#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char curw[1000];
	char *p, *wrds[1000];
	int sz = 0;
	while (scanf("%s", curw) == 1) {
		p = (char *)malloc(sizeof(char) * (strlen(curw) + 1));
		strcpy(p, curw);
		wrds[sz++] = p;
	}
	while (--sz >= 0) {
		printf("%s\n", wrds[sz]);
		free(wrds[sz]);
	}
	return 0;
}