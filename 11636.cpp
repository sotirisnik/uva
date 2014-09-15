#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t, n;

int main( ) {

    while ( true ) {
    
        scanf( "%d", &n );
        
        if ( n < 0 ) {
            break;
        }
        
        printf( "Case %d: %.0lf\n", ++t, ceil( log2(n) ) );
        
    }
    
    return 0;

}