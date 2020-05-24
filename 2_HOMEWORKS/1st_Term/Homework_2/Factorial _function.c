#include <stdio.h>

int fac(int);

int main() {

	int num;
	printf("Enter a number: "); scanf("%d", &num);

	int sum;

	sum = fac(num);

	printf("The result is: %d", sum);

	return 0;
}

int fac(int n) {

	int i = 1, result = 1;

	for (; i <= n; i++)
		result *= i;

	return result;
}
