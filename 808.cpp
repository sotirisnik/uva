#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int from, to;

pair<int,int> find_pos( int n ) {

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
        
        return ( make_pair( x, y ) );
        
}

int main( ) {
    
    while ( scanf( "%d %d", &from, &to ) ) {
        
        if ( from == 0 && to == 0 ) {
            break;
        }
        
        pair<int,int> p1 = find_pos( from );
        pair<int,int> p2 = find_pos( to );
        
        //cout << p1.first << " " << p1.second << endl;
        //cout << p2.first << " " << p2.second << endl;
        
        int x = p2.first - p1.first;
        int y = p2.second - p1.second;
        
        int dist = abs( x ) + abs( y );
        
        if ( x*y < 0 ) {
            dist = max( abs(x), abs(y) );
        }
        
        printf( "The distance between cells %d and %d is %d.\n", from, to, dist );
    
    }
    
    return 0;

}