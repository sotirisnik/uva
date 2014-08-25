#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int t;
long long n;

int main( ) {

    scanf( "%d", &t );
    
    while ( t-- ) {
        scanf( "%lld", &n );
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        printf( "%lld\n", abs((n/10)%10) );
    }

    return 0;

}