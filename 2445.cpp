#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <algorithm>

#define MAXM 201
#define MAXC 21
#define MAXK 21
#define INF 999999999

using namespace std;

int memo[MAXM][MAXC], A[MAXC][MAXK];
int size[MAXC];
int t, m, c;

int best( int money_left, int model ) {

	if ( money_left < 0 ) {
		return ( -INF );
	}
	
	if ( model == c+1 ) {
		return ( m-money_left );
	}
	
	if ( memo[money_left][model] != -1 ) {
		return ( memo[money_left][model] );
	}
	
	int Best = 0;

	for ( int j = 1; j <= size[model]; ++j )
		Best = max( Best, best( money_left-A[model][j], model+1 ) );
	
	memo[money_left][model] = Best;
	
	return ( Best );
	
}

int main( ) {

	//freopen("in.txt","r",stdin);
	
	scanf( "%d", &t );
	
	while ( t-- ) {
	
		scanf( "%d %d", &m, &c );
	
		for ( int i = 1; i <= c; ++i ) {
			scanf( "%d", &size[i] );
			for ( int j = 1; j <= size[i]; ++j ) {
				scanf( "%d", &A[i][j] );
			}
		}
		
		memset( memo, -1, sizeof memo );
		
		int ans = best(m,1);
		
		if ( ans <= 0 ) {
			printf( "no solution\n" );
		}else {
			printf( "%d\n", ans );
		}
		
	}

	return 0;

}