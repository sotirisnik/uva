#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>
#include <algorithm>

#define MAXN 1000000

using namespace std;

int counter;
bool dp[MAXN+1];

int d( int n ) {

    int ret = n;
    
    while ( n > 0 ) {
        ret += n % 10;
        n /= 10;
    }
    
    return ( ret );

}

int main( ) {

    for ( int i = 1; i <= MAXN; ++i ) {

        int tmp = d(i);
        
        if ( i <= MAXN ) {
            dp[ tmp ] = true;
        }
        
    }
    
    for ( int i = 1; i <= MAXN; ++i ) {
        if ( !dp[i] ) {
            printf( "%d\n", i );
        }
    }
    
    return 0;

}