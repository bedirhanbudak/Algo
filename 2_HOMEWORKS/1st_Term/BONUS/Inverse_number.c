#include <stdio.h>

int main() {

	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	int i, a, sum = 0;
	a = num;

	for (i = 1; num / i > 0; i *= 10) {

		sum = sum + (a % 10);
		a /= 10;
		sum *= 10;

	}
	//if the number does not end with 0
	printf("%d", sum / 10);

}

