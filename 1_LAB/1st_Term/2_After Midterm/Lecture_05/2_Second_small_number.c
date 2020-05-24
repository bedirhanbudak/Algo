#include <stdio.h>
#include <stdlib.h>

int main() {

	int array[5];
	int i, index;

	printf("Enter numbers(1-100): ");

	scanf("%d%d%d%d%d", &array[0], &array[1], &array[2], &array[3], &array[4]);

	int smallest = 1000;

	for (i = 0; i < 5; i++) {
		if (array[i] < smallest) {
			smallest = array[i];
			index = i;
		}
	}

	int smallest2 = 1000;

	for (i = 0; i < 5; i++) {
		if (array[i] < smallest2 && i != index) {
			smallest2 = array[i];
		}
	}

	printf("%d", smallest2);

	return 0;
}
