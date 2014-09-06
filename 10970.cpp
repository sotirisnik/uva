#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int n, m;

int main( ) {

    while ( scanf( "%d %d", &n, &m ) != EOF ) {
        printf( "%d\n", n*m - 1 );
    }
    
    return 0;

}