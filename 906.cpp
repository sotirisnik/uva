#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

double Equal( double a, double b ) {
    return ( fabs( a - b ) < 1e-14 );
}

long long a, b, c, d;
double n;

int main( ) {

    while ( scanf( "%lld %lld %lf", &a, &b, &n ) != EOF ) {
        
        double logos = (double)a / (double)b;
        
        for ( d = 1; ; ++d ) {
        
            c = (long long)( (double)(a) * (double)d / (double)b ) + 1;
        
            double tmp = (double)c / (double)d;
            
            if ( ( logos < tmp ) && ( tmp-logos < n || Equal( tmp-logos, n ) ) ) {
                break;
            }
        
        }
        
        printf( "%lld %lld\n", c, d );
        
    }
    
    return 0;

}