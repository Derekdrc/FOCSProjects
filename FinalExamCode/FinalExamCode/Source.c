/*Derek D'Arcy
12/13/2021
*/

#include <stdio.h>

int main() {
	int array[10];
	printf("Please enter your 10 numbers.");
	for (int i = 0; i < 10; i++) {
		scanf_s("%i", &array[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("%i, ", array[i]);
	}

}