#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

string solve( int n ) {

    int sum = 0;

    for ( int i = 1; i < n; ++i )
        if ( n % i == 0 ) {
            sum += i;
        }

    string ans = "";
        
    if ( sum == n ) {
        ans = "PERFECT";
    }else if ( sum > n ) {
        ans = "ABUNDANT";
    }else {
        ans = "DEFICIENT";
    }
    
    return ( ans );
        
}

int n;

int main( ) {

    printf( "PERFECTION OUTPUT\n" );

    while ( true ) {
        scanf( "%d", &n );
        if ( n == 0 ) {
            break;
        }
        printf( "%5d  %s\n", n, solve(n).c_str() );
    }
    
    printf( "END OF OUTPUT\n" );

    return 0;

}