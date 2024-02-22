#include <stdio.h>
int main(void){
    int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	
	// Your code below here
	char my_email[30] = "isaacjamesgardner@hotmail.com";
	char letter = my_email[n]; //setting the character at index n to a new variable. there is no need to check if n is greater than 28 (the number of characters in my email)
							   //as the code works fine without it, printing Not Vowel is such a case.	
	char Vowels[5][1] = {"a", "e", "i", "o", "u"}; //I can check if the character is a vowel by searching for it within this array
	for (int i = 0; i < 5; i++){
		if (letter == Vowels[i][0]){ //if it is in the Vowels[] array
			printf("Vowel");
			return 0; //exiting the code early. if its found in the array, i want the code to exit so that it doesn't print "Not vowel" after the for loop is done.
		}
	} 
	printf("Not vowel"); 
	
	
	// Do not edit below here
	return 0;
}