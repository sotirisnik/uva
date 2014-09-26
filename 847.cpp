#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

int n;
map <int ,bool> memo;

bool best( int p ) {

    if ( p >= n ) {
        memo[ p ] = false;
        return ( false );
    }
    
    if ( memo.find( p ) != memo.end() ) {
        return ( memo[ p ] );
    }
    
    bool Best = false;
    
    for ( int i = 2; i <= 9; ++i ) {
        if ( !best( p * i ) ) {
            return ( memo[ p ] = true );
        }
    }
    
    return ( memo[ p ] = Best );

}

int main( ) {
    
    while ( scanf( "%d", &n ) != EOF ) {
        memo.clear();
        if ( best( 1 ) ) {
            printf( "Stan wins.\n" );
        }else {
            printf( "Ollie wins.\n" );
        }
    }
    
    return 0;

}