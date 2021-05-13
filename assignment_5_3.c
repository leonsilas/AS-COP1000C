/*Written by: Brieana McFarland
Date: 17/02/20
Purpose: Calculate number of passing grades.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	
	//declaring variables
	int gradePass = 0, gradeEntered = 0, gradeTotal = 0;
	double gradePercentage = 0;
	
	//main code
	printf("Enter your grades and enter a value of -1 when you are done!\n");
	
	//while loop until -1 is entered
	while (gradeEntered != -1){
	scanf("%d", &gradeEntered);
	
	//break from loop for -1
		if (gradeEntered == -1)
			break;
	
	//invalid input for out of range
		if (gradeEntered > 100 || gradeEntered < -1) {
			printf("\nThat is not a valid grade!");
			printf("\n\nPlease continue entering your grades.\n");
			continue;
		}
		
	//increment for grades 70 or over
		if (gradeEntered >= 70) 
			gradePass++;
	
	//grade total increment
	gradeTotal++;
	}
	//end while loop
	
	//final calculation	
	gradePercentage = (float) gradePass / gradeTotal * 100;
	
	//output
	printf("\nYou entered %d passsing grades.", gradePass);
	printf("\n%.1lf%% of the valid grades entered are passing grades.\n", gradePercentage);
	system("pause");
}
//end of main
