#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(0));

	int array[10];

	int i, k, j, flag = 0;

	for (i = 0; i < 10;) {
		k = rand() % 10;
		for (j = 0; j < i; j++) {
			if (k == array[j])
				flag = 1;
		}
		if (flag == 0) {
			array[i] = k;
			i++;
		}
		flag = 0;
	}

	for (i = 0; i < 10; i++)
		printf("%d\n", array[i]);
	return 0;
}
