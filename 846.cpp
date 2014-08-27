#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t, n, m;

int main( ) {

    scanf( "%d", &t );

    while ( t-- ) {
    
        scanf( "%d %d", &n, &m );
        
        if ( n == m ) {
            printf( "0\n" );
            continue;
        }
        
        int diff = ( m-n );
        
        int step = 2;
        
        while ( diff > 0 ) {
            diff -= (step/2);
            ++step;
        }
        
        printf( "%d\n", step-2 );
        
    }
    
    return 0;

}