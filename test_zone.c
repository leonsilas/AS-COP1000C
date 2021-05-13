//Written by: Brieana McFarland
//Date: 14/01/2020
//Purpose: Output "Hello World!" on the screen

//int num32
//printf("here lies me")

#include <stdio.h>
#include <stdlib.h>

int x();
int y();


int examQn(int x, int y){

int i, sum =0;

for(i =0; i<= y; i++)

sum +=x;
return sum;
}

main(){ 

char flag = 'Y';
int x = 1, y = 5;
while (x < y && flag == 'Y'){
	x++;
	if (x == 4)
		flag == 'N';
	printf("%d", x);
}
printf("\n");

 system("pause");
 }
 
int x (){
	int result;
	result = 5;
	result++;
	result++;
	result++;
	return result;
}

int y (){
	int result;
	result = 10;
	result--;
	result--;
	result++;
	result--;
	return result;
}



//end of main
