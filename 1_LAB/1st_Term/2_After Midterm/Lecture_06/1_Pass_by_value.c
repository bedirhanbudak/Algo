#include <stdio.h>
#include <stdlib.h>

void func(int a) {
	a = a + 2;
	printf("%d\n", a);
}

int main() {

	int a = 2;
	printf("%d\n", a);

	func(a);
	printf("%d\n", a);

	return 0;
}
