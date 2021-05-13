/*Written by: Brieana McFarland
Date: 07/03/20
Purpose: Convert Celsius to Fahrenheit using function calls.*/

#include <stdio.h>
#include <stdlib.h>

//functions declaration
double convertFtoC (double);
double convertCtoF (double);
void printMenu();
void printHeader();
void printFooter();

//global variables
int userChoice, conversionCount = 0;
double userFTemp, userCTemp;

//begin main
main(){

printHeader();

//menu loop until quit
do{
	printMenu();
	scanf("%d", &userChoice);
	
	//switch for user choice
	switch (userChoice){
		case 1:
			printf("\nPlease enter your Fahrenheit temperature.\n");
			scanf("%lf", &userFTemp);
			convertFtoC(userFTemp);
			conversionCount += 1; //addition to total count
			break;
		case 2:
			printf("\nPlease enter your Celsius temperature.\n");
			scanf("%lf", &userCTemp);
			convertCtoF(userCTemp);
			conversionCount += 1; //addition to total count
			break;
			
		case 3:
			break;
			
		default:
			printf("That is not a valid option.\n");
	}
	//end of switch
} while (userChoice != 3);
//end of loop
printFooter();
system("pause");
}
//end of main

//Fahrenheit to Celsius fucntions
double convertFtoC(double userFTemp){
	userCTemp = (float) 5 / 9 * (userFTemp -32);
	printf("Your Celsius temperature is: %.2lf\n", userCTemp);
}
//end of FtoC

//Celsius to Fahrenheit function
double convertCtoF(double userCTemp){
	userFTemp = 32 + (userCTemp * (float) 9 / 5);
	printf("Your Fahrenheit temperature is: %.2lf\n", userFTemp);
}
//end of CtoF

//Menu function
void printMenu(){
	printf("\nWould you like to convert a temperature?");
	printf("\n1. Convert temperature from Fahrenheit to Celsius.");
	printf("\n2. Convert temperature from Celsius to Fahrenheit.");
	printf("\n3. No Thank You.\n");
}
//end of menu

/* These two functions are more for flare rather than actual meaningful use. */
//Header function
void printHeader(){
	printf("\t Valencia Algorithm Services");
	printf("\nThank you for chosing Valencia Algorithm Services.\n");
}
//end of header

//Footer function
void printFooter(){
	printf("\nYou made %d conversions with us! We're so glad that we could help you!", conversionCount);
	printf("\nThank you again for chosing Valencia Algorithm Services.\n");
}
//end of footer
