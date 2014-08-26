#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t;
long long n;

long long solve( long long n ) {

    return ( (long long)( ( -1.0 + sqrt( 1 + 8*n ) ) / ( 2.0 )  ) );

}

int main( ) {

    scanf( "%d", &t );

    while ( t-- ) {
    
        scanf( "%lld", &n );
        
        printf( "%lld\n", solve(n) );
    
    }

    return 0;

}