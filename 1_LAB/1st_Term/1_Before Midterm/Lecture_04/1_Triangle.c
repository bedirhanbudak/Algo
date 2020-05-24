#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	int a, b, c;
	printf("Please enter the sides of triangle: \n");
	scanf("%d\n %d\n %d", &a, &b, &c);

	if ((a + b) > c && (a + c) > b && (b + c) > a) {


		if (a == b && b == c && a == c) {
			printf("Equilateral");
		}
		else if (a == b || b == c || a == c) {
			printf("Isoscele");
		}
		//else if (a != b && b != c && a!=c)
		else
		{
			printf("Scalene");
		}
	}
	else {
		printf("Does not form a triangle");
	}

	return 0;
}
