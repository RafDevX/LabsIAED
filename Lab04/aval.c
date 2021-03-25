#include <stdio.h>

#define MIN 0 /* orig: DEFINE */
#define MAX 20

void junta(char s1[], char s2[])
{
	char c = s1[0];
	int i = 0, len;
	int joining = 0;
	while (!joining || !(c == '\0')) {
		if (!joining && c == '\0') {
			c = s2[0];
			joining = 1;
			len = i + 1;
		} else if (!joining) {
			c = s1[++i];
		} else {
			s1[i] = c;
			c = s2[(++i) - len];
		}
	}
	s1[i] = '\0';
}

int comOcorrencia(int v[], int size)
{
	int notas[MAX] = {0};
	int count = 0, i;
	for (i = 0; i < size; i++) {
		if (notas[v[i]] != 1) {
			notas[v[i]] = 1;
			count++;
		}
	}
	return count;
}

int main()
{
	/*char s1[] = "IAED: desde 1989.";
	char s2[] = "IST: desde 1911.";
	junta(s1, s2);
	printf("JOINED: |%s|", s1);
	^^^ NO WORK!! :( */

	int v[8] = {4, 9, 12, 20, 0, 9, 3, 12};
	printf("COUNT: %d\n", comOcorrencia(v, 8));

	return 0;
}