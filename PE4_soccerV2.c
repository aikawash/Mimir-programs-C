/*
@file    <NAME OF FILE>
@author  <YOUR NAME>
@date    <DATE CREATED>
@version <OPTIONAL>

@brief <OPTIONAL> <SHORT DESCRIPTION>

@section DESCRIPTION

LONGER DESCRIPTION IF NEEDED
....
...
*/

/*
playerData myRoster[0];
myRoster[0].jersey =

loop over array and initialize array numbers to zero

start with convertin curretn implementation to structs
one arracy, declare struct 


*/
#include <stdio.h>
#include <stdbool.h>


//
typedef enum PlayerPosition {PP_GOALKEEPER, PP_FORWARD,PP_BACK,PP_MIDFIELDER} Position;

// enum PlayerPosition theirPosition;

typedef struct playerData_struct {
	int jerseyNum;
	char playerName[100];
	double playerRating;
	enum PlayerPosition theirPosition;
} playerData;

int newLocation(playerData Player[], int temporaryJersey, int maxNumJerseys);

int findPlayer(playerData Player[], int temporaryJersey);

bool jerseyValid(int playerJerseyNumber);

bool ratingValid(double playerRating);

void printPlayer(playerData* player);

int main(void) {
    
    playerData myPlayer[10];
    
    for(int i=0; i<=10; i++){
        myPlayer[i].jerseyNum = 0;
        
    }
    
    // you can use myPlayer[1].name = jimmy; like a variable

    char menuOp = 'x';
    int playeJerseyNumber;
    double playerRating;
    double starRating;
    
    int i;
	int tempJersey;
	int jerseyCount;
	int location;
	int check;

	while (menuOp != 'q') {
		// Menu
		printf("\nMENU\n");
		printf("a - Add a new player\n");
		printf("u - Update player information\n");
		printf("r - Remove a player from the roster\n");
		printf("d - Display player information\n");
		printf("p - Print the full roster\n");
		printf("s - Print \"Star\" players\n");
		printf("q - Quit\n");

		printf("\nChoose an option: ");
		scanf(" %c", &menuOp);

		switch (menuOp) {

		case 'a':

            jerseyCount = 0;
		    for(int i=0; i< 10; i++){
		        if(myPlayer[i].jerseyNum == 0){
		            jerseyCount++;
		        }
		    }
		    
		    if( jerseyCount < 1){
		        printf("Maximum number of players!");
		        break;
		    }
		    
		    printf("\nEnter player jersey number: ");
			scanf("%d", &tempJersey);
			     
			check = findPlayer(myPlayer, tempJersey);
			if(check != -1){
			    //printf("\nIllegal jersey number!");
			    printf("\nJersey # already in use.");
			    break; 
			          
			 }
			 
			else{
			        location = newLocation(myPlayer, tempJersey, 10);
			        tempJersey = myPlayer[location].jerseyNum;
			        printf("Enter player first or nick name: ");
			        scanf("%s", myPlayer[location].playerName);
			        printf("Enter player rating: ");
			        scanf(" %lf", &myPlayer[location].playerRating);
			        break;  
			      
			    }
		    
		case 'u':
		    printf("\nEnter a jersey number: ");
			scanf("%d", &tempJersey);
			int location = findPlayer(myPlayer, tempJersey);
			    if(location == -1){
			        printf("Player not found!");
			    }
			    else{
			        printf("Enter player first or nick name: ");
			        scanf("%s", myPlayer[location].playerName);
			        printf("Enter player rating: ");
			        scanf(" %lf", &myPlayer[location].playerRating);
			        
			    } 
			    break;

		case 'r':
            printf("Enter a jersey number: ");
			scanf("%d", &tempJersey);
			location = findPlayer(myPlayer, tempJersey);
			if(location == -1){
			    printf("Jersey not in use. No such player.");
			         break;
			}
			else{
			    myPlayer[location].jerseyNum = 0;
			    break;
			}
		case 'd':
		    printf("Enter a jersey number: ");
			scanf("%d", &tempJersey);
			location = findPlayer(myPlayer, tempJersey);
		         if(location != -1){
			        printPlayer(&myPlayer[location]);
			     } 
			     else{
			         printf("Jersey not in use. No such player.");
			     }
			 break;

		case 'p':
            for(i=0; i<10; i++){
			    if(myPlayer[i].jerseyNum != 0){
			       printPlayer(&myPlayer[i]);
			    }
			}
		case 's':
            printf("Enter minimum 'STAR' rating: ");
		    scanf("%lf", &starRating);
			for(i=0; i<10; i++){
			    if(myPlayer[i].jerseyNum > starRating){
			        printPlayer(&myPlayer[i]);
			    }
			}
		case 'q':

		default:
            ;
		}
	}

	return 0;
}

/*
	YOUR FUNCTION DEFINITIONS GO HERE!
/*

@file  <FUNCTION NAME>
@brief brief description of function


@param  <PARAMETER 1> brief description, type & purpose
@param  ... one line per parameter
@param  <PARAMETER N> brief description, type & purpose
@return brief description, type & purpose

@section PSEUDO_CODE
The pseudo code for your algorithm.
This section is only needed for non-trivial functions
*/


bool jerseyValid(int playerJerseyNumber){
    if(playerJerseyNumber < 1 || playerJerseyNumber > 99){
        return false;
    }
    else{
        return true;
    }
}

bool ratingValid(double playerRating){
    if(playerRating < 0 || playerRating > 100.0){
        return false;
    }
    else{
        return true;
    }
}

void printPlayer(playerData* thisPlayer){
    /* so this is supposed to print using this structure
        playerData player1;
        player1.jerseyNum = 6;
        printf("%d", player1.jerseyNum);
    
    */
    printf("%s\n",thisPlayer->playerName);
    printf("%d",thisPlayer->jerseyNum);
    printf("%f",thisPlayer->playerRating);
    
}

int findPlayer(playerData Player[], int temporaryJersey){
    if(temporaryJersey < 100 && temporaryJersey > 0){
	    for(int i=0; i < 10; i++){
	        if(Player[i].jerseyNum ==  temporaryJersey){
	            return i;
	        }
            else{
	            return -1;
	         }
        }
    }
}


int newLocation(playerData Player[], int temporaryJersey, int maxNumJerseys){
    for(int i=0; i < maxNumJerseys; i++){
        if (Player[i].jerseyNum == 0){
            return i;
        }
        else{
            return -1;
         }
    }
}

