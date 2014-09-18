#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 39

using namespace std;

int t, n;
int fibo[MAXN+1];

void solve( int n ) {

    bool fl = false;

    for ( int i = MAXN; i > 1; --i ) {
        if ( n >= fibo[i] ) {
            n -= fibo[i];
            fl = true;
            putchar( '1' );
        }else {
            if ( fl ) {
                putchar( '0' );
            }
        }
    }
    
}

int main( ) {

    fibo[1] = 1;

    for ( int i = 2; i <= MAXN; ++i ) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    
    scanf( "%d", &t );
    
    while ( t-- ) {
    
        scanf( "%d", &n );
        
        printf( "%d = ", n );
        
        solve( n );
        
        printf( " (fib)\n" );
        
    }
    
    return 0;

}