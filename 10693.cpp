#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int carLength, f;
double v;

int main( ) {

    while ( true ) {
    
        scanf( "%d %d", &carLength, &f );
    
        if ( carLength == 0 && f == 0 ) {
            break;
        }
       
        v =  sqrt( carLength * 2 * f );
        
        printf( "%.8lf %.8lf\n", v, (double)(v*1800) / (double)( carLength ) );
    
    }
    
    return 0;

}