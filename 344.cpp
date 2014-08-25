#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

#define MAXN 101

using namespace std;

struct state {
    int i, v, x, l, c;
};

state f( int n, int i, int v, int x, int l, int c ) {

    if ( n == 0 ) {
        state ret;
        ret.i = i;
        ret.v = v;
        ret.x = x;
        ret.l = l;
        ret.c = c;
        return ( ret );
    }

    int mod = n % 10;
    int mod2 = n % 100;
    
    if ( n >= 100 ) {//c
        return ( f( n-100, i, v, x, l, c+1 ) );
    }else if ( n >= 90 ) {//xc
        return ( f( n-90, i, v, x+1, l, c+1 ) );
    }else if ( n >= 50 ) {//l
        return ( f( n-50, i, v, x, l+1, c ) );
    }else if ( n >= 40 ) {//xl
        return ( f( n-40, i, v, x+1, l+1, c ) );
    }else if ( n >= 10 ) {//x
        return ( f( n-10, i, v, x+1, l, c ) );
    }else if ( n >= 9 ) {//ix
        return ( f( n-9, i+1, v, x+1, l, c ) );
    }else if ( n >= 5 ) {//v
        return ( f(n-5, i, v+1, x, l, c ) );
    }else if ( n >= 4 ) {//iv
        return ( f( n-4, i+1, v+1, x, l, c ) );
    }else if ( n >= 1 ) {
        return ( f(n-1, i+1, v, x, l, c ) );
    }

}

int n, I[MAXN], V[MAXN], X[MAXN], L[MAXN], C[MAXN];
state tmp;

int main( ) {

    for ( int i = 1; i < MAXN; ++i ) {
        tmp = f( i, 0, 0, 0, 0, 0 );
        I[i] = I[i-1] + tmp.i;
        V[i] = V[i-1] + tmp.v;
        X[i] = X[i-1] + tmp.x;
        L[i] = L[i-1] + tmp.l;
        C[i] = C[i-1] + tmp.c;
    }
    
    while ( true ) {
        scanf( "%d", &n );
        if ( n == 0 ) {
            break;
        }
        printf( "%d: %d i, %d v, %d x, %d l, %d c\n", n, I[n], V[n], X[n], L[n], C[n] );
    }
    
    return 0;
    
}
