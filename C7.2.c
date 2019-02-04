/* 
   @file    <NAME OF FILE>
   @author  <YOUR NAME>
   @date    <DATE CREATED>
*/



typedef struct timeType_struct{
	int hr;
	int min;
	int sec;
} timeType;

typedef struct tourType_struct{
	char city[50];
	int distance;
	timeType travelTime;
} tourType;
//void printTour(const tourType* dest);
void printTour(tourType* dest);
tourType getData(tourType aTour);

#include <stdio.h>

int main()
{
    int maxDis;
    //int i;
    //int num;
 
    printf("Enter tour data for 3 cities...");
    tourType tours[3];
    
    tours[0] = getData(tours[0]);
    tours[1] = getData(tours[1]);
    tours[2] = getData(tours[2]);
    
    maxDis = tours[0].distance;
    
    for(i=1; i <= 2; i++){
        if(tours[i].distance < maxDis){
            maxDis = tours[i].distance;
            num = i;
        }
    }
    
    printf("\n\nShortest Tour");
    printf("\n-------------");
    printTour(&tours[num]);
    
    
    printf("\n");
    return(0);
}

// printTour(const tourType* dest){
void printTour(tourType* dest){
    printf("\nCity name: %s", dest->city);
    printf("\nDistance: %d", dest->distance);
    printf("\nTravel time: %02d:%02d:%02d", dest->travelTime.hr, dest->travelTime.min, dest->travelTime.sec);
    
    
}

tourType getData(tourType aTour){
        printf("\nEnter a city name: ");
        scanf(" %s", aTour.city);
        printf("Enter an integer distance: ");
        scanf(" %d", &aTour.distance);
        printf("Enter travel time as HH:MM:SS  ");
        scanf(" %02d:%02d:%02d", &aTour.travelTime.hr, &aTour.travelTime.min, &aTour.travelTime.sec);
        return aTour; 
    
}