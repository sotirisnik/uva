#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define MAXN 1000

using namespace std;

int n;

int brute_force( int n ) {

    vector <int> v;
    
    for ( int i = n; i >= 1; --i ) {
        v.push_back( i );
    }
    
    while ( v.size() >= 2 ) {
    
        v.pop_back();
        
        if ( v.size() <= 1 ) {
            break;
        }
        
        int top = v[ v.size()-1 ];
        v.pop_back();
        v.insert( v.begin(), top );
        
    }

    return ( v[0] );
    
}

int closest_pow( int n ) {

    int ret = 1;
    
    for ( ; ; ) {
        if ( ret >= n ) {
            return ( ret );
        }
        ret <<= 1;
    }
    
    return ( ret );

}

int main( ) {
    
    while ( true ) {
    
        scanf( "%d", &n );
        
        if ( n == 0 ) {
            break;
        }
        
        printf( "%d\n", 2*n - closest_pow(n) );
    
    }
    
    return 0;

}