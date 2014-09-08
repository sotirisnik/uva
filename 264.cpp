#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define MAXN 10000000

using namespace std;

int n, tot, tmp_row, tmp_col;

vector < pair<int,int> > v( MAXN+1 );

void mark( int x, int y ) {
    v[ ++tot ] = make_pair( x, y );
}

int main( ) {

    tmp_row = 1;
    tmp_col = 1;

    mark( tmp_row, tmp_col );
    
    for ( ; ; ) {
    
        //go right
        tmp_col += 1;
        mark( tmp_row, tmp_col );
        
        if ( tot >= MAXN ) {
            break;
        }
        
        //go left-down until you can
        while ( tmp_col - 1 >= 1 ) {
            tmp_row += 1;
            tmp_col -= 1;
            mark( tmp_row, tmp_col );
            if ( tot >= MAXN ) {
                break;
            }
        }
        
        //go down
        tmp_row += 1;
        mark( tmp_row, tmp_col );
        
        //go up-right until you can
        while ( tmp_row - 1 >= 1 ) {
            tmp_row -= 1;
            tmp_col += 1;
            mark( tmp_row, tmp_col );
            if ( tot >= MAXN ) {
                break;
            }
        }        
        
    }
    
    while ( scanf( "%d", &n ) != EOF ) {
        printf( "TERM %d IS %d/%d\n", n, v[n].first, v[n].second );
    }
    
    return 0;

}