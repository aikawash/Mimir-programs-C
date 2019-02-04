/* 
   @file    <C10.1.c>
   @author  <aika>
   @date    <11/28/18>
*/
#include <stdio.h>
#include <stdlib.h>
int sumRecursive(int num);
void sumIterative(int num);

int main()
{
    int num;   
    int num2;
        
    printf("Enter an integer between 1 and 1000: ");
    scanf("%d", &num);
    if((num < 1) || (num > 1000)){
        printf("Invalid input");
        exit(0);
    }
        //int fum = 0;
        //int test = num;
        printf("\nRecursive sum = ");
        num2 = sumRecursive(num);
        printf("%d", num2);
        printf("\nIterative sum = ");
        sumIterative(num);
    
}

int sumRecursive(int num){
    if(num != 1){
         return num + sumRecursive(num-1);
        // printf("\no %d",fum);
    }
    else{
        return num;
    }

}

void sumIterative(int num){
    int fum = 0;
    int test = num;
        for(int i = 1; i <= num; i++){
            fum = fum + i;
        }
        printf("%d", fum);
    }
    
