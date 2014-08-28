#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 1000

using namespace std;

bool Equal( double a, double b ) {
    return ( fabs( a - b ) < 1e-15 );
}

int f( int A[], int cnt, double avg ) {

    int idx = 0;

    double dist_idx = fabs( A[0] - avg );
  
    for ( int i = 1; i < cnt; ++i ) {
        
        double dist_i = fabs( A[i] - avg );
        
        if ( dist_i < dist_idx || ( Equal( dist_i, dist_idx ) && A[i] < A[idx] ) ) {
            idx = i;
            dist_idx = dist_i;
        }
        
    }
    
    return ( idx );

}

int t, n, m, k, cnt;
double sum;
int A[MAXN], B[MAXN], C[MAXN];

int main( ) {

    scanf( "%d", &t );

    for ( int T = 0; T < t; ++T ) {
    
        scanf( "%d %d %d", &n, &m, &k );
        
        sum = 0;
        
        for ( int i = 0; i < m; ++i ) {
            scanf( "%d", &A[i] );
            sum += A[i];
        }
        
        for ( int i = 0; i < k; ++i ) {
            scanf( "%d", &B[i] );
            sum += B[i];
        }
        
        long long cnt = (n-k-m);
        
        for ( long long i = 0; i < cnt; ++i ) {
            scanf( "%d", &C[i] );
            sum += C[i];
        }
        
        printf( "Case #%d: ", T+1 );
      
        double avg = (double)sum / (double)( n );
      
        int idxA = f( A, m, avg );
        int idxB = f( B, k, avg );
        
        printf( "%d %d\n", A[idxA], B[idxB] );
      
        
    }
    
    return 0;

}