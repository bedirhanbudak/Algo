#include <stdio.h>
#include <stdio.h>

int main() {

	int array[10] = { 2,5,4,7,10,3,1,6,8,9 };

	int i, j;

	for (i = 1; i <= 10; i++) {
		for (j = 0; j < 10; j++) {
			if (array[j] == i)
				printf("%d\n", i);
		}
	}

	return 0;
}
