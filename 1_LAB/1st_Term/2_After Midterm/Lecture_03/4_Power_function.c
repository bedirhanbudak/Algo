#include <stdio.h>
#include <stdlib.h>

int power(int num, int pow) {
	int i, sum = 1;

	for (i = 1; i <= pow; i++) {
		sum *= num;
	}

	return sum;
}

int main() {
	int num, a, b;

	printf("Enter the number: "); scanf("%d", &num);
	printf("Enter the power range: "); scanf("%d%d", &a, &b);

	int result, total = 0;

	for (; a <= b; a++) {
		total += power(num, a);
	}

	printf("The result is: %d ", total);

	return 0;
}
