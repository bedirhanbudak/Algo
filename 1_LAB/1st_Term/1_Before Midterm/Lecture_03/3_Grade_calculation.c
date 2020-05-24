#include <stdio.h>
#include <stdlib.h>

int main() {

	int grade;

	printf("Enter your grade: ");
	scanf("%d", &grade);

	grade = grade / 10;

	switch (grade) {

	case 0:
	case 1:
	case 2:
	case 3:
		printf("FF");
		break;
	case 4:
		printf("DD");
		break;
	case 5:
		printf("DC");
		break;
	case 6:
		printf("CC");
		break;
	case 7:
		printf("BB");
		break;
	case 8:
		printf("BA");
		break;
	case 9:
		printf("AA");
		break;
	case 10:
		printf("AA");
		break;


	}

	return 0;
}
