#include <stdio.h>

int main(){
	
	char str[100];
	
	printf("Enter a word: ");
	scanf("%[^\n]s",str);
	
	int a=0,check=0;
	
	while (str[a] != '\0'){
		
		if(str[a]!=' ')
			check++;
			
		a++;
		
	}
	
	printf("%d",check);
	
	return 0;
}
