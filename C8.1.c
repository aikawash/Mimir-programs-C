/* 
   @file    <C8.1.c>
   @author  <aika>
   @date    <11/14/2018>
*/

#include <stdio.h>
#include <stdlib.h>

//[1]
void pointerTest1()
{
    // ok!
	float *c;
	float x = 10;

	c = &x;
    
    //*c = x;
	printf("\n%lf\n", *c);
	
	
	/*
	
	char *c;
	float x = 10;

	c = &x;

	printf("%d", *c);
	
	*/
}


//[2]
void pointerTest2()
{
    
    float x = 10.250000;
	float* f;

	f = &x;

	printf("\n%.6g\n", *f);
    
    /*
	float x = 10.25;
	float* f;

	f = x;

	printf("%g", *f);
	*/
}


//[3]
void pointerTest3()
{
    /*
    char sa[] = "How are you?";
	char t;
	char* f ;

	f = &sa;

	printf("\n%s\n", f);
	*/
	
    /*
	char sa[] = "How are you?";
	char t;
	char* f;

	f = &sa;

	printf("%s", f);
	*/
}


//[4]
void pointerTest4()
{
    // ok!
	int x;
	int* t;

    x = 11;
    x++;
    
    t = &x;
    //*t++;
	

	printf("\n%d\n", *t);   
    /*
	int* t;
	int x;

	t = &x;
	x = 11;
	*t++;

	printf("%d", *t);
	*/
}


//[5]
void pointerTest5()
{
    // ok!
	int t[] = { 1,2,3,4,5 };
	int* p;
	int* q;
	int* r;

	p = &t[0];
	q = &p[1];
	r = &p[2];

	printf("\n%d %d %d", *p, *q, *r);
	
	/*
	int t[] = { 1,2,3,4,5 };
	int* p;
	int* q;
	int* r;

	p = t;
	q = p[1];
	r = p[2];

	printf("%d %d %d", *p, *q, *r);
	*/
}


//[6]
// In the assignment statement *pz is required.
void pointerTest6()
{
    // ok!
	int x = 5;
	int y = 8;
	int z;
	int* px;
	int* py;
	int* pz;

	px = &x;
	py = &y;
	
	z = *px + *py;
	//z = &pz;
	pz = &z;

	printf("\n%d\n", *pz);
	
	/*
	int x = 5;
	int y = 8;
	int z;
	int* px;
	int* py;
	int* pz;

	px = &x;
	py = &y;
	pz = &z;
	pz = *px + *py;

	printf("%d", z);
	*/
}



//[7]
void pointerTest7()
{/*
    double x = 5;
	double *px = &x;
	double* py;

	printf("\n%lf\n", px);
	*/
	
    /*
	double x = 5;
	double *px = &x;
	double* py;

	printf("%d", px);
	*/
}


//[8]
void pointerTest8()
{
    // ok!
	int x;
	int* px;
    
    x = 5;
	px = &x;

	printf("\n%d\n", *px);
	
	/*
	int x;
	int* px;

	*px = 5;
	px = &x;

	printf("%d", x);
	*/
}


//[9]
void pointerTest9()
{
    // ok!
	int a;
	int *p;
	int* q;

	a = 2;
	p = &a;
	q = p;

	printf("\n%d %d\n", *p, *q);
	
	/*
	int a;
	int *p;
	int* q;

	a = 2;
	p = &a;
	q = p;

	printf("%d %d", p, q);
	*/
}


//[10]
void pointerTest10()
{
    // ok!
	int y[] = { 1,2,3 };
	int* p;

	p = &y[1];

	printf("\n%d %d\n", (1 + *y), *p);
	
	/*
	int y[] = { 1,2,3 };
	int* p;

	p = &y[1];

	printf("%d %d", (1 + y), *p);
	*/
}



//[11]
void pointerTest11()
{
    
    //ok!
	unsigned int y[] = { 65555,65550,65543 };
    
    int *yptr;
    yptr = &y[1];

	printf("\n%u\n", *yptr);
	
	/*
	unsigned int y[] = { 65555,65550,65543 };

	printf("%u", y[2]);
	*/
}


//[12]
void pointerTest12()
{
    // ok!
    int p[] = { 1,2,3,4 };
	int* c;

	c = &p[0];

	printf("\n%d\n", *c);
    
    /*
	int p[] = { 1,2,3,4 };
	char* c;

	c = p;

	printf("%d", *c);
	*/
}




int main(int argc, char* argv[])
{
	int i;

	//i = atoi(argv[1]);
	printf("Which Test: ");
	scanf("%d", &i);

	switch (i) {
	case 1:
		printf("PointerTest%d", i);
		pointerTest1();
		break;
	case 2:
		printf("PointerTest%d", i);
		pointerTest2();
		break;
	case 3:
		printf("PointerTest%d", i);
		pointerTest3();
		break;
	case 4:
		printf("PointerTest%d", i);
		pointerTest4();
		break;
	case 5:
		printf("PointerTest%d", i);
		pointerTest5();
		break;
	case 6:
		printf("PointerTest%d", i);
		pointerTest6();
		break;
	case 7:
		printf("PointerTest%d", i);
		pointerTest7();
		break;
	case 8:
		printf("PointerTest%d", i);
		pointerTest8();
		break;
	case 9:
		printf("PointerTest%d", i);
		pointerTest9();
		break;
	case 10:
		printf("PointerTest%d", i);
		pointerTest10();
		break;
	case 11:
		printf("PointerTest%d", i);
		pointerTest11();
		break;
	case 12:
		printf("PointerTest%d", i);
		pointerTest12();
		break;
	default:
		break;

	}

	return 0;
}
