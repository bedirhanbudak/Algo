#include <stdio.h>

int main(){
	
	char str[10];
	
	printf("Enter a word: ");
	scanf("%[^\n]s",str); //More than one word
	
	printf("The word is %s",str);
	
	return 0;
}
