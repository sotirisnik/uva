#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

int n, m;

int main( ) {
        
    while ( true ) {
    
        scanf( "%d", &n );

        if ( n == 0 ) {
            break;
        }
        
        if ( n >= 101 ) {
            printf( "f91(%d) = %d\n", n, n - 10 );
        }else {
            printf( "f91(%d) = 91\n", n );
        }
        
    }
    
    return 0;

}