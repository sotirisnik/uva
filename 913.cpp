#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int n;

int main( ) {
    
    while ( scanf( "%d", &n ) != EOF ) {
        
        long long row = (n >> 1) + 1;
        
        long long ans = max( 1LL, 6*row*row - 9 );
        
        printf( "%lld\n", ans );
        
    }
    
    return 0;

}