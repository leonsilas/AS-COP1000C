/*Written by: Brieana McFarland
Date: 11/02/20
Purpose: Creates 4 loops:
	First outputs multiples of 5 between 0 and 60
	Second outputs numbers less than 200 evenly distributable by both 2 and 7
	Third outpts the sum of the multiples of 8 between 100 and 500.
	Fourth outputs the sum of all odd numbers between 20 and 100 */

#include <stdio.h>
#include <stdlib.h>

main(){
	
	//declaring variable
	int a, b, c, d, sum8 = 0, sumOdd = 0;

	//first loop
	printf("The multiples of 5 that are greater than zero and less than 60 are...\n");
	
	//begin loop
	for (a = 1; a < 60; a++) {
	
		//begin if
		if (a % 5 == 0)
			printf("%d\t", a);
	}
	
	//second loop
	printf("\nAll the numbers less than 200 that are evenly vdivisible by both 2 and 7 are...\n");
	
	//begin for
	for (b = 1; b < 200; b++) {
		
		//begin if
		if (b % 2 ==0 && b % 7 == 0)
			printf("%d\t", b);
	}
	
	//third loop
	printf("\nThe sum of the multiples of 8 that are between 100 and 500 is...\n");
	
	//begin loop
	for (c = 100; c < 500; c++) {
		
		//begin if
		if (c % 8 == 0) 
			sum8 += c	;
		
	}
	//output
	printf("%d", sum8);
	
	//fourth loop
	printf("\nThe sum of all odd numbers between 20 and 100 is...\n");
	
	//begin loop
	for (d = 20; d < 100; d++) {
		
		//begin if
		if (d % 2 != 0)
			sumOdd += d	 ;	
	}
	//output
	printf("%d\n", sumOdd);

	system("pause");
}
//end of main
