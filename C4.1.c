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
    int i = int1;
    printf("\nSum of the squares of odd integers between %d and %d = ", int1, int2);
    while(i <= int2){
        if(i % 2 != 0){
            sum += (int)(pow(i, 2)+0.5); 
        }
        i++;
    }
    printf("%d", sum);
    // print nums
    j = int1;
    printf("\nOdd integers between %d and %d are:\n", int1, int2);
    while(j < int2){
        if(j % 2 != 0){
            printf("%d ", j);
        }
        j++;
    }
    // even sums
    k = int1;
    
    printf("\nSum of even integers between %d and %d = ", int1, int2);
    while(k <= int2){
        if(k % 2 == 0){
            sum2 += k; 
        }
        k++;
    }
    printf("%d", sum2);
    
    m = int2;
    //stupid table
    printf("\nNumber\t\tSquare of Number");
    
    while(m >= int1){
        printf("\n  %2d", m);
        square = (int)(pow(m, 2)+0.5);
        printf("%20d", square);
        m--;
    }
}

printf("\nUpper case letters are: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z ");
printf("\n");
return(0);
}
