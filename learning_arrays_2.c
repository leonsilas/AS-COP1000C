/* This code was written to help with my understanding of arrays.
Please if you have anything to suggest and add or questions yourself,
email me: leonsilasdev@gmail.com */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
#define MAX 100

void printHeader();
void printFooter();

int elements[SIZE] = {0}, askArray[MAX] = {0}, numValues, i;

main(){ 
	
	printf("Input %d numbers into the array.\n", SIZE);
for (i = 0; i < SIZE; i++){
	printf("Element - %d : ", i + 1);
	scanf("%d", &elements[i]);
}
printf("\nThe values in reverse order are: \n");
for (i = SIZE - 1; i >= 0; i--){
	printf("%d\t", elements[i]);
}

/*Testing to see if I can make an array with an "unknown" number of values*/
printf("\nHow many values are in this new array?\n");
scanf("%d", &numValues);

if (numValues <= 0)
	printf("Sorry that's not a valid array.");
	
else if (numValues <= MAX){

	printf("Input %d numbers into the array.\n", numValues);
	for (i = 0; i < numValues; i++){
		printf("Element - %d : ", i + 1);
		scanf("%d", &askArray[i]);
	}
	
	printf("\nThe values in reverse order are: \n");
	for (i = numValues - 1; i >= 0; i--){
		printf("%d\t", askArray[i]);
	}
}

else
	printf("Sorry, that's too many values for this program to handle.");

//footer
printFooter();
}

//FUNCTIONS
void printHeader(){
		printf("\t Silas Algorithm Services");
	printf("\nThank you for chosing Silas Algorithm Services.\n");
}

void printFooter(){
	printf("\n\nCoding is a great hobby for me and I really enjoy it.\nThank you for using my program!\n");
	printf("If you come up to any issues in this code, please email leonsilasdev@gmail.com with the details!\n");
	system("pause");
}
