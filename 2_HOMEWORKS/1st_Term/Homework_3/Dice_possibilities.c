#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	int zar[7] = { 0 };

	int i, k, j;

	for (j = 0; j < 100000000; j++) {
		k = 1 + rand() % 6;
		for (i = 1; i < 7; i++) {
			if (k == i)
				zar[i] += 1;
		}

	}

	for (i = 1; i < 7; i++)
		printf("%d.\t%d\n", i, zar[i]);

	return 0;
}
