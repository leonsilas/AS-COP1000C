/*Written by: Brieana McFarland
Date: 07/03/20
Purpose: Convert Celsius to Fahrenheit using function calls.*/

#include <stdio.h>
#include <stdlib.h>

//functions declaration
int powerUp(int, int);

//begin main
main(){

int x = 0, y = 0;

printf("Enter the first integer: ");
scanf("%d", &x);
printf("Enter the second integer: ");
scanf("%d", &y);

powerUp(x,y);

}
//end of main

//Header function
powerUp(x,y){
	
	int result = 0;
	
	result = pow(x,y);
	
	printf("%d to the power of %d is %d", x, y, result);
	
}
//end of header
