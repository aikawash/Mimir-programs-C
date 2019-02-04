

#include "threeints.h"

int ThreeIntsSum(myInt num1, int num2, int num3) {
	return (num1 + num2 + num3);
}

int ThreeIntsAvg(myInt num1, int num2, int num3) {
	int sum;
	sum = num1 + num2 + num3;
	return (sum / 3);
}