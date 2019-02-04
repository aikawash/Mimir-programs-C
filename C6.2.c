/* 
   @file    <NAME OF FILE>
   @author  <YOUR NAME>
   @date    <DATE CREATED>
*/
#include <stdio.h>

void initialize(int* one, int* two, char* ch);
void getHoursRate(double* hrs, double* pRate);
double payCheck(double hrs, double pRate);
void printCheck(double hrs, double pRate, double pSalary);
void funcOne(int* pOne, int pTwo);
void nextChar(char* ch);

int main()
{
	int x, y;
	char z;
	double rate, hours;
	double amount;
	
	double lpl = 5;
	
	double shit = 6;

	// call initialize here...
	initialize(&x,&y,&z);
	
	printf("After initialization: x = %d, y = %d, z = %c\n", x, y, z);

	//call getHoursRate here...
	getHoursRate(&hours, &rate);
	//call payCheck here...
	amount = payCheck(hours, rate);
	//call printCheck here...
    printCheck(hours, rate, amount);
	x = 35;
	y = 20;
	printf("\nBefore calling funcOne: x = %d, y = %d\n", x, y);
	//call funcOne with x & y here...
	funcOne(&x,y);
	printf("After funcOne: x = %d\n", x);
	
	//z = 'B';
	printf("Before nextChar z = %c\n\n", z);
	//nextChar with z here...
	nextChar(&z);
	printf("After nextChar: z = %c\n", z);
	
	return 0;
}

void initialize(int* one, int* two, char* ch){
    *ch = '~';
    *one = 0;
    *two = 0;
}

void getHoursRate(double* hrs, double* pRate){
    printf("Enter hours worked: ");
    scanf("%lf", &*hrs);
    printf("\nEnter pay rate: ");
    scanf("%lf", &*pRate);
}

// double payCheck(double hrs, double pRate)
double payCheck(double hrs, double pRate){
    double thatGoopo;
    if (hrs <= 40){
        thatGoopo = hrs*pRate;
        
    } 
    else{
        thatGoopo = 40*pRate;
        double overtime = hrs - 40;
        thatGoopo += (pRate*1.5)*overtime;
        
    }
    return thatGoopo;
}

void printCheck(double hrs, double pRate, double pSalary){
    printf("Hours worked: %lf", hrs);
    printf("\nPay Rate: $%lf", pRate);
    printf("\nThis week's salary: $%lf", pSalary);
}

void funcOne(int* pOne, int pTwo){
    int temp = *pOne;
    printf("\nEnter an integer: ");
    scanf("%d", &*pOne);
    (*pOne) = temp*2 + (pTwo - (*pOne));
}

void nextChar(char* ch){
    printf("Enter a character: ");
    scanf(" %c", &*ch);
    *ch = *ch+1;

}