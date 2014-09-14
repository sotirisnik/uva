#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 1000000

using namespace std;

int n, k, cnt;

struct state {
    int a, b;
};

bool operator <( const state &a, const state &b ) {
    return ( a.a * b.b < b.a * a.b );
}

state A[MAXN+1];

int gcd( int a, int b ) {

    if ( b == 0 ) {
        return ( a );
    }
    
    return ( gcd( b, a % b ) );

}

int main( ) {
    
    while( scanf( "%d %d", &n, &k ) != EOF ) {
         
        cnt = 0;

        A[0].a = 1;
        A[0].b = 1;
        
        for ( int i = 1; i <= n; ++i ) {
            for ( int j = i+1; j <= n; ++j ) {
                if ( gcd( i, j ) == 1 ) {
                    ++cnt;
                    A[cnt].a = i;
                    A[cnt].b = j;
                }
            }
        }

        sort( A, A+cnt+1 );
        
        printf( "%d/%d\n", A[k-1].a, A[k-1].b );
        
    }
    
    return 0;

}