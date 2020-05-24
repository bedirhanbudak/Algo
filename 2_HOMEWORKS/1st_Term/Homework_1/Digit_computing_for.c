#include <stdio.h>

int main(void) {

	int number;
	printf("Enter the number that you would like to calculate as digits: ");
	scanf("%d", &number);

	int digit;
	int i = 0;
	for (digit = 1; number / digit >= 0; digit * 10) {
		i++;
	}
	printf("%d", i);
	return 0;
}
