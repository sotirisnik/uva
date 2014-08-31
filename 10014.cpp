#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

/*
ai = ( a_(i-1) + a_(i+1) ) / 2 - c_i
=> 2*ai = a_(i-1) + a_(i+1) - 2*c_i

2*a1 = a_0 + a2 - 2*c1
2*a2 = a_1 + a3 - 2*c2
2*a3 = a_2 + a4 - 2*c3
.......................
2*an = a_(n-1) + a(n+1) - 2*cn

=> 2*(a1+a2+...+an) = ( a_0 + a_1 + ... + a_(n-1) ) + ( a_2 + ... + a_(n+1) ) - 2*(c1+...+cn)
=> (a1+a2+...+an) + an = + ( a2+ ... + a(n+1) ) - 2*(c1+...+cn)
=> a1 + an = a_0 + a_(n+1) - 2*(c1+...+cn)

a1 + a1 = a_0 + a_(2) - 2*(c1)
a1 + a2 = a_0 + a_(3) - 2*(c1+c2)
a1 + a3 = a_0 + a_(4) - 2*(c1+c2+c3)
.....................................
a1 + an = a_0 + a_(n+1) - 2*(c1+...+cn)

=> (n+1)*a1 = n*a0 + a_(n+1) - 2*c1 - 2*(c1+c2) - 2*(c1+c2+c3) - ... - 2*(c1+...+cn)
*/

int t, n;
double a0, a1, an_plus_one, tmp;

int main( ) {

    scanf( "%d", &t );

    while ( t-- ) {
    
        scanf( "%d %lf %lf", &n, &a0, &an_plus_one );
        
        double Csum = 0;
        double sum = 0;
        
        for ( int i = 1; i <= n; ++i ) {
            scanf( "%lf", &tmp );
            Csum += sum + tmp;
            sum += tmp;
        }
        
        a1 = (double)( n*a0 + an_plus_one - 2*Csum ) / (double)( n + 1 );
        
        printf( "%.2lf\n", a1 );
        
        if ( t ) {
            putchar( '\n' );
        }
        
    }
    
    return 0;

}