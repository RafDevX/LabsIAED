#include <stdio.h>

int main()
{
	char s[1000];
	char *p;
	scanf("%s", s);
	p = s;
	while (*p != '\0')
		printf("%s\n", p++);
	return 0;
}