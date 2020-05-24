#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(0));
	int k, x;
	int line = 1;

	printf("Enter a number: ");
	scanf("%d", &x);

	while (1) {

		k = rand() % 100;

		printf("%d. %d\n", line, k);

		if (k == x) {
			printf("Found it!");
			break;
		}
		line++;
	}
	return 0;
}
