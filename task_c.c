#include <stdio.h>
int main(void){
    int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	
	// Your code below here
	if (n < 0){ //cant have a negative index
		printf("Error");
		return 1;
	}

	if (n > 28){ //28 is the index of the last character in the array
		printf("Error");
		return 1;
	}

	char my_email[30] = "isaacjamesgardner@hotmail.com";
	char letter = my_email[n];
	char Vowels[5][1] = {"a", "e", "i", "o", "u"}; //I can check if letter is a vowel by searching for it within this array
	for (int i = 0; i < 5; i++){
		if (letter == Vowels[i][0]){ //if it is in the Vowels[] array, print vowel and return
			printf("Vowel");
			return 0; //exiting the code early. if its found in the array, i want the code to exit so that it doesn't print "Not vowel" after the for loop is done.
		}
	} 
	printf("Not vowel"); 
	
	
	// Do not edit below here
	return 0;
}