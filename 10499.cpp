#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

long long n;

int main( ) {

    while ( true ) {
    
        scanf( "%lld", &n );
        
        if ( n < 0 ) {
            break;
        }
        
        if ( n == 1 ) {
            printf( "0%\n" );
        }else {
            printf( "%lld%\n", 100 * n / 4 );
        }
        
    }
    
    return 0;

}