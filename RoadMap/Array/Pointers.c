/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   

    int a[]= {10, 20, 30, 40, 50}; // ARRAY
    int *p[] = {a, a+1, a+2, a+3, a+4, a+5}; // ARRAY OF POINTER 
    int **pp = p; // POINTER TO POINTER p; 
    
    int r = 10; 
    int *q = &r; 
    int **rq = &q; 
    
    printf("-----------------------------------------"); 
    printf("\n");
    printf("Value r %d", r);
    printf("\n");
    printf("Address r %u", &r);
    printf("\n");
    printf("Value q %d", q);
    printf("\n");
    printf("Address q %u", &q);
    printf("\n");
    printf("Value rq %d", rq);
    printf("\n");
    printf("Address rq %u", &rq);
    printf("\n");
    printf("Pointer rq %d", *rq);
    printf("\n");
    printf("Value of  Pointer to Pointer of rq %d", **rq);
    printf("\n");
    
    printf("\n ----------------------Summary----------------");
    printf("\n");
    printf("Values of r, *q, **rq are value of r = %u", *q);
    printf("\n");
    printf("Value of &r, q, *rq are address of r = %u", &r);
    printf("\n");
    printf("Value of &q, rq are address of q = %u", rq);
    printf("\n");
    
    
    
    
   
    return 0;
}
