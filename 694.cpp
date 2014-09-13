#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

int T, A, L;

map <long long,long long> memo;

long long f( long long n ) {

    if ( n == 1 ) {
        return 1;
    }

    if ( memo.find( n ) != memo.end() ) {
        return ( memo[n] );
    }
    
    if ( n & 1 ) {
    
        if ( 3*n + 1 > L ) {
            return ( memo[n] = 1 );
        }
    
        return ( memo[ n ] = 1 + f( 3*n + 1 ) );
    }
    
    return ( memo[n] = 1 + f( n / 2 ) );

}

int main( ) {
   
    for ( T = 0; ; ++T ) {
    
        scanf( "%d %d", &A, &L );
        
        if ( A < 0 && L < 0 ) {
            break;
        }
        
        memo.clear();
    
        printf( "Case %d: A = %d, limit = %d, number of terms = %lld\n", T+1, A, L, f(A) );
        
    }
    
    return 0;

}