#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int n, r;

int solve( int roads, int num_names ) {

    int k = 1;
    
    int sum = 0;
    
    for ( k = 1; k <= 27; ++k ) {
        sum += num_names;
        if ( sum >= roads ) {
            break;
        }
    }
    
    if ( k != 28 ) {
        return ( k-1 );
    }
    
    return ( -1 );
    
}

int main( ) {

    for ( int T = 0; ; ++T ) {
    
        scanf( "%d %d", &r, &n );

        if ( r == 0 && n == 0 ) {
            break;
        }
        
        int ans = solve( r, n );
        
        printf( "Case %d: ", T+1 );
        
        if ( ans == -1 ) {
            printf( "impossible\n" );
        }else {
            printf( "%d\n", ans );
        }
        
    }

    return 0;

}