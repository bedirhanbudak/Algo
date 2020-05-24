#include <stdio.h>

int main(void) {

	int n;

	printf("Enter the number you would like to calculate the factorial of: ");
	scanf("%d", &n);

	int i = 0;
	int sum;
	while (i < n) {
		i++;
		sum *= i;
	}

	printf("%d", sum);

	return 0;
}
