/* 
   @file    <C2.2.c>
   @author  <Aika Washington>
   @date    <10/29/18>
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int realCart;
    double liters;
    double cartons;
    double cost;
    double profit;
    
    
    printf("Enter, in liters, the total quantity of milk produced: ");
    scanf("%lf", &liters);
    
    cartons = round(liters/3.78);
    
    realCart = cartons;
    
    printf("The number of milk cartons needed to hold milk: %1d", realCart);
    
    cost = liters*.38;
    printf("\nThe cost of producing milk: $ %.2lf", cost);
    
    profit = .27*cartons;
    printf("\nProfit: $ %.2lf\n", profit);
    
    return (0);
}