#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 10

using namespace std;

int n;
int Cat[MAXN+1];
bool fl;

int main( ) {
    
    Cat[0] = 1;
    
    for ( int i = 1; i <= MAXN; ++i ) {
        Cat[i] = Cat[i-1] * ( 2*i ) * ( 2*i-1 ) / ( ( i+1 ) * ( i ) );
    }
    
    while ( scanf( "%d", &n ) != EOF ) {
    
        if ( fl ) {
            putchar( '\n' );
        }
    
        fl = true;
    
        printf( "%d\n", Cat[n] );
        
    }
    
    return 0;

}