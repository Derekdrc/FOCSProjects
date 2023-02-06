/*Derek D'Arcy
10/28/2021
*/

#include <stdio.h>

int main() {
	//Declares vars and sets all to 0.0
	float gallons = 0.0;
	float miles = 0.0;
	float MPG = 0.0;
	float totalGallons = 0.0;
	float totalMiles = 0.0;
	float totalMPG= 0.0;
	
	//prints question and takes user input
	printf("Enter the gallons used (-1 to end) >> ");
	scanf_s("%f", &gallons);

	while (gallons != -1) {
		
		//Prompts user for miles driven and stores value in miles var
		//Used miles var here instead of MPG as in pseudocode as miles makes more sense for calculation
		printf("Enter miles driven >> ");
		scanf_s("%f", &miles); 

		//Performs calculation to get MPG on current tank of gas
		MPG = miles / gallons;

		//Displays MPG of current tank
		printf("The miles / gallon for this tank was %f \n", MPG);
		//Adds current gallons and miles to total gallons and miles for the average MPG 
		totalGallons += gallons; 
		totalMiles += miles;

		//Calculates then displays the total MPG over all tanks
		//I changed the order from the psuedocode here to make the program more intuitive
		totalMPG = totalMiles / totalGallons;
		printf("The overall average miles / gallon was %f \n", totalMPG);
		
		//Prompts user for gallons used in new tank to perform calculations again, or allows user to exit
		printf("Enter the gallons used (-1 to end) >> ");
		scanf_s("%f", &gallons);
	}

	//Ends program
	system("pause");
	return 0;
}

/*
	When you declare the variables as an integer instead of a float, the variables will always be an integer, 
	meaning that there will never be any decimals, the calculations and final answers will probably be inaccurate, 
	as the calculations will be performed with whole numbers only. 
*/
