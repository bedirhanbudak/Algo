#include <stdio.h>

int main(){
	
	char str[10]={},inverse[10]={};
	
	printf("Enter the string to will be become inverse: ");
	scanf("%s",str);
	
	int i=0,a;
	
	for (i=0; str[i]!='\0'; i++){}
	
	for(a=0; i>0; i--,a++){
		
		inverse[a]=str[i-1];
		
	}

	printf("%s",inverse);
	
	return 0;
}
