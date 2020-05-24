#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(0));

	int i, k;

	for (i = 0; i < 5; i++) {
		k = rand() % 20 + 100;
		printf("Random number: %d\n", k);
	}

	return 0;
}
