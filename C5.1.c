/* 
   @file    <C5.1.c>
   @author  <Aika Washington>
   @date    11/07/18>
*/

#include <stdio.h>
//#include <math.h>

int main()
{
    int i;
    int theArray[40];
    
    for(int i =0; i <= 9; i++){
        theArray[i] = i*i;
    }
    
    for(i = 10; i <= 19; i++){
        theArray[i] = 3*i;
    }

    for(i = 20; i <= 29; i++){
        theArray[i] = theArray[i-10] * theArray[i-20];
    }
    
    for(i = 30; i <= 39; i++){
        theArray[i] = theArray[i-10] * 10;
    }
    
    
    for(int j = 0; j < 40; j++){
        if(j == 9 || j == 19 || j == 29){
            printf(" %5d\n", theArray[j]);
        }
        else
            printf(" %5d", theArray[j]);
    }
return(0);

}