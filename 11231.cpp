#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int n, m, color;

int main( ) {

    while ( true ) {
    
        scanf( "%d %d %d", &n, &m, &color );
        
        if ( ( n | m | color ) == 0 ) {
            break;
        }
        
        if ( n >= 8 &&  m >= 8 ) {
            int ans = ( n - 7 ) * ( m - 7 ) / 2 + ( (color == 1 && !( n & 1 ) && !( m & 1 ) ) ? 1 : 0 );
            printf( "%d\n", ans );
        }else {
            printf( "0\n" );
        }
        
    }
    
    return 0;

}