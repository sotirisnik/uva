#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int n, k, how, tot;

int main( ) {

    while ( scanf( "%d %d", &n, &k ) != EOF ) {
        how = 0;
        tot = n;
        while ( n-k >= 0 ) {
            n -= (k-1);
            ++tot;
        }
        printf( "%d\n", tot );
    }

    return 0;

}