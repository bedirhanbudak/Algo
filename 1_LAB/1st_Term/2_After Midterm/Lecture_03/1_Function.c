#include <stdio.h>
#include <stdlib.h>

int fnc(int a) {

	int result;
	result = 2 * a + 5;
	return result;

}

int main() {

	int num, total;
	printf("Enter a number: ");
	scanf("%d", &num);

	total = fnc(num);
	printf("The result is: %d", total);

	return 0;
}
