#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 1000

using namespace std;

int t, k;
int A[MAXN], X[MAXN], Y[MAXN];

void solve( int k ) {

    int cnt = 0;
    
    int sqrt_k = sqrt(k) + 1;
    
    for ( int i = 2; i <= sqrt_k; ++i )
        if ( k % i == 0 )
            A[cnt++] = i; 
   
    for ( int i = 0; i < cnt; ++i ) {
        Y[i] = k / A[i];
        X[i] = k / Y[i];
    }
    
    for ( int i = 0; i < cnt; ++i ) {
        for ( int j = i+1; j < cnt; ++j ) {
            if ( X[i] != X[j] && X[i] != Y[j] && Y[i] != X[j] && Y[i] != Y[j] && X[i] != Y[i] && X[j] != Y[j] ) {
                printf( "%d * %d = %d * %d\n", X[i], Y[i], X[j], Y[j] );
                return;
            }
        }
    }
    
}

int main( ) {

    scanf( "%d", &t );

    for ( int T = 0; T < t; ++T ) {
    
        scanf( "%d", &k );
        
        printf( "Case #%d: %d = ", T+1, k );
        
        solve( k );
        
    }
    
    return 0;

}