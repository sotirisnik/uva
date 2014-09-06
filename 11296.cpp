#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int n;
long long ans;

int main( ) {

    while ( scanf( "%d", &n ) != EOF ) {
    
        ans = 0;
        
        for ( int x = 0; x <= n; x += 2 ) {
        
            int sum = n-x;
            
            if ( sum == 0 ) {
                ++ans;
            }else {
                ans += ( sum / 2 ) + 1;
            }
            
        }
        
        printf( "%lld\n", ans );
        
    }
    
    return 0;

}