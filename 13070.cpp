#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 1000

using namespace std;

int t, n, sum, tot;
int A[MAXN];

int main( ) {

    scanf( "%d", &t );

    while ( t-- ) {
    
        scanf( "%d", &n );
    
        sum = 0;
    
        for ( int i = 0; i < n; ++i ) {
            scanf( "%d", &A[i] );
            sum += A[i];
        }
        
        tot = 0;
        
        for ( int i = 0; i < n; ++i ) {
            if ( n*A[i] > sum ) {
                ++tot;
            }
        }
        
        printf( "%.3lf%\n", 100.0*(double)tot / (double)n );
        
    }
    
    return 0;

}