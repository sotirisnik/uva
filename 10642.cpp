#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t;
long long X1, Y1, X2, Y2;

long long range_sum( long long n ) {
    return ( n * ( n + 1 ) / 2 );
}

int main( ) {
    
    scanf( "%d", &t );
    
    for ( int T = 0; T < t; ++T ) {
    
        scanf( "%lld %lld %lld %lld", &X1, &Y1, &X2, &Y2 );
        
        long long diag1 = X1 + Y1;
        long long diag2 = X2 + Y2;
        
        long long distance = 0;
        
        if ( diag1 == diag2 ) {
            distance = abs( Y1 - Y2 );
        }else {
            
            if ( Y1 > Y2 ) {
                distance = range_sum( diag1 ) + ( diag1+1) - Y1;
                distance -= range_sum( diag2 ) + (diag2+1) - Y2;
            }else {
                distance = range_sum( diag2 ) + ( diag2+1) - Y2;
                distance -= range_sum( diag1 ) + (diag1+1) - Y1;
            }
            
        }
        
        printf( "Case %d: %lld\n", T+1, distance );
        
    }
    
    return 0;

}