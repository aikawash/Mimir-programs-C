/* 
   @file    <C7.1.c>
   @author  <Aika Washington>
   @date    <11/12/2018>
*/

#include <stdio.h>

typedef struct computerType_struct {
	char manufac[50];
	char modelType[100];
	char processor[10];
	int ram;
	int hardDrive;
	int year;
	double price;
} computerType;

int main(){
    computerType myComp;
    
    printf("Enter the name of the manufacturer: ");
    scanf(" %[^\n]%*c", myComp.manufac);

    printf("\nEnter the model of the computer: ");
    scanf(" %[^\n]%*c", myComp.modelType);
        
    printf("\nEnter processor type: ");
    scanf (" %[^\n]%*c", myComp.processor);
    
    printf("\nEnter the size of RAM (in GB): ");
    scanf(" %d", &myComp.ram);
    
    printf("\nEnter the size of hard drive (in GB): ");
    scanf(" %d", &myComp.hardDrive);
    
    printf("\nEnter the year the computer was built: ");
    scanf(" %d", &myComp.year);
    
    printf("\nEnter the price: ");
    scanf(" %lf", &myComp.price);
    
    printf("\n--------------------\n");
    
    printf("Manufacturer: %s", myComp.manufac);
    printf("\nModel: %s", myComp.modelType);
    printf("\nProcessor: %s ",myComp.processor);
    printf("\nRam: %d",myComp.ram);
    printf("\nHard Drive Size: %d",myComp.hardDrive);
    printf("\nYear Built: %d",myComp.year);
    printf("\nPrice: $%.2lf\n",myComp.price);
    
    
    
    return(0);
}