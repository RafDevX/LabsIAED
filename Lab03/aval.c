#include <stdio.h>

int main()
{
	char c;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			break; /* probably should have put this as the last thing to force write \n */
		}
		if (c >= 'a' && c <= 'z') {
			putchar(c - 'a' + 'A');
		} else if (c >= 'A' && c <= 'Z') {
			putchar(c - 'A' + 'a');
		} else {
			putchar(c);
		}
	}
	return 0;
}