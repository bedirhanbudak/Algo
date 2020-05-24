#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x) {

	if (x == 1 || x == 2)
		return 1;
	else
		return fibonacci(x - 2) + fibonacci(x - 1);

}

int main() {

	int num;
	printf("Enter a number: "); scanf("%d", &num);

	printf("%d\n", fibonacci(num));

	return 0;
}
