#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t, n, x, ans;

int main( ) {

    scanf( "%d", &t );

    for ( int T = 0; T < t; ++T ) {

        scanf( "%d", &n );
        
        int i = 0;
        
        for ( i = 0; i < (n>>1); ++i ) {
            scanf( "%d", &x );
        }
        
        scanf( "%d", &ans );
        
        for ( ++i; i < n; ++i ) {
            scanf( "%d", &x );
        }
        
        printf( "Case %d: %d\n", T+1, ans );
        
    }

    return 0;

}