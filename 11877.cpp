#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int empty;

int main( ) {

    while ( true ) {
    
        scanf( "%d", &empty );
      
        if ( empty == 0 ) {
            break;
        }
      
        int ans = 0;
        
        while ( empty >= 3 ) {
            empty -= ( 2 );
            ++ans;
        }
        
        if ( empty+1 == 3 ) {
            ++ans;
        }
        
        printf( "%d\n", ans );
        
    }
    
    return 0;

}