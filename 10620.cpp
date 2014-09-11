#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int S, x, y, dx, dy;

bool is_white( int S, int x, int y ) {

    if ( x % S == 0 || y % S == 0 ) {
        return ( false );
    }

    x /= S;
    y /= S;

    return ( (x + y) & 1 );
    
}

int main( ) {

    while ( true ) {
    
        scanf( "%d %d %d %d %d", &S, &x, &y, &dx, &dy );
      
        if ( ( S | x | y | dx | dy ) == 0 ) {
            break;
        }
        
        int jumps = 0;
        
        while ( true ) {

            if ( is_white( S, x, y ) ) {
                break;
            }
            
            ++jumps;
            x += dx;
            y += dy;
            
            if ( jumps >= 10000 ) {
                break;
            }
            
        }
        
        if ( jumps == 10000 ) {
            printf( "The flea cannot escape from black squares.\n" );
        }else {
            printf( "After %d jumps the flea lands at (%d, %d).\n", jumps, x, y );
        }
        
    }
    
    return 0;

}