/* 
   @file    <PE6_TriangleTest.c>
   @author  <aika>
   @date    <12/03/18>
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    
    if( argc != 4){
	fprintf(stderr,"\nUsage: a.out side_a side_b side_c\n");
	return 1;
	    
    }
    
    int a;
    int b;
    int c;
    
    char equi[] = "Equilateral";
    char isco[] = "Isosceles";
    char scal[] = "Scalene";
    
    a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	
	/*
	printf("\n%d", a);
	printf("\n%d", b);
	printf("\n%d", c);
	*/
	
	if((a < 1) || (a > 200)){
		printf("Value of a is not in the range of permitted values.\n");
		return 1;
	}
	

	if((b < 1) || (b > 200)){
		printf("Value of b is not in the range of permitted values.\n");
		return 1;
	}
	
	if((c < 1) || (c > 200)){
		printf("Value of c is not in the range of permitted values.\n");
		return 1;
	}
	
	
	    
	
	if( (b+c) < a || ((a + b + c) == 6)){
		printf("Not a triangle\n");
		return 1;
	}
	
	if( (a+c) < b){
		printf("Not a triangle\n");
		return 1;
	}
	
	if( (a+b) < c){
		printf("Not a triangle\n");
		return 1;
	}
	
	if( (a == b) && ( b == c) && (a == c)){
	    printf("%s\n", equi);
	    return (0);
	}
	
	if((a == b) || ( b == c) || (a == c)){
	    printf("%s\n", isco);
	    return (0);
	}
    
    else{
       printf("%s\n", scal);
	   return (0);
    }
    
    return (0);
}
