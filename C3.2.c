/* 
   @file    <C3.3.c>
   @author  <Aika Washington>
   @date    <10.31.2018>
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

int check;

char gender;
double pounds;
double weight;

double waist;
double first;

double wrist;
double navel;
double hip;
double forearm;

double fat;
double fatP;

printf("This program determines the body fat of a person.Enter your gender (f|F|m|M): ");
scanf("%c", &gender);

if(gender == 'F'){
    gender = 'f';
}

if(gender == 'M'){
    gender = 'm';
}





/*
if((gender !='f') || (gender !='F') || (gender !='m') || (gender !='M') )
    printf("Invalid gender code.\n");
*/


if(gender == 'f' || gender == 'F'){
    printf("\nEnter body weight (in pounds): ");
    scanf(" %lf", &pounds);
    weight = (pounds * 0.732) + 8.987;
    printf("\nEnter wrist measurement at fullest point (in inches): ");
    scanf(" %lf", &wrist);
    wrist = wrist / 3.140;
    printf("\nEnter waist measurement at navel (in inches): ");
    scanf(" %lf", &navel);
    navel = navel * 0.157;
    printf("\nEnter hip measurement at fullest point (in inches): ");
    scanf(" %lf", &hip);
    hip = hip  * 0.249;
    printf("\nEnter forearm measurement at fullest point (in inches): ");
    scanf(" %lf", &forearm);
    forearm = forearm* 0.434;
    
    first = weight + wrist - navel - hip + forearm;
    fat = pounds - first;
    fatP = (fat * 100) / pounds;
    
    printf("\nBody fat: %lf", fat);

    printf("\nBody fat percentage: %lf\n", fatP);
    
    exit(0); 
}

if((gender =='m') || (gender =='M')){
    printf("\nEnter body weight (in pounds): ");
    scanf(" %lf", &pounds);
    weight = (pounds * 1.082) + 94.42;
    printf("\nEnter waist measurement at fullest point (in inches): ");
    scanf(" %lf", &waist);
    waist = waist  * 4.15;
    
    first = weight - waist;
    fat = pounds - first;
    fatP = (fat * 100) / pounds;
    
    printf("\nBody fat: %lf", fat);

    printf("\nBody fat percentage: %lf\n", fatP);
    
    exit(0);
   
}


if((gender != 'm') || (gender != 'f')){
    printf("Invalid gender code.\n");
}





return (0);
}
