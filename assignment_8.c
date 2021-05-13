/*Written by: Brieana McFarland
Date: 19/02/20
Purpose: Output lowest/highest numbers, sum of numbers, or average number from user menu input.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	
	//declaring variables (lowNumber is 54321 to try and guarentee a hit on the first number)
	int x, selection= 0, lowNumber = 54321, highNumber = 0, numEntered = 0, numSum = 0;
	double numAverage = 0;
	
	//main code
	printf("Please enter your 5 numbers!\n");
	
	//while loop until -1 is entered
	for (x = 1; x <= 5; x++) {
	scanf("%d", &numEntered);
	
	//replace input for lowest and highest numbers
		if (numEntered < lowNumber)
			lowNumber = numEntered;
		if (numEntered > highNumber)
			highNumber = numEntered;
		
	//running total and increment
	numSum += numEntered;
	}
	//end while loop
	
	//average calculation
	numAverage = (float) numSum / 5;
	
	//menu print
	printf("\nChoose what you would like to do:");
	printf("\n1. Display the smallest number entered.");
	printf("\n2. Display the largest number entered.");
	printf("\n3. Display the sum of the five numbers entered.");
	printf("\n4. Display the average of the five numbers entered.");
	printf("\n");
	scanf("%d", &selection);
	
	//output with switch
	switch (selection) {
		case 1:
			printf("\nThe smallest number was: %d.", lowNumber);
			break;
		case 2:
			printf("\nThe largest number was: %d.", highNumber);
			break;
		case 3:
			printf("\nThe sum of numbers was: %d.", numSum);
			break;
		case 4:
			printf("\nThe average of the numbers was: %.2lf", numAverage);
			break;
		default:
			printf("\nThat was an invalid option, please run the program again.");
	}
	
	printf("\n");
	system("pause");
}
//end of main
