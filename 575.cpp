#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <algorithm>

#define MAXN 10000000

using namespace std;

char text[MAXN];

int main( ) {
    
    while ( true ) {
    
        scanf( "%s", text );
    
        if ( strcmp( text, "0" ) == 0 ) {
            break;
        }
    
        int x = 2;
        int ans = 0;
    
        int len = strlen( text );
    
        for ( int i = len-1; i >= 0; --i ) {
            ans += (text[i]-'0')*( x-1 );
            x <<= 1;
        }
        
        printf( "%d\n", ans );
    
    }
    
    return 0;

}