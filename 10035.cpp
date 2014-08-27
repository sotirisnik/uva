#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int a, b, tmp, sum, carry, tot;

int main( ) {

    while ( true ) {
    
        scanf( "%d %d", &a, &b );
        
        if ( a == 0 && b == 0 ) {
            break;
        }
        
        if ( a > b ) {
            tmp = b;
            b = a;
            a = tmp;
        }
        
        carry = 0;
        tot = 0;
        
        while ( b > 0 ) {
            sum = b%10 + a%10 + carry;
            carry = 0;
            if ( sum > 9 ) {
                carry += (sum/10);
                ++tot;
            }
            a /= 10;
            b /= 10;
        }
        
        while ( a > 0 ) {
            sum = a%10 + carry;
            if ( sum > 9 ) {
                carry += (sum/10);
                ++tot;
            }
            a /= 10;
        }
        
        if ( tot == 0 ) {
            printf( "No carry operation.\n" );
        }else {
            if ( tot == 1 ) {
                printf( "1 carry operation.\n" );
            }else {
                printf( "%d carry operations.\n", tot );
            }
        }
        
    }
    
    return 0;

}