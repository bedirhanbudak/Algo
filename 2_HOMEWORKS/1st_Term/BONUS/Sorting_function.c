#include <stdio.h>
#include <time.h>

int bubble(int arr[7]) {

	int a, temp, i, j;

	for (j = 0; j < 7; j++) {

		for (i = 0; i < 6; i++) {

			if (arr[i] < arr[i + 1]) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

int main() {

	srand(time(0));

	int array[7], i = 0, k, j, check = 1;

	while (i < 7) {

		k = rand() % 10;

		for (j = 0; j < 7; j++) {
			if (array[j] == k)
				check = 0;
		}
		if (check) {
			array[i] = k;
			i++;
		}
		check = 1;

	}
	for (i = 0; i < 7; i++) {
		printf("\t%d", array[i]);
	}

	printf("\n");

	bubble(array);

	for (i = 0; i < 7; i++) {
		printf("\t%d", array[i]);
	}

	printf("\n");

	int small = 1000, bigger = 0;

	for (i = 0; i < 7; i++) {
		if (array[i] < small) {
			small = array[i];
		}
		if (array[i] > bigger) {
			bigger = array[i];
		}

	}
	for (; small <= bigger; small++) {

		for (i = 0; i < 7; i++) {
			if (array[i] == small)
				printf("\t%d", array[i]);
		}

	}

	return 0;
}
