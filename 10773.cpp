#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t, d, u, v;

int main( ) {

    scanf( "%d", &t );

    for ( int T = 0; T < t; ++T ) {
    
        scanf( "%d %d %d", &d, &v, &u );
    
        if ( v == 0 || u == 0 || u <= v ) {
            printf( "Case %d: can't determine\n", T+1 );
            continue;
        }
    
        double t1 = (double)d / (double)u;
        
        double t2 = (double)d / (double)( sqrt( u*u - v*v ) );
    
        double ret = t2 - t1;
        
        printf( "Case %d: %.3lf\n", T+1, ret );
    
    }

    return 0;

}