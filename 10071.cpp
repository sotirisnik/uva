#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int vel, t, x;

int main( ) {

    while ( scanf( "%d %d", &vel, &t ) != EOF ) {
        
        x = 2*vel*t;
        
        printf( "%d\n", x );
        
    }

    return 0;

}