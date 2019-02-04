

#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool isVowel(char aChar);

int countUC(char thatString[]);

int countLC(char aString[]);

int countOthers(char aString[]);

int vowel(char thatString[]);

int main(){


char sentence[100];
printf("Enter a sentence: ");
fgets(sentence, 100, stdin);

int length = strlen(sentence)-1;

printf("There are %d total characters.", length);
printf("\nThere are %d vowel.", vowel(sentence) );
printf("\nThere are %d UPPERCASE letters.",countUC(sentence) );
printf("\nThere are %d lowercase letters.", countLC(sentence));
printf("\nThere are %d other characters.", countOthers(sentence));



return(0);
}

bool isVowel(char aChar){
    // int true;
    // true = strcmp(aChar, "a")
    
    if (aChar == 'a' || aChar == 'e' || aChar == 'i' || aChar == 'o' || aChar == 'u'){
        return true;
    }
    if (aChar == 'A' || aChar == 'E' || aChar == 'I' || aChar == 'O' || aChar == 'U'){
        return true;
    }
    else{
        return false;
    }
}

int vowel(char thatString[]){
    int count;
    
    for(int i=0; i < strlen(thatString); i++){
         if(thatString[i] == 'a' || thatString[i] == 'e' || thatString[i] == 'i' || thatString[i] == 'o' || thatString[i] == 'u'){
             count++;
         }
    }
   return count;
    
}

int countUC(char thatString[]){
    int counter;
    int count;

    
    for(counter=0; thatString[counter] <= strlen(thatString); counter++){
        if(thatString[counter]>='A' && thatString[counter]<='Z'){
            count++;
        }
    }
    return count;
    
}

int countLC(char aString[]){
    int counter;
    int count;
    
    for(counter=0; aString[counter] <= strlen(aString); counter++){
        if(aString[counter]>='a' && aString[counter]<='z'){
            count++;
        }
    }
    return count;
}

int countOthers(char aString[]){
    int counter;
    int count;
    
    for(counter=0; aString[counter] <= strlen(aString); counter++){
        if( !((aString[counter]>='A' && aString[counter]<='Z')) && ( !(aString[counter]>='a' && aString[counter]<='z') ))
            count++;
      }
    return count;
}