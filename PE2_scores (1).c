/* 
   @file    <PE2_scores.c>
   @author  <Aika Washington>
   @date    <09/29/18>
   @version <1.0>
   
   @brief  <The user is prompted for 5 values from 0.0 to 100.0, and the total number of points, the average, the max, and min are displayed. User input is validated. The numbers are stored in an array of doubles. The numbers  are outputted on one line, each number followed by a comma (except the last number). Also outputted are the total number of points, the average of the array elements, the value of the maximum array element, the value of the minimum array element. >
*/
#include <stdio.h>
#include <stdbool.h>

int main(){



    // creating  a double array  
    double userNums[4];
    
    // delcaring
    const int NUMS = 5;
    
    int i;
    
    double totalPoints = 0;
    double average = 0;
    double maxVal = 0;
    double minVal = 0;
    
    // gathering numbers from user
    for(i = 0; i < NUMS; i++){
        printf("Enter Score %d:", i+1);
        scanf("%lf", &userNums[i]);
        
        while((userNums[i] < 0.0) || (userNums[i] > 100.0)){
            printf("Invalid Input\n");
            printf("Enter Score %d:", i+1);
            scanf("%lf", &userNums[i]);
        }
       
    }
    
    printf("\nYou entered: ");
    for(i = 0; i < NUMS-1; i++){
        printf(" %lf,", userNums[i]);
    }
    printf(" %lf \n", userNums[4]);
    
    
    // total points calculation
    for(i = 0; i < NUMS; i++){
        totalPoints = userNums[i] + totalPoints;   
    }
    
    // printing total points
    printf("\nTotal Score: %lf", totalPoints);
    
    // calculating average
    average = (totalPoints)/NUMS;
    
    // printing average value
    printf("\nAverage Score: %lf", average);
    
    // finding max val
    for(i = 0; i < NUMS; i++)
     if(userNums[i] > maxVal ){
         maxVal = userNums[i];
     }
    
    // printing max value
    printf("\nMax Score: %lf", maxVal);
    
    // finding min value
    minVal = userNums[0];
    for(i = 1; i < NUMS; i++){
        if(userNums[i] < minVal){
            minVal = userNums[i];
        }
     }
     
    // printing min value;
    printf("\nMin Score: %lf\n", minVal);

return (0);
}