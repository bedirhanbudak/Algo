#include <stdio.h>

int main() {

	int arr[3] = { 2,5,7 };

	printf("%d\n", arr);
	printf("%d\n", arr[0]);
	printf("%d\n", *arr);
	printf("%d\n", *(arr+1));
	printf("%d\n", arr[1]);

	// arr = &arr[0]

	return 0;
}