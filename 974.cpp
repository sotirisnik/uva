#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 40000

using namespace std;

int t, from, to;
bool is_kaprekar[MAXN+1];

bool test( int i ) {

    int a, b;
    
    int square = i*i;
    
    int len = log10( square ) + 1;
    
    int what = 10;
    
    while ( len-- ) {
        a = square % what;
        b = square / what;
        
        if ( a + b == i && a > 0 && b > 0 ) {
            return ( true );
        }
        
        what *= 10;
        
    }
    
    return ( false );

}

int main( ) {
    
    for ( int i = 1; i <= MAXN; ++i ) {
        if ( test( i ) ) {
            is_kaprekar[i] = true;
        }
    }
    
    scanf( "%d", &t );

    for ( int T = 0; T < t; ++T ) {
    
        scanf( "%d %d", &from, &to );

        printf( "case #%d\n", T+1 );
        
        bool fl = false;
        
        for ( int i = from; i <= to; ++i ) {
            if ( is_kaprekar[i] ) {            
                printf( "%d\n", i );
                fl = true;
            }
        }
        
        if ( !fl ) {
            printf( "no kaprekar numbers\n" );
        }
        
        if ( T+1 < t ) {
            putchar( '\n' );
        }
        
    }
    
    return 0;

}