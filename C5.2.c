/* 
   @file    <5.2.c>
   @author  <Aika Washington>
   @date    <11/07/18>
*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char candidate[5][50];
    
    int vote[5];
    
    int totalVote;
    
    double voteper[5];
    
    int winner;
    int i;
    int j;
    
    
    
    printf("Enter candidate's name and the votes received by the candidate.\n");
    
    scanf("%s %d", candidate[0], &vote[0] );
    scanf("%s %d", candidate[1], &vote[1] );
    scanf("%s %d", candidate[2], &vote[2] );
    scanf("%s %d", candidate[3], &vote[3] );
    scanf("%s %d", candidate[4], &vote[4] );
    
    
    
    totalVote = vote[0] +  vote[1] + vote[2] + vote[3] + vote[4];
    
    voteper[0] = (vote[0]/(double)totalVote)*100;
    voteper[1] = (vote[1]/(double)totalVote)*100;
    voteper[2] = (vote[2]/(double)totalVote)*100;
    voteper[3] = (vote[3]/(double)totalVote)*100;
    voteper[4] = (vote[4]/(double)totalVote)*100;
    
    printf("%-10s\tVotes Received\t%% of Total Votes", "Candidate");
    printf("\n---------\t--------------\t----------------");
    printf("\n%9s", candidate[0]);
    printf("\t%7d", vote[0]);
    printf("\t%20.2lf",voteper[0] );
    
    printf("\n%9s", candidate[1]);
    printf("\t%7d", vote[1]);
    printf("\t%20.2lf",voteper[1] );
    
    printf("\n%9s", candidate[2]);
    printf("\t%7d", vote[2]);
    printf("\t%20.2lf",voteper[2] );
    
    printf("\n%9s", candidate[3]);
    printf("\t%7d", vote[3]);
    printf("\t%20.2lf",voteper[3] );
    
    printf("\n%9s", candidate[4]);
    printf("\t%7d", vote[4]);
    printf("\t%20.2lf",voteper[4] );
    
    printf("\n\nTotal Votes: %d", totalVote);
    winner = vote[0];
    printf("\nThe Winner of the Election is: ");
    for(i=1; i<=4; i++){
        if(vote[i] > winner){
            winner = vote[i];
            j = i;
        }
    }
 
    if(i == 5){
        printf("%s", candidate[j] );
    }
    
    printf("\n");
    
    return(0);
}