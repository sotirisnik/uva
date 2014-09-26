#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t, n, player_pos;
double p;

int main( ) {
    
    scanf( "%d", &t );
    
    while( t-- ) {
    
        scanf( "%d %lf %d", &n, &p, &player_pos );

        if ( p < 1e-9 ) {
            printf( "0.0000\n" );
            continue;
        }
        
        double prob = 1.0f, prob_n;
        
        for ( int i= 1; i <= player_pos-1; ++i )
            prob *= ( 1 - p );
        
        prob_n = prob;
        
        for ( int i = player_pos; i <= n; ++i ) {
            prob_n *= ( 1 - p );
        }
        
        prob *= p;
        
        printf( "%.4lf\n", (double)(prob) / (double)( 1 - prob_n) );
        
    }
    
    return 0;

}