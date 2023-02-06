/*Derek D'Arcy
11/17/2021
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//define gravity
#define GRAVITY 9.81

int main() {
	//initialize vars
	float time;
	float distance;
	
	//loops from 100 to 10 in increments of -10
	for (distance = 100; distance > 0; distance -= 10) {
		//equation for time
		time = sqrt(distance / (0.5 * GRAVITY));
		//print out the result, with proper truncation and rounding of decimals
		printf("Given a distance of %.0f meters, \n The object hits the ground in %.1f seconds \n", distance, round(time *10)/10 );

	}
	
	system("pause");
	return 0; 

}