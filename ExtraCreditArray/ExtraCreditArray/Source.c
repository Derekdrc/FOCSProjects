#include <stdio.h>
//declare array and vars
float array[10];
float total;

int main() {
	//get 10 numbers from user
	printf("Enter 10 integers >> ");
	for(int i = 0; i < 10; i++) {
		scanf_s("%f", &array[i]);
	}
	//print out array to user
	for (int j = 0; j < 10; j++) {
		printf("%f \n", array[j]);
	}
	//get sum of array
	for (int f = 0; f < 10; f++) {
		total += array[f];
	}
	//return sum of array
	printf("The total sum of the array is %f \n ", total);

	return 0;
}