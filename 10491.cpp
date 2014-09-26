#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int ncows, ncars, nshow;

int main( ) {
    
    while( scanf( "%d %d %d", &ncows, &ncars, &nshow ) != EOF ) {
    
        double prob = prob = ( (double)ncars / (double(ncows + ncars) ) ) * ( (double)(ncars-1) / (double(ncows + ncars - nshow - 1) ) );
        prob += ( (double)ncows / (double(ncows + ncars) ) ) * ( (double)ncars / (double(ncows + ncars - nshow - 1) ) );
        
        printf( "%.5lf\n", (double)( prob) );
        
    }
    
    return 0;

}