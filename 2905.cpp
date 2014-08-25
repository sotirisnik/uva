#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int t, n, k, p, c;

int main( ) {

    scanf( "%d", &t );
    
    for ( int T = 1; T <= t; ++T ) {
    
        scanf( "%d %d %d", &n, &k, &p );
        
        c = k+p;
        
        while ( c > n ) {
            c -= n;
        }
        
        printf( "Case %d: %d\n", T, c );
    
    }

    return 0;

}