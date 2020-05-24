#include <stdio.h>

int main() {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	int i = 2;
	int a = 0;
	while (i < n) {
		if (n % i == 0) {
			a++;
		}
		i++;
	}
	if (a == 0) {
		printf("Prime number");
	}
	else {
		printf("Not Prime Number");
	}

	return 0;
}
