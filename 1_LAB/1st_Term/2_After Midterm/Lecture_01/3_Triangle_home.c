#include <stdio.h>

int main() {

	int size;

	printf("Enter size of the house: ");
	scanf("%d", &size);

	int satir = 1, ast = 1, bosluk, i;

	for (i = 0; i < (size + 1) / 2; i++) {

		for (bosluk = size / 2; bosluk >= satir / 2; bosluk--) {
			printf(" ");
		}

		for (ast = 1; ast <= satir; ast++) {
			printf("*");
		}
		printf("\n");

		satir += 2;

	}

	return 0;
}
