#include <stdio.h>

int main() {

	int x = 5;
	int* t = &x; //pointer definition
	printf("%d\n", x); //value of x
	printf("%d\n", &x); //address of x
	printf("%d\n", t); //address of x with using pointer
	printf("%d\n", *t); //value of x
	//printf("%d", *x); => the value in x (5)
	printf("%d\n", *&x); //the value in address of x
	printf("%d\n", &t); //address of t (pointer)

	printf("%d\n", *(t+1)); //value in the address of x+1
	printf("%d\n", (t + 1)); //address of the address of t+1

	return 0;
}
