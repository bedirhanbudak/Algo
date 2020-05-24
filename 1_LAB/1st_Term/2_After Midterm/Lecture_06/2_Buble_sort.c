#include <stdio.h>
#include <stdlib.h>

void order(int a[]) {

	int i, j, temp;

	for (j = 0; j < 10; j++) {
		for (i = 0; i < 9; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}

void print(int a[]) {
	int i;
	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
	printf("\n");
}

int main() {

	int i;
	int a[] = { 5, 3, 19, 6, 12, 1, 7, 9, 10, 77 };
	int b[] = { 12, 4, 9, 2, 16, 23, 32, 9, 1, 19 };
	int c[] = { 54, 15, 27, 8, 1, 18, 20, 13, 4, 63 };

	order(a);
	print(a);

	order(b);
	print(b);

	order(c);
	print(c);

	return 0;
}

