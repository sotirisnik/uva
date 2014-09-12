#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>
#include <algorithm>

#define MAXN 5842

using namespace std;

int counter, n;
int A[MAXN+1];

queue <int> q2, q3, q5, q7;

int main( ) {
    
    A[++counter] = 1;
    
    q2.push( 2 );
    q3.push( 3 );
    q5.push( 5 );
    q7.push( 7 );
    
    while ( counter < MAXN ) {
        
        int top = min( min( q2.front(), q3.front() ), min( q5.front(), q7.front() ) );
        
        while ( q2.front() < top )
            q2.pop();
            
        while ( q3.front() < top )
            q3.pop();
        
        while ( q5.front() < top )
            q5.pop();
            
        while ( q7.front() < top )
            q7.pop();
            
        if ( q2.front() == top )
            q2.pop();
            
        if ( q3.front() == top )
            q3.pop();
        
        if ( q5.front() == top )
            q5.pop();
        
        if ( q7.front() == top )
            q7.pop();
        
        A[++counter] = top;
        
        q2.push( top*2 );
        q3.push( top*3 );
        q5.push( top*5 );
        q7.push( top*7 );
        
    }
    
    while ( true ) {
    
        scanf( "%d", &n );
        
        if ( n == 0 ) {
            break;
        }
        
        printf( "The %d", n );
        
        if ( (n%100) > 10 && (n%100) < 20 ) {
            printf( "th" );
        }else {
            switch( n % 10 ) {
                case 1:
                    printf( "st" );
                    break;
                case 2:
                    printf( "nd" );
                    break;
                case 3:
                    printf( "rd" );
                    break;
                default:
                    printf( "th" );
            }
        }
        
        printf( " humble number is %d.\n", A[n] );
        
    }
    
    return 0;

}