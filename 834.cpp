#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

int n, m;

int main( ) {

    while ( scanf( "%d %d", &n, &m ) != EOF ) {

        printf( "[%d;", n / m );

        n %= m;
        swap( n, m );
        
        while ( n != 1 ) {
            printf( "%d", n / m );
            n %= m;
            swap( n, m );
            
            if ( n != 1 ) {
                putchar( ',' );
            }
            
        }
        
        putchar( ']' );
        
        putchar( '\n' );
        
    }
    
    return 0;

}