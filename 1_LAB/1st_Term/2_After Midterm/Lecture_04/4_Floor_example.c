#include <stdio.h>
#include <stdlib.h>

int floor(int x) {

	if (x == 1)
		return 1000;
	else
		return 1000 + floor(x - 1) * 0.8;

}

int main() {

	int base;
	printf("Enter the amount of floor: "); scanf("%d", &base);

	int i, sum = 0;
	for (i = 1; i <= base; i++)

		sum = sum + floor(i);

	printf("%d", sum);

	return 0;
}
