#include <stdio.h>
#include <stdlib.h>

int fact(int x) {

	if (x == 1)
		return 1;
	else
		return x * fact(x - 1);

}

int main() {

	int num;
	printf("Enter a number: "); scanf("%d", &num);

	printf("%d\n", fact(num));

	return 0;
}
