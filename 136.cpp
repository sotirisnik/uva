#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>
#include <algorithm>

#define MAXN 1500

using namespace std;

int counter;
int A[MAXN+1];

queue <int> q2, q3, q5;

int main( ) {
    
    A[++counter] = 1;
    
    q2.push( 2 );
    q3.push( 3 );
    q5.push( 5 );
    
    while ( counter < MAXN ) {
        
        int top = min( q2.front(), min( q3.front(), q5.front() ) );
        
        while ( q2.front() < top )
            q2.pop();
            
        while ( q3.front() < top )
            q3.pop();
        
        while ( q5.front() < top )
            q5.pop();
            
        if ( q2.front() == top )
            q2.pop();
            
        if ( q3.front() == top )
            q3.pop();
        
        if ( q5.front() == top )
            q5.pop();
            
            
        A[++counter] = top;
        
        q2.push( top*2.0 );
        q3.push( top*3.0 );
        q5.push( top*5.0 );
        
    }
    
    printf( "The 1500'th ugly number is %lld.\n", A[1500] );

    return 0;

}