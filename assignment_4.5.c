//Written by: Brieana McFarland
//Date: 29/1/20
//Purpose: Calculate shipping costs based on weight and distance.

#include <stdio.h>
#include <stdlib.h>

main(){
	
	//declaring variable
	
	double fTemp = 75.2;
	double cTempA, cTempB;

	cTempA = 5 / 9 * (fTemp - 32);
	cTempB = (float) (5 / 9) * (fTemp - 32);
	
	printf("\n The temperature is %.2lf\n", cTempA);
	printf("\n The temperature is %.2lf\n", cTempB);
	
	system("pause");
}
//end of main
