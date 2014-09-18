#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <queue>
#include <algorithm>

#define MAXN 55

using namespace std;

int t, n;
long long fibo[MAXN+1];

int main( ) {

    fibo[1] = 1;

    for ( int i = 2; i <= MAXN; ++i ) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    
    scanf( "%d", &t );
    
    for ( int T = 0; T < t; ++T ) {
        scanf( "%d", &n );
        printf( "Scenario #%d:\n%lld\n\n", T+1, fibo[ n+2 ] );
    }
    
    return 0;

}