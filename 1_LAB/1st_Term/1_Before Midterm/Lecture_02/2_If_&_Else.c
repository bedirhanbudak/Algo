#include <stdio.h>

int main() {

	int a = 5, b = 3;

	if (a > b) {
		printf("The largest is %d", a);
	}

	else if (b > a) {
		printf("The largest is %d", b);
	}

	else {
		printf("The numbers are equal");
	}

	return 0;
}
