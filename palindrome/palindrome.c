#include<stdio.h>
#include<string.h>


int palindrome(char*word){
	int i, len = strlen(word);
	for(i = 0; i < len/2; i++){
		if(word[i] != word[len -1 -i]){
			return 0;
		}
	}
	return 1;
}


int main(){
	char word[100];
	printf("Enter the word to check whether it is palindrome or not:\n");
	scanf("%s", word);
	
	if(palindrome(word)){
		printf("The enter string is a palindrome.");
	}
	else{
		printf("The enterd sting is not palindrome.");
	}
	printf("\n");
	return 0;
}
