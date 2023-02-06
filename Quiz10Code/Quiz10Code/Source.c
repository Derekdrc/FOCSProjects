#include <stdio.h>
#include <math.h>

//Declare vars
float a, b, c;

//Given function
float hypotenuse(float a, float b)
{
	float c = sqrt(a * a + b * b);
	return c;
}


int main() {
	//get inputs
	printf("Input A >> ");
	scanf_s("%f", &a);


	printf("Input B >> ");
	scanf_s("%f", &b);

	//call function
	c = hypotenuse(a, b);
	printf("The hypotenuse is %.2f", c);

}
