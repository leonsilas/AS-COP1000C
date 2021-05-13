//Written by: Brieana McFarland
//Date: 11/02/20
//Purpose: Prove statements as true or false.

#include <stdio.h>
#include <stdlib.h>

main(){
	
	//declaring variable
	int a = 5, b = 4, c = 3, d = 2;
	
	printf("When a = 5, b = 4, c = 3, and d = 2...");

	//if statments to test each equation; includes output
	if ( a <=b + 1) {
		printf("\n ( a <= b + 1) is true.");
	}
	
	else {
		printf("\n ( a <= b + 1) is false.");
	}
	
	if ( a < b && c > b) {
		printf("\n ( a < b && c > b) is true.");
	}
	
	else {
		printf("\n ( a < b && c > b) is false.");
	}
	
	if ( a >= c || d >= 5) {
		printf("\n ( a >= c || d >= 5) is true.");
	}
	
	else {
		printf("\n ( a >= c || d >= 5) is false.");
	}
	
	if ( !( a > b) ) {
		printf("\n ( !( a > b) ) is true.");
	}
	
	else {
		printf("\n ( !( a > b) ) is false.");
	}
	
	if ( b >= a && !(d < b)) {
		printf("\n ( b >= a && !(d < b)) is true.");
	}
	
	else {
		printf("\n ( b >= a && !(d < b)) is false.\n");
	}

	system("pause");
}
//end of main
