#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int n;

int mod_pow( int base, int n ) {

    long long modn = n;

    long long num = 1;
    long long tmp = base;
    
    while ( n > 0 ) {
    
        if ( n % 2 == 1 ) {
            num = ( num * tmp ) % modn;
        }
        
        tmp = ( tmp * tmp ) % modn;
    
        n /= 2;
    
    }
    
    return ( num );
    
}

bool isprime( int n ) {
    
    int sqrt_n = sqrt( n ) + 1;

    if ( n % 2 == 0 && n != 2 ) {
        return ( false );
    }
    
    for ( int i = 3; i <= sqrt_n; i += 2 ) {
        if ( n % i == 0 ) {
            return ( false );
        }
    }
    
    return ( true );
    
}

bool isCarmicael( int n ) {

    if ( isprime(n) ) {
        return ( false );
    }

    for ( int i = 2; i < n; ++i ) {
        if ( mod_pow( i, n ) != i ) {
            return ( false );
        }
    }
    
    return ( true );

}

int main( ) {
    
    while( true ) {
    
        scanf( "%d", &n );

        if ( n == 0 ) {
            break;
        }
        
        if ( isCarmicael( n ) ) {//cnt > 2 && !isprime( n ) ) {
            printf( "The number %d is a Carmichael number.\n", n );
        }else {
            printf( "%d is normal.\n", n );
        }
        
    }
    
    return 0;

}