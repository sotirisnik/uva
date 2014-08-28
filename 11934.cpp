#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int a, b, c, d, L, ans;

int f( int x ) {
    return ( a*x*x + b*x + c );
}

int main( ) {

    while ( true ) {
    
        scanf( "%d %d %d %d %d", &a, &b, &c, &d, &L );
      
        if ( ( a | b | c | d | L ) == 0 ) {
            break;
        }
      
        ans = 0;
      
        for ( int i = 0; i <= L; ++i ) {
            if ( f( i ) % d == 0 ) {
                ++ans;
            }
        }
        
        printf( "%d\n", ans );
        
    }
    
    return 0;

}