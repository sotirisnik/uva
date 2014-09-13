#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 316

using namespace std;

int from, to, sol;
int A[MAXN+1];

int main( ) {

    int counter = 0;

    for ( int i = 1; i*i <= 100000; ++i ) {
        A[++counter] = i*i;
    }
   
    while ( true ) {
    
        scanf( "%d %d", &from, &to );

        if ( from == 0 && to == 0 ) {
            break;
        }
        
        sol = 0;
        
        for ( int i = 1; i <= counter; ++i ) {
            if ( A[i] >= from && A[i] <= to ) {
                ++sol;
            }
        }
        
        printf( "%d\n", sol );
        
    }
    
    return 0;

}