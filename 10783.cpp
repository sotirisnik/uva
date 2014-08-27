#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 1000

using namespace std;

int t, n, a, b, sum;

int main( ) {

    scanf( "%d", &t );

    for ( int T = 0; T < t; ++T ) {
    
        scanf( "%d %d", &a, &b );
        
        sum = 0;
        
        if ( !( a & 1 ) ) {
            ++a;
        }
        
        if ( !( b & 1 ) ) {
            --b;
        }
        
        for ( int i = a; i <= b; i += 2 )
            sum += i;
        
        printf( "Case %d: %d\n", T+1, sum  );
        
    }
    
    return 0;

}