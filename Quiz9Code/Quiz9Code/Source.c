//Write the C code to store the values(2,4,5,8) in an array and print them out using a for loop.

#include <stdio.h>

int main() {
	//populate array with desired numbers
	int nums[4] = {2, 4, 5, 8};
	
	//loop through all index of array
	for (int i = 0; i < 4; i++) {
		//print out each array indexed number
		printf("%i\n", nums[i]);
	}
	//returns 0
	return 0;
}