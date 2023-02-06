/*Derek D'Arcy
11/17/2021
*/

#include <stdio.h>



//Square function that takes input given and returns input squared	
int square(int input) {
	return input * input;
}


int main() {
	//initialize input int
	int input;
	//for loop that iterates 10 times
	for (int i = 0; i < 10; i++) {
		//Gets user input number
		printf("Enter a number >> ");
		scanf_s("%i", &input);
		//Squares number and prints out result
		printf( "%i squared is %i\n", input, square(input));
	}
}