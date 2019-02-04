/* 
   @file    <C2.1.c>
   @author  <Aika Washington>
   @date    <10/29/18>
*/

#include <stdio.h>

int main()
{
    int elapsedSec;
    int hours;
    int minutes;
    int seconds;
    printf("Enter the elapsed time in seconds: ");
    scanf("%d", &elapsedSec);
    printf("\nThe elapsed time in seconds = %d", elapsedSec);
    
    hours = elapsedSec/3600;
    minutes = ( elapsedSec - (3600*hours) ) / (60);
    seconds = ( elapsedSec - (3600*hours) - (minutes*60) );
    
    
    printf("\nThe equivalent time in hours:minutes:seconds = ");
    printf("%02d", hours);
    printf(":");
    printf("%02d", minutes);
    printf(":");
    printf("%02d", seconds);
    printf("\n");
    
    return (0);
}