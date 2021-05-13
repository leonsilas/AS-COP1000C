/*Written by: Brieana McFarland
Date: 30/03/20
Purpose: Process and sort gradebook inputs in array. Show: Highest, Lowest, Average, and grades with respective letter.
NOTE: I feel like this code is inefficent, but works.  Please let me know how I could make it better!*/

#include <stdio.h>
#include <stdlib.h>

//constant to be able to change for any gradebook size and max score
#define GRADES 40
#define MAX 100

//variables
int gradeBook[GRADES] = {0}, lowGrade, highGrade, totalGrade = 0, aGrade = 0, bGrade = 0, cGrade = 0, dGrade = 0, fGrade = 0, i;
double avgGrade = 0;

//begin main
main(){

//inputs
printf("Currently this gradebook holds %d grades.\nIf you want to change this, please change the value in the source code.\n\n", GRADES);
printf("Please input your class grades.\n");

//array input
for (i = 0; i < GRADES; i++){
	printf("Student - %d : ", i + 1);
	scanf("%d", &gradeBook[i]);	

	//if for tracking number of types of grades
	if (gradeBook[i] >= 90)
		aGrade++;
	else if (gradeBook[i] >= 80)
		bGrade++;
	else if (gradeBook[i] >= 70)
		cGrade++;
	else if (gradeBook[i] >= 60)
		dGrade++;
	else if (gradeBook[i] >= 0)
		fGrade++;
	
	//if for low and high grades
	if (gradeBook[i] > highGrade || i == 0)
		highGrade = gradeBook[i];
	
	if (gradeBook[i] < lowGrade || i == 0)
		lowGrade = gradeBook[i];
		
	//calculating running total
	totalGrade += gradeBook[i];
	}

//outputs
printf("\n\nHere's the information to know about these grades.\n");
printf("The lowest grade was %d.\n", lowGrade);
printf("The highest grade was %d.\n", highGrade);
printf("The class average was %.2lf.\n", (float) totalGrade / GRADES);
printf("There were %d A's, %d B's, %d C's, %d D's, and %d F's.\n", aGrade, bGrade, cGrade, dGrade, fGrade);
printf("\nThese are the individual grades.\n");

//array output
for (i = 0; i < GRADES; i++){
	//if loop to assign grade value
	if (gradeBook[i] > MAX || gradeBook[i] < 0)
		printf("Student - %d : %d Invalid Grade.\n", i + 1, gradeBook[i]);
	else if (gradeBook[i] >= 90)
		printf("Student - %d : A.\n", i + 1, gradeBook[i]);
	else if (gradeBook[i] >= 80)
		printf("Student - %d : B.\n", i + 1, gradeBook[i]);
	else if (gradeBook[i] >= 70)
		printf("Student - %d : C.\n", i + 1, gradeBook[i]);
	else if (gradeBook[i] >= 60)
		printf("Student - %d : D.\n", i + 1, gradeBook[i]);
	else if (gradeBook[i] >= 0)
		printf("Student - %d : F.\n", i + 1, gradeBook[i]);
}

system("pause");
}
//end of main
