#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

long long n;

long long range_sum( long long n ) {
    return ( n * ( n + 1 ) / 2 );
}

int main( ) {
    
    while ( scanf( "%lld", &n ) != EOF ) {
        
        long long diag = 1;
        long long k = 1;
        
        long long what = ( -1 + sqrt( -1 + 8*n ) ) / 2;
       
        k += range_sum( what+1 ) - 1;
        diag += what;
        
        long long x = 1;
        long long y = diag;
 
        long long diff = k - n;
        
        x += diff;
        y -= diff;
        
        printf( "%lld/%lld\n", x, y );
 
    }
    
    return 0;

}