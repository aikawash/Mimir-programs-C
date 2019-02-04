/* 
   @file    <C3.1.c>
   @author  <Aika Washington>
   @date    <10/31/2018>
*/


#include <stdio.h>
#include <math.h>

int main()
{

int num1;
int num2;
int answer;
char operatr;

printf("Enter integer +|-|*|\\ integer:");
scanf(" %d %c %d", &num1,&operatr,&num2 );
printf(" %d %c %d ", num1,operatr,num2 );

if(num2 == 0 && operatr == '/'){
    printf("= ERROR ");
    printf("\nCannot divide by zero\n");
}

if(operatr == '+'){
    answer = num1+num2;
    printf("= %d\n", answer);
}

if(operatr == '-'){
    answer = num1-num2;
    printf("= %d\n", answer);
}


if(operatr == '*'){
    answer = num1*num2;
    printf("= %d\n", answer);
}


if(operatr == '/' && num2 != 0){
    answer = num1/num2;
    printf("= %d\n", answer);
}




return (0);

}