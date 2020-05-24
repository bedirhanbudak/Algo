#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("*** Welcome to Matrix Multiplication Simulation ***\n\n");

	int matrix_1[3][3];
	int matrix_2[3][3];
	int matrix_sum[3][3];
	int i, j;

	printf("Enter numbers for the first matrix 3x3:\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &matrix_1[i][j]);
		}
	}

	printf("Enter numbers for the second matrix 3x3:\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &matrix_2[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			matrix_sum[i][j] = matrix_1[i][j] * matrix_2[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		printf("\n");
		for (j = 0; j < 3; j++) {
			printf("%d ", matrix_sum[i][j]);
		}
	}

	return 0;
}
