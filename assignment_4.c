//Written by: Brieana McFarland
//Date: 29/1/20
//Purpose: Calculate shipping costs based on weight and distance.

#include <stdio.h>
#include <stdlib.h>

main(){
	
	//declaring variables
	int iWeight, iMiles, iWeightCost, iMilesCost, iTotal;
	
	//stylization
	printf("\t Valencia Global Courier Services\n");
	printf("\nThank you for chosing Valencia Global Courier Services.");
	
	//weight i/o and calculations
	printf("\nWhat is the weight of your package in lbs?\n");
	scanf("%d", &iWeight);
		//begin if
		if (iWeight <= 10) {
		
			iWeightCost = 10;
		}
		else {
		
			iWeightCost = 10 + (iWeight - 10) * 2;
		}
		//end if
	printf("The weight cost will be $%d.00.", iWeightCost);
	
	//miles i/o and calculations
	printf("\nHow many miles is your package travelling?\n");
	scanf("%d", &iMiles);
		//begin if
		if (iMiles <= 500) {
		
			iMilesCost = 5;
		}
		else {
		
			iMilesCost = 5 + (iMiles / 500) * 5;
		}
		//end if
	printf("The distance cost will be $%d.00.", iMilesCost);
	
	//final calculations
	iTotal = iMilesCost + iWeightCost;
	
	//output
	printf("\n\nIt will cost $%d.00 to ship your package.", iTotal), ceil(iTotal);
	printf("\nThank you again for chosing Valencia Global Courier Services!\n");
	
	system("pause");
}
//end of main
