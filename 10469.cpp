#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int solve( int n, int m ) {

    int ret = 0;
    
    for ( int i = 0; i < 32; ++i ) {
        if ( ( n & (1<<i)) ) {
            if ( !( m & (1<<i) ) ) {
                ret |= (1<<i);
            }
        }else {
            if ( ( m & (1<<i) ) ) {
                ret |= (1<<i);
            }
        }
    
    }
    
    return ( ret );

}

int n, m;

int main( ) {

    while ( scanf( "%d %d", &n, &m ) != EOF  ) {
        printf( "%d\n", solve( n, m ) );
    }

    return 0;

}