//Written by: Brieana McFarland
//Date: 18/01/20
//Purpose: Show application of videos with input/output and arithmetic operators.
//NOTE: This does expand on the application more than just the basic video codes.  Please enjoy the use of it!

#include <stdio.h>
#include <stdlib.h>

main(){
	//Declaring variables
	int iChoice;
	double dTaxRate;
	double a, b, resultAdd, resultSubtract, resultMultiply, resultDivide;
	
	//I/O basics code
	printf("Enter the tax rate: \n");
	scanf("%lf", &dTaxRate);
	printf("The tax rate is %.2lf \n\n", dTaxRate);
	
	//Arithmetic operators code applied complexly
	printf("This next code is meant to show you how arithmetic operators work!\n");
	printf("Enter your first number.\n");
	scanf("%lf", &a);
	printf("Enter your second number.\n");
	scanf("%lf", &b);
	printf("What operator would you like to use?\nPlease enter the number only.");
	printf("\n 1. Addition\n 2. Subtaction\n 3. Multiplication\n 4. Division\n");
	scanf("%d", &iChoice);
	
	//Arithmetic
	
	resultAdd = a + b;
	resultSubtract = a - b;
	resultMultiply = a * b;
	resultDivide = a / b;
	
	//Output based on operator chosen.
	if (iChoice == 1) {
		printf("Your answer is: %.2lf\n", resultAdd);
	}
	
	else if (iChoice == 2) {
		printf("Your answer is: %.2lf\n", resultSubtract);
	}
	
	else if (iChoice == 3) {
		printf("Your answer is: %.2lf\n", resultMultiply);
	}
	
	else if (iChoice == 4) {
		printf("Your answer is: %.2lf\n", resultDivide);
	}
	
	else {
		printf("Sorry, that was an incorrect choice, please try running the code again.\n");
	}
	
	printf("Thank you!\n");
	system("pause");
}
//end of main
