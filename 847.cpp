#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

int n;
map < pair<int,bool> ,bool> memo;

bool best( int p, bool turn ) {

    if ( p >= n ) {
        memo[ make_pair(p,turn) ] = false;
        return ( false );
    }
    
    if ( memo.find( make_pair(p,turn) ) != memo.end() ) {
        return ( memo[ make_pair(p,turn) ] );
    }
    
    bool Best = false;
    
    for ( int i = 2; i <= 9; ++i ) {
        if ( !best( p * i, !turn ) ) {
            return ( memo[ make_pair(p,turn) ] = true );
        }
    }
    
    return ( memo[ make_pair(p,turn) ] = Best );

}

int main( ) {
    
    while ( scanf( "%d", &n ) != EOF ) {
        memo.clear();
        if ( best( 1, true ) ) {
            printf( "Stan wins.\n" );
        }else {
            printf( "Ollie wins.\n" );
        }
    }
    
    return 0;

}