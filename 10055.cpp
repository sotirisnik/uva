#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

long long n, m;

int main( ) {

    while ( scanf( "%lld %lld", &n, &m ) != EOF  ) {
        printf( "%lld\n", abs(n-m) );
    }

    return 0;

}