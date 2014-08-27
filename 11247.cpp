#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

long long limit, tax_rate;

int main( ) {

    while ( true ) {
    
        scanf( "%lld %lld", &limit, &tax_rate );
        
        if ( limit == 0 && tax_rate == 0 ) {
            break;
        }
        
        if ( limit == 1 || tax_rate == 0 || tax_rate == 100 ) {
            printf( "Not found\n" );
            continue;
        }
        
        long long ans = ( 100 * ( limit-1) / ( 100 - tax_rate ) );
        
        if ( 100 * ( limit-1) % ( 100 - tax_rate ) == 0 ) {
            --ans;
        }
        
        if ( ans >= limit ) {
            printf( "%lld\n", ans ); 
        }else {
            printf( "Not found\n" );
        }
                
    }
    
    return 0;

}