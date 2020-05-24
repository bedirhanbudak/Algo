#include <stdio.h>

int func(int x, int* y) {

	x = 7;
	*y = 15;

}

int main() {

	int x = 3, y = 5;

	printf("%d", x);
	printf("%d", y);

	func(x, &y);

	printf("%d", x);
	printf("%d", y);

	return 0;
}