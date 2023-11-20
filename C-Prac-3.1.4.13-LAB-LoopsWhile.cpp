//Scenario
//Write a program that takes two integer numbers and prints their sum.Do this until the user enters 0 (zero)(but print the last sum).
//Additionally, if the user inputs 99 as the first number and 0 as the second number, just print Finish., and end the program.
//Use the while loop in your code.
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample Input
//1
//1
//2
//0
//
//Expected output
//Sum : 2
//Sum : 2
//
//Sample Input
//1
//5
//99
//0
//
//Expected output
//Sum : 6
//Sum : 99
//Finish.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {

	int v1 = 1, v2 = 1;
	while (v1!=0 || v2!=0) {
		scanf_s("%d;", &v1);
		scanf_s("%d;", &v2);
		printf("Sum: %d\n", v1 + v2);
		if (v1 == 99 && v2 == 0) printf("Finish.");
	}
	return 0;
}