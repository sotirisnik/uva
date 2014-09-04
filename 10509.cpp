#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

double n;
long long a, tmp;

int main( ) {

    while ( true ) {
    
        scanf( "%lf", &n );
        
        if ( n < 1e-9 ) {
            break;
        }
        
        for ( a = 1; a < 101; ++a ) {
            
            tmp = a * a * a;
            
            if ( tmp == n ) {
                break;
            }else if ( tmp > n ) {
                --a;
                break;
            }
            
        }
        
        double dx = ( n - a*a*a ) / ( 3.0*a*a ) ;
        
        printf( "%.4lf\n", a + dx );
        
    }
    
    return 0;

}