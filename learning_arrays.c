/* This code was written to help with my understanding of arrays.
To make it not too complicated I wrote it without the use of functions,
but be aware that using them would most certainly clean this program up.
Please if you have anything to suggest and add or questions yourself,
email me: leonsilasdev@gmail.com */

#include <stdio.h>
#include <stdlib.h>

void printFooter();

main(){
	int elements[10] = {0}, i = 0, check = 0, flag = 0;
	char answer;
	
do {

//ask for user input
printf("Input 10 elements in the array:\n");
for (i = 0; i < 10; i++) {
	printf("Element - %d : ", i + 1, elements[i]);
	scanf("%d", &elements[i]);
}

//repetition of user input
printf("\nJust to make sure about that...\n");
for (i = 0; i < 10; i++) {
	printf("Element %d is %d.\n", i + 1, elements[i]);
}

scanf("%c", &answer);

//loop to double check user input is correct
do{
printf("\nIs this correct? (Please enter Y or N)\n");
scanf("%c", &answer);

if (answer == 'Y' || answer == 'y'){
	printf("Awesome! Glad my program worked correctly :)\n");
	check++;
	flag++;
	}
	
else if (answer == 'N' || answer == 'n'){
	printf("I'm sorry that I got something wrong, must've been my stupid programmer.\n");
	printf("Let's try this again...'\n\n");
	check++;
	}
	
else {
	printf("I'm sorry, I don't quite understand %c...\n", answer);
	printf("Let me ask again....\n");
		for (i = 0; i < 10; i++) {
		printf("Element %d is %d.\n", i, elements[i]);
		}
	}
} while (check < 1);

//resets check for when the flag isn't met
check = 0;

} while (flag < 1);

//footer
printFooter();
}

void printFooter() {
	printf("\nCoding is a great hobby for me and I really enjoy it.\nThank you for using my program!\n");
	printf("Please if you have anything to suggest and add or questions yourself, email me: leonsilasdev@gmail.com\n\n");
	system("pause");
}
