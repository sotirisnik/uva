#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <list>
#include <algorithm>

#define MAXN 1000000000

using namespace std;

double Equal( double a, double b ) {
    return ( fabs( a - b ) < 1e-15 );
}

int t, n;
list <int> Squares;

int main( ) {

    for ( int i = 1; i*i <= MAXN; ++i ) {
        Squares.push_back( i*i );
    }
    
    scanf( "%d", &t );
    
    for ( int T = 0; T < t; ++T ) {

        scanf( "%d", &n );

        printf( "Case %d:", T+1 );
        
        for ( list<int>::reverse_iterator pos = Squares.rbegin(); pos != Squares.rend(); ++pos ) {
            int x = n - *pos;
            double logos = (double)x / (double)sqrt( n-x );
            
            if ( logos > 0 && Equal( logos, ceil( logos ) ) ) {
                printf( " %d", x );
            }            
        }
        
        putchar( '\n' );
        
    }
    
    return 0;

}