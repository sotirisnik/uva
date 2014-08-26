#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

long long from, to, tmp, idx, length;

map <long long,long long> m;

long long next_number( long long n ) {

    if ( n & 1 ) {
        return ( 3*n + 1 );
    }
    
    return ( n / 2 );

}

long long f( long long n ) {

    if ( n == 0 ) {
        return 0;
    }

    if ( n == 1 ) {
        return 1;
    }

    if ( m.find( n ) != m.end() ) {
        return ( m[ n ] );
    }
    
    m[ n ] = 1 + f( next_number( n ) );
    
    return ( m[n] );

}

int main( ) {

    while ( true ) {
    
        scanf( "%lld %lld", &from, &to );

        if ( from == 0 && to == 0 ) {
            break;
        }
    
        if ( from > to ) {
            tmp = from;
            from = to;
            to = tmp;
        }
    
        idx = from;
        length = f( next_number( from ) );
        
        for ( long long i = from+1; i <= to; ++i ) {
            tmp = f( next_number( i ) );
            if ( tmp > length ) {
                length = tmp;
                idx = i;
            }
        }
    
        printf( "Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", from, to, idx, length );
        
    }

    return 0;

}