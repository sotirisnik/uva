#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t, n;

void solve( int n ) {

    if ( n == 0 ) {
        putchar( '0' );
        return;
    }

    int next = ceil( n / -2.0 );
    
    if ( next != 0 ) {
        solve( next );
    }
    
    printf( "%d", abs( n % (-2) ) );

}

int main( ) {

    scanf( "%d", &t );

    for ( int T = 0; T < t; ++T ) {
    
        scanf( "%d", &n );
    
        printf( "Case #%d: ", T+1 );
    
        solve( n );
 
        putchar( '\n' );
 
    }
    
    return 0;

}