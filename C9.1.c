/* 
   @file    <C9.7.c>
   @author  <aika>
   @date    <>
*/

#include <stdio.h>
#include <string.h>


typedef struct emp_struct{
	char name[20];
	char id[11];
	double grossPay;
	double taxDeduc;
	double netPay;
} emp;


void writeEmpFile(FILE *fp2, emp employ);
void readEmpFile(FILE *fp3);
int main(){
    FILE *fp;
    fp == NULL;
    fp = fopen("empstat.txt", "w");
    fprintf(fp, "\t\t%5s\t%7s\t%8s\t%8s\t%8s\n", "NAME","IDNUM", "GROSS","TAXES","NET");
    fclose(fp);
    emp employ;
    FILE *fp2 = NULL;
    writeEmpFile(fp2, employ);  
    printf("\n");
    readEmpFile(fp2); 
    FILE *fp3;
}

void writeEmpFile(FILE *fp2, emp employ){
    
    while(1)
    {
		printf("Enter Last Name (no spaces): ");
		fflush(stdin);
		scanf("%s", employ.name);
		if((strcmp(employ.name, "EXIT"))==0){
				break;
			}
		printf("Enter ID Number: ");
		scanf(" %s", employ.id);
		printf("Enter Gross Pay: ");
		scanf(" %lf", &employ.grossPay);
		printf("Enter Taxes: ");
		scanf(" %lf", &employ.taxDeduc);
		employ.netPay = employ.grossPay - employ.taxDeduc;
		
		
		fp2 = fopen("empstat.txt", "a");
		if(fp2 != NULL){
		    fprintf(fp2,"\t\t%5s\t%7s\t%08.2lf\t%08.2lf\t%08.2lf\n",employ.name, employ.id, employ.grossPay, employ.taxDeduc, employ.netPay);
		}
		fclose(fp2);
    }
    
}

/*
fprintf(fp, "%s\t%s\t%s\t%s\t%s", "NAME","IDNUM", "GROSS","TAXES","NET");

fprintf(fp, "%5s\t%7s\t%8s\t%8s\t%8s", "NAME","IDNUM", "GROSS","TAXES","NET");

fprintf(fp2,"%5s\t%7.2d\t%8.2lf\t%8.2lf\t%8.2lf",employ.name, employ.id, employ.grossPay, employ.taxDeduc, employ.netPay);

\n%s\t%.2d\t%.2lf\t%.2lf\t%.2lf
*/


void readEmpFile(FILE *fp3){
    fp3 = fopen("empstat.txt","r");
    
    char str[100];
    while(fgets(str, 100, fp3) != NULL ){
        puts(str);
    }
}
