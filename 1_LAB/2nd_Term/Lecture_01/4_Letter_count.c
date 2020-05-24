#include <stdio.h>

int main(){
	
	char ascii[255]={0};
	char word[10];
	
	printf("Enter a word: ");
	scanf("%s",word);
	
	int i;
	
	for(i=0; word[i] != '\0'; i++){
		
		ascii[word[i] - 'a']++;
		
	}
	
	for (i=0; i<256; i++){
		
		if(ascii[i] > 0)
			printf("%c occurs %d times\n", i+'a', ascii[i]);
	}
	
	return 0;
}
