#include <stdio.h>

#include "threeints.h"

// typedef unsigned int myInt;
/*
int ThreeIntsSum(myInt num1, int num2, int num3);
int ThreeIntsAvg(myInt num1, int num2, int num3);
*/

int main(void) {

	printf("%d\n", ThreeIntsSum(5, 10, 20));
	printf("%d\n", ThreeIntsAvg(5, 10, 20));

	return 0;
}

/*
int ThreeIntsSum(myInt num1, int num2, int num3) {
	return (num1 + num2 + num3);
}

int ThreeIntsAvg(myInt num1, int num2, int num3) {
	int sum;
	sum = num1 + num2 + num3;
	return (sum / 3);
}
*/