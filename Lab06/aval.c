/* I) */

typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))

#include <stdio.h>

void printvec(Item v[])
{
	int i = 0;
	printf("a = { ");
	while (1) {
		if (v[i + 1] > 0) {
			printf("%d, ", v[i]);
			i++;
		} else {
			printf("%d ", v[i]);
			break;
		}
	}
	printf("}\n");
}

void sort(Item a[], int left, int right)
{
	int i, j, iter = 0;

	for (i = right - 1; i >= left; i--) {
		Item v = a[i];
		j = i + 1;
		while (j <= right && less(a[j], v)) {
			a[j - 1] = a[j];
			j++;
		}
		a[j - 1] = v;
		printf("iter #%d\t", ++iter);
		printvec(a);
	}
}

int main()
{
	Item a[11] = {9, 3, 27, 4, 8, 16, 13, 18, 14, 15, 0};
	printf("initial ");
	printvec(a);
	sort(a, 1, 8);
	return 0;
}

/* II) O(n³) */