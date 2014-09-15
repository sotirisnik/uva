#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

double n, p, e = 2.71828;

int main( ) {
    
    while ( scanf( "%lf %lf", &n, &p ) != EOF ) {

        double ans = pow( e, (1.0/n) * ( log10( p ) / log10( e ) ) );
        
        printf( "%.0lf\n", ans );
        
    }
    
    return 0;

}