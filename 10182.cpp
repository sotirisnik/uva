#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int n;

int main( ) {

    while ( scanf( "%d", &n ) != EOF ) {
    
        int ring = 0;
        int k = 1;
        
        while ( n > k ) {
            ++ring;
            k += 6*ring;
        }
        
        int x = ring;
        int y = 0;
        
        while ( k != n && x != -y ) {
            --y;
            --k;
        }
        
        while ( k != n && x != 0 ) {
            --x;
            --k;
        }
       
        while ( k != n && y != 0 ) {
            ++y;
            --x;
            --k;
        }
        
        while ( k != n && x != -y ) {
            ++y;
            --k;
        }
        
        while ( k != n && x != 0 ) {
            ++x;
            --k;
        }
        
        while ( k != n && y != 1 ) {
            ++x;
            --y;
            --k;
        }
        
        printf( "%d %d\n", x, y );
        
    }

    return 0;

}