#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
	int i;
	for (i = 2; i < num; i++)//{
		if (num % i == 0)
			//return 0;
		//}
			return num;
}

int main() {

	int a, b;
	printf("Enter the range: "); scanf("%d%d", &a, &b);

	for (; a < b; a++) {

		if (isPrime(a))
			printf("%d is prime\n", a);
	}

	return 0;
}
