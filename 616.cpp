#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

void solve( int n ) {

    int people = 0;
    
    printf( "%d coconuts, ", n );
        
    int sqrt_n = sqrt(n)+1;
        
    for ( int i = sqrt_n; i >= 2; --i ) {
        
        int tmp = n;
        int cnt = 0;
        
        while ( cnt < i && (tmp-1) % i == 0 ) {
            tmp -= ( tmp / i + 1 );
            ++cnt;
        }
        
        if ( cnt == i && tmp % i == 0 ) {
            people = i;
            break;
        }
        
    }
    
    if ( people == 0 ) {
        printf( "no solution\n" );
    }else {
        printf( "%d people and 1 monkey\n", people );
    }
    
}

int n;

int main( ) {

    while ( true ) {
    
        scanf( "%d", &n );
        
        if ( n < 0 ) {
            break;
        }
        
        solve(n);
        
    }
    
    return 0;

}