/* 
   @file    <C4.1.c>
   @author  <Aika Washington>
   @date    <11/02/2018>
*/
#include <stdio.h>
#include <math.h>

int main()
{
int int1;
int int2;

int i;
int j;
int k;
int m; 

int sum = 0;
int sum2 = 0;
int square;
    
    
printf("Enter two integers.");
printf("\nFirst number must be less than\nthe second number you enter");
printf("\nEnter 2 integers numbers: ");
scanf(" %d %d", &int1, &int2);

if(int2 > int1){
    // sum of odd squares
    printf("\nSum of the squares of odd integers between %d and %d = ", int1, int2);
    for(i = int1; i <= int2; i++){
        if(i % 2 != 0){
            sum += (int)(pow(i, 2)+0.5); 
        }
    }
    printf("%d", sum);
    // print nums
    printf("\nOdd integers between %d and %d are:\n", int1, int2);
    for(j = int2; j > int1; j--){
        if(j % 2 != 0){
            printf("%d ", j);
        }
    }
    // even sums
    
    printf("\nSum of even integers between %d and %d = ", int1, int2);
    for(k = int1;k <= int2; k++){
        if(k % 2 == 0){
            sum2 += k; 
        }
    }
    printf("%d", sum2);
    
    
    //stupid table
    printf("\nNumber\t\tSquare of Number");
    
    for(m= int1; m <= int2; m++){
        printf("\n  %2d", m);
        square = (int)(pow(m, 2)+0.5);
        printf("%20d", square);
    }
}

printf("\nUpper case letters are: z y x w v u t s r q p o n m l k j i h g f e d c b a ");
printf("\n");
return(0);
}
