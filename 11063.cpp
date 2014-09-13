#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <set>
#include <algorithm>

#define MAXN 100

using namespace std;

int T, n;
int A[MAXN+1];

int main( ) {
   
    while ( scanf( "%d", &n ) != EOF ) {
    
        bool fl = true;
    
        scanf( "%d", &A[1] );
    
        if ( A[1] < 1 ) {
            fl = false;
        }
    
        for ( int i = 2; i <= n; ++i ) {
            scanf( "%d", &A[i] );
            if ( A[i] < A[i-1] || A[i] < 1 ) {
                fl = false;
            }
        }
    
        if ( fl ) {

            set <int> s;
        
            for ( int i = 1; i <= n && fl; ++i ) {
                for ( int j = i; j <= n && fl; ++j ) {
                    if ( s.find( A[i] + A[j] ) != s.end() ) {
                        fl = false;
                        break;
                    }else {
                        s.insert( A[i] + A[j] );
                    }
                }
            }

        }
        
        if ( fl ) {
            printf( "Case #%d: It is a B2-Sequence.\n\n", ++T );
        }else {
            printf( "Case #%d: It is not a B2-Sequence.\n\n", ++T );
        }
        
    }
    
    return 0;

}