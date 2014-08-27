#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int t, candidates, chef_per_show;

int main( ) {

    scanf( "%d", &t );

    while ( t-- ) {
    
        scanf( "%lld %lld", &candidates, &chef_per_show );
      
        int ans = 0;
        
        while ( candidates >= chef_per_show ) {
            candidates -= ( chef_per_show - 1 );
            ++ans;
        }
        
        if ( candidates != 1 ) {
            printf( "cannot do this\n" );
        }else {
            printf( "%d\n", ans );
        }
        
    }
    
    return 0;

}