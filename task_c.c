#include <stdio.h>
int main(void){
    int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	
	// Your code below here
	char my_email[30] = "isaacjamesgardner@hotmail.com";
	char letter = my_email[n]; //grabbing the character
	char Vowels[5][1] = {"a", "e", "i", "o", "u"};
	for (int i = 0; i < 5; i++){
		if (letter == Vowels[i][0]){
			printf("Vowel");
			return 0;
		}
	} 
	printf("Not vowel"); 
	
	
	// Do not edit below here
	return 0;
}