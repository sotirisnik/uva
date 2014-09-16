#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int n, ans;

int main( ) {
    
    while ( true ) {
    
        scanf( "%d", &n );
    
        if ( n == 0 ) {
            break;
        }
    
        ans = 0;
    
        for ( int i = 0; i < 32; ++i ) {
            if ( n & (1<<i) ) {
                ++ans;
            }
        }
    
        printf( "The parity of " );
        
        bool fl = false;
        
        for ( int i = 31; i >= 0; --i ) {
            if ( n & (1<<i) ) {
                fl = true;
                putchar( '1' );
            }else {
                if ( fl ) {
                    putchar( '0' );
                }
            }
        }
        
        printf( " is %d (mod 2).\n", ans );
    
    }
    
    return 0;

}