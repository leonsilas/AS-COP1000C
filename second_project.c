//Written by: Brieana McFarland
//Date: 14/01/2020
//Purpose: Take user inputted numbers and output product, difference, and squares of each number.

#include <stdio.h>
#include <stdlib.h>

main () {
	//Declaring and initializing variables
	int iFirstNumber = 0, iSecondNumber = 0;
	int iDifference = 0, iProduct = 0;
	int iSquareFirst = 0, iSquareSecond = 0;
	
	//Asking for values and confirmation
	printf("Enter the first number:\n");
	scanf("%d",&iFirstNumber);
	printf("You entered %d.\n", iFirstNumber);
	printf("Enter the second number:\n");
	scanf("%d",&iSecondNumber);
	printf("You entered %d.\n", iSecondNumber);
	
	//Calculations
	iProduct = iFirstNumber * iSecondNumber;
	iDifference = iFirstNumber - iSecondNumber;
	iSquareFirst = iFirstNumber * iFirstNumber;
	iSquareSecond = iSecondNumber * iSecondNumber;
	
	//Output
	printf("\nThe difference of the numbers is: %d.\n", iDifference);
	printf("The product of the numbers is: %d.\n", iProduct);
	printf("The square of %d is: %d.\n", iFirstNumber, iSquareFirst);
	printf("The square of %d is: %d.\n", iSecondNumber, iSquareSecond);
	printf("Thank you.");
}
//End of main
