#include <stdio.h>
#include <stdlib.h>

int main() {

	int array[10] = { 2,5,7,1,6,8,9,4,10,13 };

	int i, smallest = 100, biggest = 0;


	for (i = 0; i < 10; i++) {
		if (array[i] < smallest)
			smallest = array[i];
		else if (array[i] > biggest)
			biggest = array[i];
	}
	for (; smallest <= biggest; smallest++)
	{
		for (i = 0; i < 10; i++) {
			if (smallest == array[i])
				printf("%d\n", smallest);
		}
	}

	return 0;
}
