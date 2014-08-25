#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

#define MAXN 14

using namespace std;

int a[MAXN], sol[MAXN], n;

void dfs( int i, int total ) {

	 if ( total > 7 ) {
		return;
	 }

	 if ( i == n+1 ) {
		if ( total == 7 ) {
			for ( int k = 1; k <= 6; ++k ) {
				printf( "%d%c", sol[k], (k<6) ? ' ' : '\n' );
			}
		}
		return;
	 }
	 
	 if ( a[i] > sol[total-1] ) {
		 int tmp = sol[total];
		 sol[total] = a[i];
		 dfs( i + 1, total+1 );
		 sol[total] = tmp;
	 }

	 dfs( i + 1, total );

	 
}

int main( ) {

	//freopen("in.txt","r",stdin);

	scanf( "%d", &n );
	
	if ( n == 0 ) {
		return 0;
	}
	
	while ( true ) {
		
		for ( int i = 1; i <= n; ++i )
			scanf( "%d", &a[i] );
	
		dfs( 1, 1 );
		
		scanf( "%d", &n );
		
		if ( n == 0 ) {
			break;
		}
		
		putchar( '\n' );
		
	}

	return 0;

}