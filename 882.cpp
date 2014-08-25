#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

int t, n;
char text[22];

int main( ) {

	//freopen("in.txt","r",stdin);

	scanf( "%d", &t );
	
	while ( t-- ) {
	
		scanf( "%s %d", text, &n );
		
		int len = strlen( text );
		
		for ( int i = 0; i < n; ++i )
			next_permutation( text, text+len );
		
		printf( "%s\n", text );
		
	}
	
	return 0;

}