/*Written by: Brieana McFarland
Date: 18/02/20
Purpose: Output lowest/highest numbers, # of values entered, and average number from user input.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	
	//declaring variables (lowNumber is 54321 to try and guarentee a hit on the first number)
	int lowNumber = 54321, highNumber = 0, numEntered = 0, numAmount = 0, numTotal = 0;
	double numAverage = 0;
	
	//main code
	printf("Please enter your numbers and enter a value of -1 when you are done!\n");
	
	//while loop until -1 is entered
	while (numEntered != -1){
	scanf("%d", &numEntered);
	
	//break from loop for -1
		if (numEntered == -1)
			break;
	
	//invalid input for out of range
		if (numEntered <= 0 ) {
			printf("\nI'm sorry, that number isn't valid.");
			printf("\n\nPlease continue entering your numbers, don't forget to enter -1 when finished!\n");
			continue;
		}
	
	//replace input for lowest and highest numbers
		if (numEntered < lowNumber)
			lowNumber = numEntered;
		if (numEntered > highNumber)
			highNumber = numEntered;
		
	//running total and increment
	numTotal += numEntered;
	numAmount++;
	}
	//end while loop
	
	//final calculation	
	numAverage = (float) numTotal / numAmount;
	
	//output
	printf("\nThe lowest number was: %d.", lowNumber);
	printf("\nThe highest number was: %d.", highNumber);
	printf("\nThe number of values entered was: %d.", numAmount);
	printf("\nThe average of the numbers was: %.2lf\n", numAverage);
	system("pause");
}
//end of main
