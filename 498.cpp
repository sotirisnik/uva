#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

#define MAXN 10000000

using namespace std;

int cntC, cntX;
int C[MAXN], X[MAXN];

char text[MAXN];

void split_numbers( int what ) {

    int number = 0;
    bool fl = false;
    bool neg = false;
    
    for ( int i = 0; text[i] != '\0'; ++i ) {
    
        if ( text[i] >= '0' && text[i] <= '9' ) {
            number *= 10;
            number += text[i]-'0';
        }else if ( text[i] == '-' ) {
            neg = true;
        }else if ( text[i] == ' ' ) {
        
            if ( neg ) {
                number *= -1;
            }
        
            if ( what == 1 ) {
                C[++cntC] = number;
            }else {
                X[++cntX] = number;
            }
            
            number = 0;
            fl = false;
            neg = false;
        }
    
    }
    
    if ( neg ) {
        number *= -1;
    }
    
    if ( what == 1 ) {
        C[++cntC] = number;
    }else {
        X[++cntX] = number;
    }

}

int calc( int n ) {

    int ret = 0;

    int x = 1;
    
    for ( int i = cntC; i >= 1; --i ) {
        ret += C[i] * x;
        x *= X[n];
    }
    
    return ( ret );

}

int main( ) {
    
    while ( gets( text ) ) {
    
        cntC = 0;
    
        split_numbers( 1 );

        gets( text );

        cntX = 0;
        
        split_numbers( 2 );
        
        printf( "%d", calc( 1 ) );
        
        for ( int i = 2; i <= cntX; ++i ) {
            printf( " %d", calc( i ) );
        }
        
        putchar( '\n' );
        
    }
    
    return 0;

}