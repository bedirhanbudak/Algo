#include <stdio.h>
#include <stdlib.h>

int main() {

	int month;

	printf("Enter month: ");
	scanf("%d", &month);

	switch (month) {

	case 1:
		printf("31 days");
		break;
	case 2:
		printf("28 days");
		break;
	case 3:
		printf("31 days");
		break;
	case 4:
		printf("30 days");
		break;
	case 5:
		printf("31 days");
		break;
	case 6:
		printf("30 days");
		break;

	}

	return 0;
}
