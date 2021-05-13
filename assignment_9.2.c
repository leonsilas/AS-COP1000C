/*Written by: Brieana McFarland
Date: 03/04/20
Purpose: Process and sort gradebook inputs in array. Show: Highest, Lowest, Average, and grades with respective letter.
NOTE: This is the edited code after assignment restrictions were re-outlined in Canvas.*/

#include <stdio.h>
#include <stdlib.h>

//constant to be able to change for any gradebook size and max score
#define GRADES 50000
#define MAX 100

//variables
int gradeBook[GRADES] = {0}, totalGradesEntered = 0, lowGrade = 0, highGrade = 0, totalGrade = 0, aGrade = 0, bGrade = 0, cGrade = 0, dGrade = 0, fGrade = 0, temp, i, j;
double avgGrade = 0;

//begin main
main(){

//inputs
//array input
for (i = 0; i < GRADES; i++){
	
	printf("Enter exam score %d or -1 to stop entering: ", i + 1);
	scanf("%d", &gradeBook[i]);	
	
	//exit condition
	if (gradeBook[i] == -1)
		break;
		
	//if for entry restraints
	if (gradeBook[i] > MAX){
		printf("Invalid exam score, scores must be between 0 and 100.\n");
		system("pause");
		i--;
		continue;
		}
	
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
	totalGradesEntered++;
}

//sorting mechanism
 for (i = 0; i < totalGradesEntered; i++){
 	
 	for (j = i + 1; j < totalGradesEntered; j++){
 		
 		if (gradeBook[i] < gradeBook[j]){
 			temp = gradeBook[j];
 			gradeBook[j] = gradeBook[i];
 			gradeBook[i] = temp;
		 }
	 }
 }

printf("The scores have been sorted.\n");
system("pause");

//array output
for (i = 0; i < totalGradesEntered; i++){
	//if loop to assign grade value
	if (gradeBook[i] >= 90)
		printf("%d.\t%d\tA\n", i + 1, gradeBook[i]);
	else if (gradeBook[i] >= 80)
		printf("%d.\t%d\tB\n", i + 1, gradeBook[i]);
	else if (gradeBook[i] >= 70)
		printf("%d.\t%d\tC\n", i + 1, gradeBook[i]);
	else if (gradeBook[i] >= 60)
		printf("%d.\t%d\tD\n", i + 1, gradeBook[i]);
	else if (gradeBook[i] >= 0)
		printf("%d.\t%d\tF\n", i + 1, gradeBook[i]);
}
system("pause");
printf("\n\n\n");

//outputs
printf("Number of scores entered: %d\n", totalGradesEntered);
printf("Highest score entered...: %d.\n", highGrade);
printf("Lowest score entered....: %d.\n", lowGrade);
printf("The average score.......: %.2lf.\n", (float) totalGrade / totalGradesEntered);
printf("Number of A scores......: %d\n", aGrade);
printf("Number of B scores......: %d\n", bGrade);
printf("Number of C scores......: %d\n", cGrade);
printf("Number of D scores......: %d\n", dGrade);
printf("Number of F scores......: %d\n", fGrade);

printf("\n\n");
system("pause");
}
//end of main
