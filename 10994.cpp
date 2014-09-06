#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

long long p, q;

long long range_sum( long long n ) {
    
    return ( n * ( n + 1 ) / 2 );
    
}

long long S( long long n ) {

    if ( n <= 0 ) {
        return 0;
    }

    if ( n < 10 ) {
        return ( range_sum( n ) );
    }
    
    return ( S( n / 10 ) + ( n / 10 ) * 45  + range_sum( n%10 ) );
    
}

int main( ) {
    
    while ( true ) {
    
        scanf( "%lld %lld", &p, &q );

        if ( p < 0 && q < 0 ) {
            break;
        }
        
        printf( "%lld\n", S(q) - S(p-1) );
        
    }
    
    return 0;

}