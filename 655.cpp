#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <algorithm>

#define MAXN 501

using namespace std;

int t, n, k;
long long p[MAXN], sum;
bool slash[MAXN];

bool f( long long how ) {

	for ( int i = 1; i <= n; ++i )
		if ( p[i] > how )
			return ( false );
	
	long long sum = 0;
	int man = 1;

	for ( int i = n; i >= 1; --i ) {
		if ( sum + p[i] > how ) {
			sum = p[i];
			++man;
		}else {
			sum += p[i];
		}
	}
	
	return ( man <= k );

}

int main( ) {

	//freopen("in.txt","r",stdin);

	scanf( "%d", &t );
	
	while( t-- ) {
	
		scanf( "%d %d", &n, &k );
		
		for ( int i = 1; i <= n; ++i ) {
			scanf( "%lld", &p[i] );
			sum += p[i];
		}
		
		long long lo = 0;
		long long hi = sum;
		
		//printf( "%d %d\n", lo, hi );
		
		while ( lo < hi ) {
		
			long long mid = ( lo + hi ) / 2;
			
			if ( f(mid) ) {
				hi = mid;
			}else {
				lo = mid+1;
			}
		
		}
		
		//printf( "%lld\n", hi );
		
		for ( int i = 1; i <= n; ++i )
			slash[i] = 0;
		
		sum = 0;
		
		for ( int i = n; i >= 1; --i ) {
			if ( sum+p[i] > hi || k == i+1 ) {
				sum = p[i];
				--k;
				slash[i] = true;
			}else {
				sum += p[i];
			}
		
		}
		
		/*
		for ( int i = 1; i <= n; ++i )
			printf( "%d\n", slash[i] );
		*/
		
		printf( "%lld", p[1] );
		if ( slash[1] ) {
			printf( " /" );
		}
		
		for ( int i = 2; i <= n; ++i ) {
			printf( " %lld", p[i] );
			if ( slash[i] && i < n ) {
				printf( " /" );
			}
		}
		
		printf( "\n" );
		
	}

	return 0;

}