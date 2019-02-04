/* 
   @file    <PE_soccer.c>
   @author  <Aika Washington>
   @date    <10/07/2018>
   @version <1.0>
   
   @brief <OPTIONAL> <SHORT DESCRIPTION>
 
   @section DESCRIPTION
   
   LONGER DESCRIPTION IF NEEDED
   ....
   ...
*/
#include <stdio.h> 

int findPlayer(int whichPlayer, 
               const int jerseyNumbers[], 
			   int maxJersyCount);

int newLocation(const int jerseyNumber[], int temporaryJersey, int maxNumJerseys);

int main(void) {
	char menuOp = 'x';
	
	char name[10][100];
	int jerseyNum[10];
	double rating[10];
	
	int i;
	int tempJersey;
	int jerseyCount;
	int location;
	
	double starRating;
	
    for(i=0; i<10; i++){
		jerseyNum[i] = 0;
	}

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

		printf("\nChoose an option: ") ;
		scanf(" %c", &menuOp);

		switch (menuOp) {
		// adding a new player
		case 'a':
		    jerseyCount = 0;
		    for(i=0; i< 10; i++){
		        if(jerseyNum[i] != 0){
		            jerseyCount++;
		        }
		    }
		    
		    if( jerseyCount == 10){
		        printf("Maximum number of players!");
		        break;
		    }
		    
			printf("\nEnter player jersey number: ");
			scanf("%d", &tempJersey);
			     
			location = findPlayer(jerseyNum, tempJersey, 10);
			if(location == -1){
			    //printf("\nIllegal jersey number!");
			    printf("\nJersey # already in use.");
			     break; 
			    
			    
			          
			 }
			 
			/*if(location > 0){
			    printf("\nJersey # already in use.");
			    break; 
			}*/
			      
			      
			     
			else{
			     int loc = newLocation(jerseyNum, tempJersey, 10);
			        jerseyNum[loc]= tempJersey;
			        printf("Enter player first or nick name: ");
			        scanf("%s", name[loc]);
			        printf("Enter player rating: ");
			        scanf(" %lf", &rating[loc]);
			        break;  
			      
			    }
			
		// updating player information	
		// call find player
		case 'u':
			printf("\nEnter a jersey number: ");
			scanf("%d", &tempJersey);
			int loc = findPlayer(tempJersey, jerseyNum, 10);
			    if(loc == -1){
			        printf("Player not found!");
			    }
			    else{
			        printf("\nEnter player first or nick name:");
			        scanf("%s", name[loc]);
			        printf("Enter player rating: ");
			        scanf("%lf", &rating[loc]);
			        
			    } 
			    break;
		// removing a player	
		case 'r':	
		// call find player
			printf("Enter a jersey number: ");
			scanf("%d", &tempJersey);
			loc = findPlayer(tempJersey, jerseyNum, 10);
			if(loc == -1){
			    printf("Jersey not in use. No such player.");
			         break;
			}
			else{
			    jerseyNum[loc] = 0;
			    break;
			}
		// displaying player information 
		// use find player
		case 'd':
			printf("Enter a jersey number: ");
			scanf("%d", &tempJersey);
			loc = findPlayer(tempJersey, jerseyNum, 10);
		         if(loc != -1){
			        printf("Name: %s", name[loc]);
			        printf("\nJersey #: %d", jerseyNum[loc]);
			        printf("\nRating: %lf", rating[loc]);
			        break;
			     } 
			     else{
			         printf("Jersey not in use. No such player.");
			         break;
			     }
			
		// print the full roster	
		case 'p':
			for(i=0; i<10; i++){
			    if(jerseyNum[i] != 0){
			        printf("\n%s", name[i]);
			        printf("\n%d", jerseyNum[i]);
			        printf("\n%lf", rating[i]);
			    }
			}
		break;
		// prints all the players with rating > STAR rating
		case 's':
		    printf("Enter minimum 'STAR' rating: ");
		    scanf("%lf", &starRating);
			for(i=0; i<10; i++){
			    if(rating[i] > starRating){
			        printf("\n%s", name[i]);
			        printf("\n%d", jerseyNum[i]);
			        printf("\n%lf", rating[i]);
			    }
			}
			break;
		case 'q':
			// your code goes here!		 
		default:
			;
		}

    }
    return 0;
}

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
int findPlayer(int whichPlayer, 
               const int jerseyNumbers[], 
			   int maxJersyCount)
{
    if(whichPlayer < 100 && whichPlayer > 0){
	    for(int i=0; i < maxJersyCount; i++){
	        if(whichPlayer == jerseyNumbers[i]){
	            return i;
	      }
	        else{
	            return -1;
	         }
    	}
    }
}

int newLocation(const int jerseyNumber[], int temporaryJersey, int maxNumJerseys){
    for(int i=0; i < maxNumJerseys; i++){
        if (jerseyNumber[i] == 0)
            return i;
    }
    
}

